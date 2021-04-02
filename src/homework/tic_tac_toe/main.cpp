#include "tic_tac_toe.h"
#include<iostream>
using std::cout; using std::cin;

int main() 
{
	string choice;
	int position;
	TicTacToe game;

	cout<<"Would you like to play as X or as O?\n";
	cin>>choice;
	game.start_game(choice);
	
	while(game.game_over() == false)
	{
		cout<<"It is "<<game.get_player()<<"'s turn. pick a space 1 to 9.\n";
		cin>>position;
		game.mark_board(position);
		game.display_board();
		cout<<"\n";
	}
	cout<<"Game over!";
	return 0;
}