ticTacToeBoard = {'TL': ' ', 'TM': ' ', 'TR': ' ',
            'ML': ' ', 'MM': ' ', 'MR': ' ',
            'LL': ' ', 'LM': ' ', 'LR': ' '}
def printBoard(board):
    print(board['TL'] + '|' + board['TM'] + '|' + board['TR'])
    print('-+-+-')
    print(board['ML'] + '|' + board['MM'] + '|' + board['MR'])
    print('-+-+-')
    print(board['LL'] + '|' + board['LM'] + '|' + board['LR'])

turn = 'X'
for i in range(9):
    printBoard(ticTacToeBoard)
    print('Turn for ' + turn + '. Enter ...')
    move = input()
    ticTacToeBoard[move] = turn
    if turn == 'X':
        turn = 'O'
    else:
        turn = 'X'
printBoard(ticTacToeBoard)