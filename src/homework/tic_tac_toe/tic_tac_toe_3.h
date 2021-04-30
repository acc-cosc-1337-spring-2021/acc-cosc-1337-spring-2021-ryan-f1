//h
#ifndef TIC_TAC_TOE_3_H
#define TIC_TAC_TOE_3_H

#include "tic_tac_toe.h"
#include <vector>
#include <string>

using std::string;
using std::vector;

class TicTacToe3 : public TicTacToe
{
public:
    TicTacToe3() : TicTacToe(3) {}
    TicTacToe3(vector<string> p, string win) : TicTacToe(p, win) {}

private:
    bool check_column_win();
    bool check_row_win();
    bool check_diagonal_win();
};

#endif