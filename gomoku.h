#ifndef GOMOKU_H
# define GOMOKU_H 

#include <iostream>
#include <istream>
#include <string>
#include <vector>
using namespace std;

struct t_board
{
    int sz;
    vector<vector<char>> map;
};

const int dx[3] = {-1, 0, 1};
const int dy[3] = {-1, 0, 1};

int input_check(string s);
void init_board(t_board &board);
void print_board(t_board &board);
int run(t_board &board);
int input_check_player(int i, int j, t_board &board);
int board_check(int i, int j, t_board &board);
#endif
