#include "gomoku.h"

int input_check(string s)
{
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (s[i] < '0' || s[i] > '9')
        {
            cout << "数字を入力してください。" << endl;
            return (0);
        }
    }

    n = stoi(s);
    if (n > 20)
    {
        cout << "盤面が大きすぎます。" << endl;
        return (0);
    }
    return (1);
}

int input_check_player(int i, int j, t_board &board)
{
    if (i < 0 || i > board.sz || j < 0 || j > board.sz)
    {
        cout << "無効な入力です。もう一度入力してください\n";
        return (0);
    }
    if (board.map[i][j] != '.')
    {
        cout << "そのマスはすでに埋められています。\n";
        return (0);
    }
    return (1);
}
