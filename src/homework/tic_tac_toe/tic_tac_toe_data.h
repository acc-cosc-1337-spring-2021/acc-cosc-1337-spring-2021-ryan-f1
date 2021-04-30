//h
#ifndef TIC_TAC_TOE_DATA_H
#define TIC_TAC_TOE_DATA_H
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

#include <fstream>
#include <iostream>
#include <memory>
using std::unique_ptr;

class TicTacToeData
{

public:
    //write code for
    void save_games(const std::vector<std::unique_ptr<TicTacToe>> &games);
    vector<unique_ptr<TicTacToe>> get_games();

private:
    const std::string file_name{"tic_tac_toe.txt"};
};

#endif