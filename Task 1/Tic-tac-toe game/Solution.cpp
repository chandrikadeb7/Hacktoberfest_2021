#include <iostream>
#include <string>
#include <stdlib.h>

void create_mesh(char arr[][3]);
void play();

int main()
{
    printf("TIC TAC TOE (❌ | ⭕)\n");
    char array[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
    create_mesh(array);
    play();
    return 0;
}

void create_mesh(char arr[][3])
{
    printf("\n");
    printf("  %c  |  %c  |  %c \n", arr[0][0], arr[0][1], arr[0][2]);
    printf("-----|-----|-----\n");
    printf("  %c  |  %c  |  %c \n", arr[1][0], arr[1][1], arr[1][2]);
    printf("-----|-----|-----\n");
    printf("  %c  |  %c  |  %c \n", arr[2][0], arr[2][1], arr[2][2]);
}

int select_block(char arr[][3])
{
    int block = 0;
    std ::string blockstr;
    while (block < 1 || block > 9)
    {
        printf("Enter block number : \n");
        std ::cin >> blockstr;
        try
        {
            block = stoi(blockstr);
        }
        catch (std::exception &e)
        {
            if (blockstr == "q")
            {
                exit(0);
            }
            else
            {
                printf("Enter valid number !!!\n");
            }
        }
        if (block < 1 || block > 9)
        {
            continue;
        }
        else if ((arr[0][block - 1] == 'X' || arr[0][block - 1] == 'O') || (arr[1][block - 4] == 'X' || arr[1][block - 4] == 'O') || (arr[2][block - 7] == 'X' || arr[2][block - 7] == 'O'))
        {
            block = 0;
        }
    }
    return block;
}

int check_win(char arr[][3])
{
    int win = 0, i = 0, j = 0;
    // Rows check
    while (i < 3)
    {
        if ((arr[i][j] == 'X' || arr[i][j] == 'O') && arr[i][j] == arr[i][j + 1] && arr[i][j] == arr[i][j + 2])
        {
            win = 1;
            break;
        }
        i++;
    }
    i = 0;
    j = 0;
    // Column check
    while (j < 3)
    {
        if ((arr[i][j] == 'X' || arr[i][j] == 'O') && arr[i][j] == arr[i + 1][j] && arr[i][j] == arr[i + 2][j])
        {
            win = 1;
            break;
        }
        j++;
    }
    if (win == 0)
    {
        //Diagonal check
        if ((arr[0][0] == 'X' || arr[0][0] == 'O') && arr[0][0] == arr[1][1] && arr[0][0] == arr[2][2])
            win = 1;
        if ((arr[0][2] == 'X' || arr[0][2] == 'O') && arr[0][2] == arr[1][1] && arr[0][2] == arr[2][0])
            win = 1;
    }
    return win;
}

void play()
{
    int block, player = 1, win = 0, filled = 0;
    char sign = 'x';
    char arr[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
    while (win == 0)
    {
        printf("\n");
        if (player == 1)
            printf("\033[1;31m Player %d turn :-\033[0m\n", player);
        else
            printf("\033[1;33m Player %d turn :-\033[0m\n", player);

        sign = (player == 1 ? 'X' : 'O');
        block = select_block(arr);

        if (block > 0 && block < 4)
        {
            arr[0][block - 1] = sign;
        }
        else if (block > 3 && block < 7)
        {
            arr[1][block - 4] = sign;
        }
        else
        {
            arr[2][block - 7] = sign;
        }

        filled++;

        if (filled == 9)
        {
            printf("Match is drawn (* ~ *)\n");
            break;
        }

        create_mesh(arr);

        win = check_win(arr);

        if (win == 1)
        {
            if (player == 1)
                printf("\033[1;31m \n!!! Player %d won :)\033[0m\n", player);
            else
                printf("\033[1;33m \n:) Player %d won !!!\033[0m\n", player);
        }
        player = (player == 1 ? 2 : 1);
    }
}