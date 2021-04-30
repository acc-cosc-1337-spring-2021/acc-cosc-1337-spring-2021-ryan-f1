//h
#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe_data.h"
#include <memory>
using std::unique_ptr;

class TicTacToeManager
{
    friend std::ostream &operator<<(std::ostream &out, const TicTacToeManager &manager);

public:
    TicTacToeManager() = default;
    TicTacToeManager(TicTacToeData data);

    void get_winner_totals(int &o, int &x, int &t);
    void save_game(unique_ptr<TicTacToe> &game);
    ~TicTacToeManager();

private:
    void update_winner_count(std::string winner);
    vector<unique_ptr<TicTacToe>> games;
    int o_wins{0}, x_wins{0}, ties{0};
    TicTacToeData data;
};

#endif