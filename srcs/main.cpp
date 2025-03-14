#include "../includes/gomoku.h"

int main()
{
    t_board board;
    string s;
    cout << "player1（先攻）の名前を入力してください\n";
    cin >> board.player1;
    cout << "player2（後攻）の名前を入力してください\n";
    cin >> board.player2;
    while (board.player1 == board.player2)
    {
        cout << board.player1 << "と異なる名前を入力してください。\n";
        cin >> board.player2;
    }
    do 
    {
        cout << "盤面の大きさを入力してください" << endl;
        cin >> s;
    } while (!board_size_check(s));

    board.sz = stoi(s);
    init_board(board);
    run(board);
    return (0);
}
