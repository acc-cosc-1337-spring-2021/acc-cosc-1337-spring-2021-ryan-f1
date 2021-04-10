#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include<iostream>
using std::cout;

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Tests TicTacToe class functions")
{
	TicTacToe game;
	game.start_game("X");
	REQUIRE(game.game_over() == false);
	game.mark_board(5);
	REQUIRE(game.game_over() == false);
	game.mark_board(4);
	REQUIRE(game.game_over() == false);
	game.mark_board(1);
	REQUIRE(game.game_over() == false);
	game.mark_board(9);
	REQUIRE(game.game_over() == false);
	game.mark_board(8);
	REQUIRE(game.game_over() == false);
	game.mark_board(2);
	REQUIRE(game.game_over() == false);
	game.mark_board(3);
	REQUIRE(game.game_over() == false);
	game.mark_board(7);
	REQUIRE(game.game_over() == false);
	game.mark_board(6);
	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "C");
}
//new testcases
TEST_CASE("test start_game function correctly setting player")
{
	TicTacToe game;
	game.start_game("X");
	REQUIRE(game.get_player() == "X");
	TicTacToe game1;
	game1.start_game("O");
	REQUIRE(game1.get_player() == "O");
}

TEST_CASE("Test win by first column")
{
	TicTacToe game;
	game.start_game("X");
	game.mark_board(1);//x
	REQUIRE(game.game_over() == false);
	game.mark_board(2);
	REQUIRE(game.game_over() == false);
	game.mark_board(4);//x
	REQUIRE(game.game_over() == false);
	game.mark_board(3);
	REQUIRE(game.game_over() == false);
	game.mark_board(7);//x
	REQUIRE(game.game_over() == true);
}

TEST_CASE("Test win by second column")
{
	TicTacToe game;
	game.start_game("X");
	game.mark_board(2);//x
	REQUIRE(game.game_over() == false);
	game.mark_board(1);
	REQUIRE(game.game_over() == false);
	game.mark_board(5);//x
	REQUIRE(game.game_over() == false);
	game.mark_board(3);
	REQUIRE(game.game_over() == false);
	game.mark_board(8);//x
	REQUIRE(game.game_over() == true);
}

TEST_CASE("Test win by third column")
{
	TicTacToe game;
	game.start_game("X");
	game.mark_board(3);//x
	REQUIRE(game.game_over() == false);
	game.mark_board(1);
	REQUIRE(game.game_over() == false);
	game.mark_board(6);//x
	REQUIRE(game.game_over() == false);
	game.mark_board(4);
	REQUIRE(game.game_over() == false);
	game.mark_board(9);//x
	REQUIRE(game.game_over() == true);
}

TEST_CASE("Test win by first row")
{
	TicTacToe game;
	game.start_game("X");
	game.mark_board(1);//x
	REQUIRE(game.game_over() == false);
	game.mark_board(4);
	REQUIRE(game.game_over() == false);
	game.mark_board(3);//x
	REQUIRE(game.game_over() == false);
	game.mark_board(7);
	REQUIRE(game.game_over() == false);
	game.mark_board(2);//x
	REQUIRE(game.game_over() == true);
}

TEST_CASE("Test win by second row")
{
	TicTacToe game;
	game.start_game("X");
	game.mark_board(4);//x
	REQUIRE(game.game_over() == false);
	game.mark_board(3);
	REQUIRE(game.game_over() == false);
	game.mark_board(5);//x
	REQUIRE(game.game_over() == false);
	game.mark_board(8);
	REQUIRE(game.game_over() == false);
	game.mark_board(6);//x
	REQUIRE(game.game_over() == true);
}

TEST_CASE("Test win by third row")
{
	TicTacToe game;
	game.start_game("X");
	game.mark_board(7);//x
	REQUIRE(game.game_over() == false);
	game.mark_board(4);
	REQUIRE(game.game_over() == false);
	game.mark_board(8);//x
	REQUIRE(game.game_over() == false);
	game.mark_board(1);
	REQUIRE(game.game_over() == false);
	game.mark_board(9);//x
	REQUIRE(game.game_over() == true);
}

TEST_CASE("Test win diagonally top left")
{
	TicTacToe game;
	game.start_game("X");
	game.mark_board(1);//x
	REQUIRE(game.game_over() == false);
	game.mark_board(4);
	REQUIRE(game.game_over() == false);
	game.mark_board(5);//x
	REQUIRE(game.game_over() == false);
	game.mark_board(3);
	REQUIRE(game.game_over() == false);
	game.mark_board(9);//x
	REQUIRE(game.game_over() == true);
}

TEST_CASE("Test win diagonally bottom left")
{
	TicTacToe game;
	game.start_game("X");
	game.mark_board(7);//x
	REQUIRE(game.game_over() == false);
	game.mark_board(4);
	REQUIRE(game.game_over() == false);
	game.mark_board(5);//x
	REQUIRE(game.game_over() == false);
	game.mark_board(2);
	REQUIRE(game.game_over() == false);
	game.mark_board(3);//x
	REQUIRE(game.game_over() == true);
}