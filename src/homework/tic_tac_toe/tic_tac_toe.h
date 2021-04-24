//h
#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H
#include<string>
#include<vector>
#include<iostream>
using std::string;  using std::vector;

class TicTacToe
{
    friend std::ostream& operator<<(std::ostream& out, const TicTacToe& game);
    friend std::istream& operator>>(std::istream& in, TicTacToe& game);

public:
    //Constructor
    TicTacToe(){}
    TicTacToe(int size) : pegs(size*size, " "){}

    bool game_over();
    void start_game(string first_player);
    void mark_board(int position);
    string get_player()const{return player;}
    string get_winner(){return winner;}

private:
    void set_next_player();
    bool check_board_full();
    void clear_board();
    void set_winner();
    string player, winner;

protected:
    virtual bool check_column_win();
    virtual bool check_row_win();
    virtual bool check_diagonal_win();
    vector<std::string> pegs;
};

#endif