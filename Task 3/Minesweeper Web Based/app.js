var board = [];
var height = 10;
var width = 10;
var bombs = Math.floor( (height*width) / 4);
var bomb_loc = [];
var board_state = [];// C=close F=Flag O=Open
var first = true;
var hasBomb = false;

for (var y = 0; y < height; y++){
    var row = [];
    var state = [];
    for (var x = 0; x < width; x++){
        row.push('C');
        state.push('C')
    }
    board.push(row);
    board_state.push(state);
}

function setBomb(ignoreX,ignoreY) {
    for (var i = 0; i < bombs; i++)
    {
        var x,y;
        do{
            y = Math.floor(Math.random()*height);
            x = Math.floor(Math.random()*width);
        }while(bomb_loc.find(loc => (loc[0] == x && loc[1] == y) ) != undefined);
        bomb_loc.push([x,y]);
        board[y][x] = 'X';
    }
    bomb_loc = bomb_loc.filter(loc => (loc[0] != ignoreX && loc[1] != ignoreY))
    board[ignoreY][ignoreX] = 'C'
    for (var row = 0; row < height; row++) {
        for (var col = 0; col < width; col++) {
            if (board[row][col] == 'X') continue;
            board[row][col] = countBomb(col, row);
        }
    }
    hasBomb = true
}

function countBomb(x, y)
{
    var bombs = 0;
    var conditions = [
        [1,0],//Bottom
        [-1,0],//top
        [0,1],//right
        [0,-1],//left
        [1,1],//lower right
        [-1,-1],//upper left
        [1,-1],//lower left
        [-1,1]//upper right
    ]
    for (var i in conditions)
    {
        var x1 = x + conditions[i][0], y1 = y + conditions[i][1];
        if (board[y1] != undefined && board[y1][x1] != undefined && board[y1][x1] == 'X')
            bombs++;
    }
    return bombs;
}

function executeAction(x,y,action)
{
    if (!hasBomb) setBomb(x,y);
    if (action == 0) {//OPEN
        if (board_state[y][x] == 'C') {
            board_state[y][x] = 'O'

            for (var i = -1; i <= 1; i++)
            {
                for (var j = -1; j <= 1; j++)
                {


                    //console.log(i,j)
                    if (board[y+i] == undefined ||
                        board[y+i][x+j] == undefined) continue;
                    if (board[y][x] == 0) {
                        executeAction(x+j, y+i,0)
                    }
                    if (first && board[y+i][x+j] == 0) {
                        first = false;
                        executeAction(x+j, y+i,0)
                    }
                }
            }

            if (board[y][x] == 'X') {
                alert('Game Over');
                return location.href = ""
            }
        }
    } else if (action == 1) {
        if (board_state[y][x] == 'F') {
            board_state[y][x] = 'C'
        } else if (board_state[y][x] == 'C') {
            board_state[y][x] = 'F';
        }
    }
    displayBoard();

}

function displayBoard()
{
    var table = document.createElement("table");
    for (var row = 0; row < height; row++)
    {
        var tr = document.createElement("tr");
        for (var col = 0; col < width; col++)
        {
            var td = document.createElement("td");
            td.setAttribute("onclick", `executeAction(${col},${row},0)`)
            td.setAttribute("oncontextmenu", `executeAction(${col}, ${row},1)`)
            switch(board_state[row][col]){
                case 'O':
                    td.innerHTML = board[row][col] == 0 ? ' ' : board[row][col];
                    break;
                
                case 'C':
                    td.className = "close";
                    break;
                
                case 'F':
                    td.className = "flag";
                    break;
            } 
            tr.appendChild(td);
        }
        table.appendChild(tr);
    }
    document.getElementById('board').innerHTML = '';
    document.getElementById('board').appendChild(table);
}

displayBoard();