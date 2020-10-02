const buttonsGrid = document.querySelector("#btns");
const buttonsNumber = [1,2,3,4,5,6,7,8,9];
const rotateNumbers = [1,2,3,6,9,8,7,4];

buttonsNumber.map(number => {
    buttonsGrid.innerHTML += `
        <button type="button" id="btn${number}" onClick="rotate(${number})">
                ${number}
        </button>
    `;
});

const buttons = rotateNumbers.map(number => {
        return document.querySelector(`#btn${number}`);                                
});

const rotate = (id) => {
    if (id != 5) {
        return
    }

    rotateNumbers.unshift(rotateNumbers.pop());       
    
    for (let i = 0; i < rotateNumbers.length; i++) {
        buttons[i].innerHTML = rotateNumbers[i];  
    }    
}