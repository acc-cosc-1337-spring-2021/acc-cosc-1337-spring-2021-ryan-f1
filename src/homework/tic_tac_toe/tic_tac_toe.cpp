//cpp
#include "tic_tac_toe.h"
#include<iostream>
#include<iomanip>
#include<cmath>
#include<memory>
using std::cout; using std::cin;

//friend functions
std::istream& operator>>(std::istream& in, TicTacToe& game)
{
    int position;
    cout<<"It is "<<game.get_player()<<"'s turn, choose a board space.\n";
		in>>position;
		while(position < 1 || position > game.pegs.size() || in.fail())
		{
			in.clear();
			in.ignore();
			cout<<"That is not a valid position.\n";
			in>>position;
		}
    game.mark_board(position);
    return in;
}

std::ostream& operator<<(std::ostream& out, const TicTacToe& game)
{
    int board = sqrt(game.pegs.size());
    //iterate vector and cout to display the board
    for (int i = 0; i <= (board*board)-1; i++)
    {
         out<<game.pegs[i];

        if ((i+1) % board == 0)
        {
            out<<"\n";
            if(i != (board*board)-1)
            {
                out<<std::setfill('=')<<std::setw(board*board+1)<<"=\n";
            }
        }
        else
        {
            out<<" | ";
        }
        
        
    }
    return out;
}

bool TicTacToe::game_over()
{
    if((check_column_win() || check_diagonal_win() || check_row_win()) && !check_board_full())
    {
        set_winner();
        return true;
    }
    else if(check_board_full())
    {
        winner = "C";
        return true;
    }
    else
    {
        return false;
    }
}

void TicTacToe::start_game(string first_player)
{
    if(first_player == "O" || first_player == "X")
    {
        player = first_player;
        clear_board();
    }
}


//sets pegs[position] with the player value. either X or O.
void TicTacToe::mark_board(int position)
{
    pegs[position -1] = player;
    set_next_player();
}


//Private functions
void TicTacToe::clear_board()
{
    for(int i = 0; i <= 8; i++)
    {
        pegs[i] = " ";
    }
}

void TicTacToe::set_next_player()
{
    if (player == "X")
        player = "O";
    else
        player = "X";
    
}

//search string for spaces " " returns false if any found
bool TicTacToe::check_board_full()
{
    bool is_full = true;
    
    for(int i = 0; i <= 8; i++)
    {
        if(pegs[i] == " ")
            is_full = false;
    }
    return is_full;
}

//HOMEWORK 7 ADDITIONAL FUNCTIONS
void TicTacToe::set_winner()
{
    if(player == "X")
        winner = "O";
    else
        winner = "X";
    
}
//Check win functions
//MOVED TO SUBCLASSES
bool TicTacToe::check_column_win()
{
    return false;
}

bool TicTacToe::check_row_win()
{
    return false;
}

bool TicTacToe::check_diagonal_win()
{
    return false;
}