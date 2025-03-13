#include "gomoku.h"

int run(t_board &board)
{
    int flag = 1;
    while (true)
    {
        if (flag)
            cout << "player1 の番です。\n";
        else
            cout << "player2 の番です。\n";        
        int i = -1, j = -1;
        do 
        {
            cin >> i >> j;
            i--;
            j--;
        } while (!input_check_player(i, j, board));

        if (flag) board.map[i][j] = 'o';
        else board.map[i][j] = 'x';

        print_board(board);
        if (board_check(i, j, board))
        {
            if (flag)
            {
                cout << "player1 の勝利です。\n";
                break;
            }
            else
            {
                cout << "player2 の勝利です。\n";
                break;
            }
        }
        flag = 1 - flag;
    }
    return (1);
}
