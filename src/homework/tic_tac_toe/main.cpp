#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include <iostream>
#include <iomanip>
using std::cin;
using std::cout;
using std::make_unique;
using std::unique_ptr;

int main()
{
	TicTacToeData data;
	TicTacToeManager manager(data);
	int o, x, t, size;
	string choice, again = "y";
	while (again == "y" || again == "Y")
	{
		unique_ptr<TicTacToe> game;
		//input and validation
		cout << "Choose board size:\n 3: 3x3\n 4: 4x4\n";
		cin >> size;
		while (size < 3 || size > 4)
		{
			cout << "That size is not valid.\n 3: 3x3\n 4: 4x4\n";
			cin >> size;
		}
		if (size == 3)
		{
			game = make_unique<TicTacToe3>();
		}
		else
		{
			game = make_unique<TicTacToe4>();
		}

		cout << "Would you like to play as X or as O?\n";
		cin >> choice;
		while (!(choice == "X" || choice == "x" || choice == "O" || choice == "o"))
		{
			cout << "That is not a valid choice, pick X or O.\n";
			cin >> choice;
		}
		if (choice == "x")
		{
			choice = "X";
		}
		else if (choice == "o")
		{
			choice = "O";
		}
		game->start_game(choice);

		//game loop
		while (game->game_over() == false)
		{
			cin >> *game;
			cout << *game;
			cout << "\n";
		}
		if (game->get_winner() == "C")
		{
			cout << "Game over. It's a tie.\n";
		}
		else
		{
			cout << "Game over. " << game->get_winner() << " Has won.\n";
		}
		manager.save_game(game);
		manager.get_winner_totals(o, x, t);
		cout << std::setfill('-') << std::setw(30) << "-\n";
		cout << "Winner totals\nX: " << x << "\nO: " << o << "\nTies: " << t << "\n";
		cout << "Would you like to play again? Y/N: \n";
		cin >> again;
	}
	cout << std::setfill('-') << std::setw(30) << "-\n";
	cout << "Games played: " << (o + t + x) << "\n";
	cout << "Winner totals:\nX: " << x << "\nO: " << o << "\nTies: " << t << "\n\n";
	cout << "--Game History--\n";
	cout << manager;
	return 0;
}