//cpp
#include "tic_tac_toe_manager.h"
#include<iostream>
using std::cout;

//friend overload printing vector of games
std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager)
{
    for(auto& game : manager.games)
    {
        out<<*game;
        out<<"\n";
    }
    return out;
}
//winner incrementor
void TicTacToeManager::update_winner_count(std::string winner)
{
    if(winner == "X")
    {
        x_wins++;
    }
    else if(winner == "O")
    {
        o_wins++;
    }
    else
    {
        ties++;
    }
    
}

//saves tictactoe object to vector and updates winner count
void TicTacToeManager::save_game(unique_ptr<TicTacToe>& game)
{
    update_winner_count(game->get_winner());
    games.push_back(std::move(game));
}

//sets reference variables equal to private class variables, cheats them out
void TicTacToeManager::get_winner_totals(int& o, int& x, int& t)
{
    o = o_wins;
    x = x_wins;
    t = ties;
}