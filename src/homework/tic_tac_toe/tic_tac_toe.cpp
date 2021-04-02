//cpp
#include "tic_tac_toe.h"
#include<iostream>
using std::cout; using std::cin;

bool TicTacToe::game_over()
{
    return check_board_full();
}

void TicTacToe::start_game(string first_player)
{
    if(first_player == "O" || first_player == "X")
    {
        player = first_player;
        clear_board();
    }
}

void TicTacToe::display_board() const
{
    //iterate vector and cout to display the board
    for (int i = 0; i <= 8; i++)
    {
        cout<<pegs[i];

        if ((i+1) % 3 == 0)
        {
            cout<<"\n";
        }
        else
        {
            cout<<" | ";
        }
        
        
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