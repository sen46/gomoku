#include "gomoku.h"

void print_board(t_board &board)
{
    cout << "   ";
    for (int i = 1; i <= board.sz; i++)
    {
        if (i < 9)
        {
            cout << i << "  ";
        }
        else
        {
            cout << i << ' ';
        }
    }
    cout << endl;
    for (int i = 0; i < board.sz; i++)
    {
        if (i + 1 < 10)
        {
            cout << ' ' << i + 1 << ' ';
        }
        else
        {
            cout << i + 1 << ' ';
        }
        for (int j = 0; j < board.sz; j++)
        {
            cout << board.map[i][j] << "  ";
        }
        cout << endl;
    }
}
