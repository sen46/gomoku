#include "../includes/gomoku.h"

void init_board(t_board &board)
{
    board.map.resize(board.sz);
    for (int i = 0; i < board.sz; i++)
    {
        board.map[i].resize(board.sz);
        for (int j = 0; j < board.sz; j++)
        {
            board.map[i][j] = '.';
        }
    }
}
