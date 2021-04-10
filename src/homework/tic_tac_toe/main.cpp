#include "tic_tac_toe.h"
#include<iostream>
using std::cout; using std::cin;

int main() 
{
	string choice, again = "y";
	int position;
	TicTacToe game;
	while(again == "y" || again == "Y")
	{
		//input and validation
		cout<<"Would you like to play as X or as O?\n";
		cin>>choice;
		while(!(choice == "X" || choice == "O"))
		{
			cout<<"That is not a valid choice, pick X or O. Case sensitive.\n";
			cin>>choice;
		}
		game.start_game(choice);

		//game loop
		while(game.game_over() == false)
		{
			cout<<"It is "<<game.get_player()<<"'s turn. Pick a space 1 to 9.\n";
			cin>>position;
			while(position < 1 || position > 9 || cin.fail())
			{
				cin.clear();
				cin.ignore();
				cout<<"That is not a valid position. Choose a space from 1 to 9.\n";
				cin>>position;
			}
			game.mark_board(position);
			game.display_board();
			cout<<"\n";
		}
	if(game.get_winner() == "C")
	{
		cout<<"Game over. It's a tie.\n";
	}
	else
		cout<<"Game over. "<<game.get_winner()<<" Has won.\n";

	cout<<"Would you like to play again? Y/N: \n";
	cin>>again;
	}
	return 0;
}