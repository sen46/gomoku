#include "gomoku.h"
#include <string>

int main()
{
    cout << "盤面の大きさを入力してください" << endl;
    string s;
    cin >> s;
    if (input_check(s) == 0)
    {
        return (1);
    }
    t_board board;
    board.sz = stoi(s);
    init_board(board);
    run(board);
}
