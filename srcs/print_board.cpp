#include "../includes/gomoku.h"
#include <utility>

void print_board(t_board &board)
{
    cout << "   ";
    for (int i = 1; i <= board.sz; i++)
    {
        if (i < 9)
            cout << i << "  ";
        else
            cout << i << ' ';
    }
    cout << endl;
    for (int i = 0; i < board.sz; i++)
    {
        if (i + 1 < 10) cout << ' ' << i + 1 << ' ';
        else cout << i + 1 << ' ';

        for (int j = 0; j < board.sz; j++)
        {
            cout << board.map[i][j] << "  ";
        }
        cout << endl;
    }
}

void print_board_color(t_board &board, set<pair<int, int>> &st)
{
    cout << "   ";
    for (int i = 1; i <= board.sz; i++)
    {
        if (i < 9) cout << i << "  ";
        else cout << i << ' ';
    }
    cout << endl;

    for (int i = 0; i < board.sz; i++)
    {
        if (i + 1 < 10)
            cout << ' ' << i + 1 << ' ';
        else
            cout << i + 1 << ' ';
        for (int j = 0; j < board.sz; j++)
        {
            //-- if (st.count({i, j})) cout << "\033[31m aho \033[" << mboard.map[i][j] << "  ";
            if (st.count(make_pair(i, j))) printf("\x1b[32;5m%c\x1b[0m  ", board.map[i][j]); // 緑色（32）+ 点滅（5）
            else cout << board.map[i][j] << "  ";
        }
        cout << endl;
    }
}

