#include "../includes/gomoku.h"

int board_check(int i, int j, t_board &board)
{
    for (int di = 0; di < 3; di++)
    {
        for (int dj = 0; dj < 3; dj++)
        {
            int flag = 1;
            for (int len = 1; len < 5; len++)
            {
                if (dx[di] == dy[dj] && dx[di] == 0)
                {
                    flag = 0;
                    break;
                }

                int ni = i + dx[di] * len;
                int nj = j + dy[dj] * len;

                if ((ni >= 0 && ni < board.sz) && \
                        (nj >= 0 && nj < board.sz) && \
                        board.map[ni][nj] != board.map[i][j])
                {
                    flag = 0;
                    break;
                }
                else if (ni < 0 || ni >= board.sz || nj < 0 || nj >= board.sz)
                {
                    flag = 0;
                    break;
                }
            }
            if (flag) return (1);

        }
    }
    return (0);
}
