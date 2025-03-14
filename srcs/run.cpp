#include "../includes/gomoku.h"

int run(t_board &board)
{
    int flag = 1;
    while (true)
    {
        print_board(board);
        set<pair<int, int>> st;
        if (flag)
            cout << board.player1;
        else
            cout << board.player2;        
        cout << "の番です。数字を２つ入力してください\n";
        int i, j;
        string s, t;
        do 
        {
            do 
            {
                cin >> s >> t;
                if (!is_number(s) || !is_number(t))
                {
                    cout << "正しい数字を入力してください。\n";
                }
            } while (!is_number(s) || !is_number(t));

            i = stoi(s) - 1;
            j = stoi(t) - 1;
        } while (!input_check_player(i, j, board));

        if (flag) board.map[i][j] = 'o';
        else board.map[i][j] = 'x';

        // print_board(board);
        if (board_check(i, j, board, st))
        {
            print_board_color(board, st);
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
