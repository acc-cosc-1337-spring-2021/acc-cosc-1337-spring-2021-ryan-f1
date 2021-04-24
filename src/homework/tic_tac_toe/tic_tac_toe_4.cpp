#include "tic_tac_toe_4.h"

/*
class function check_column_win
Win by column if and return true if (each column index)
0, 1,  2,  3 
4, 5,  6,  7 
8, 9, 10, 11 
12,13,14, 15 
else
false
*/
bool TicTacToe4::check_column_win()
{
    bool win = false;
    for(int i = 0; i <= 3; i++)
    {   
        if(pegs[i] == pegs[4+i] && pegs[i] == pegs[8+i] && pegs[i] == pegs[12+i] && pegs[i] != " ")
        {
            win = true;
        }
    }
    return win;
}



/*
class function check_row_win
Win by row if
0, 1,  2,  3 are equal
4, 5,  6,  7 are equal
8, 9, 10, 11 are equal 
12,13,14, 15 are equal
*/
bool TicTacToe4::check_row_win()
{
    bool win = false;
    for(int i = 0; i <= 3; i++)
    {
        if(pegs[4*i] == pegs[1+(4*i)] && pegs[4*i] == pegs[2+(4*i)] && pegs[4*i] == pegs[3+(4*i)] && pegs[4*i] != " ")
        {
            win = true;
        }
    }
    return win;
}


/*
class function check_diagonal_win
Win diagonally
0, 1,  2,  3
4, 5,  6,  7
8, 9, 10, 11
12,13,14, 15

*/
bool TicTacToe4::check_diagonal_win()
{
    bool win = false;
    if(pegs[0] == pegs[5] && pegs[0] == pegs[10] && pegs[0] == pegs[15] && pegs[0] != " ")
    {
        win = true;
    }
    else if (pegs[3] == pegs[6] && pegs[3] == pegs[9] && pegs[3] == pegs[12] && pegs[3] != " ")
    {
        win = true;
    }
    return win;
}