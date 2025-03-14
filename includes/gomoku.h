#ifndef GOMOKU_H
# define GOMOKU_H 

#include <iostream>
#include <istream>
#include <string>
#include <vector>
#include <set>
#include <utility>
using namespace std;

struct t_board
{
    string player1;
    string player2;
    int sz;
    vector<vector<char>> map;
};

const int dx[3] = {-1, 0, 1};
const int dy[3] = {-1, 0, 1};

int board_size_check(string s);
void init_board(t_board &board);
void print_board(t_board &board);
void print_board_color(t_board &board, set<pair<int, int>> &st);
int run(t_board &board);
int input_check_player(int i, int j, t_board &board);
int board_check(int i, int j, t_board &board, set<pair<int, int>> &st);
int is_number(string s);

#endif
