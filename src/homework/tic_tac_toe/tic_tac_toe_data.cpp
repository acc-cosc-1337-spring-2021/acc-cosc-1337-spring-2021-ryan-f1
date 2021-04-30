//cpp
#include "tic_tac_toe_data.h"

#include <fstream>
using std::make_unique;

void TicTacToeData::save_games(const std::vector<std::unique_ptr<TicTacToe>> &games)
{
    std::ofstream outfile;
    outfile.open(file_name);

    if (outfile.is_open())
    {
        for (auto &game : games)
        {
            vector<string> pegs = game->get_pegs();
            for (auto &peg : pegs)
            {
                outfile << peg;
            }
            outfile << game->get_winner();
            outfile << "\n";
        }
    }
    outfile.close();
}

vector<unique_ptr<TicTacToe>> TicTacToeData::get_games()
{
    vector<unique_ptr<TicTacToe>> boards;
    std::ifstream infile;
    string saved_game;
    infile.open(file_name);
    if (infile.is_open())
    {

        while (getline(infile, saved_game))
        {
            vector<string> pegs;
            for (size_t i = 0; i < saved_game.size() - 1; ++i)
            {
                string ch(1, saved_game[i]);
                pegs.push_back(ch);
            }

            string winner{saved_game[saved_game.size() - 1]};
            unique_ptr<TicTacToe> game;
            if (pegs.size() == 9)
            {
                game = make_unique<TicTacToe4>(pegs, winner);
            }
            else if (pegs.size() == 16)
                game = make_unique<TicTacToe3>(pegs, winner);

            boards.push_back(std::move(game));
        }
        infile.close();
    }
    return boards;
}