#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe_manager.h"
#include<iostream>
using std::cout; using std::make_unique; using std::unique_ptr;

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Tests TicTacToe class functions")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("X");
	REQUIRE(game->game_over() == false);
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(4);
	REQUIRE(game->game_over() == false);
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(9);
	REQUIRE(game->game_over() == false);
	game->mark_board(8);
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(3);
	REQUIRE(game->game_over() == false);
	game->mark_board(7);
	REQUIRE(game->game_over() == false);
	game->mark_board(6);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "C");
}
//new testcases
TEST_CASE("test start_game function correctly setting player")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("X");
	REQUIRE(game->get_player() == "X");
	unique_ptr<TicTacToe> game1 = make_unique<TicTacToe3>();
	game1->start_game("O");
	REQUIRE(game1->get_player() == "O");
}

TEST_CASE("Test win by first column")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(1);//x
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(4);//x
	REQUIRE(game->game_over() == false);
	game->mark_board(3);
	REQUIRE(game->game_over() == false);
	game->mark_board(7);//x
	REQUIRE(game->game_over() == true);
}

TEST_CASE("Test win by second column")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(2);//x
	REQUIRE(game->game_over() == false);
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);//x
	REQUIRE(game->game_over() == false);
	game->mark_board(3);
	REQUIRE(game->game_over() == false);
	game->mark_board(8);//x
	REQUIRE(game->game_over() == true);
}

TEST_CASE("Test win by third column")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(3);//x
	REQUIRE(game->game_over() == false);
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(6);//x
	REQUIRE(game->game_over() == false);
	game->mark_board(4);
	REQUIRE(game->game_over() == false);
	game->mark_board(9);//x
	REQUIRE(game->game_over() == true);
}

TEST_CASE("Test win by first row")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(1);//x
	REQUIRE(game->game_over() == false);
	game->mark_board(4);
	REQUIRE(game->game_over() == false);
	game->mark_board(3);//x
	REQUIRE(game->game_over() == false);
	game->mark_board(7);
	REQUIRE(game->game_over() == false);
	game->mark_board(2);//x
	REQUIRE(game->game_over() == true);
}

TEST_CASE("Test win by second row")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(4);//x
	REQUIRE(game->game_over() == false);
	game->mark_board(3);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);//x
	REQUIRE(game->game_over() == false);
	game->mark_board(8);
	REQUIRE(game->game_over() == false);
	game->mark_board(6);//x
	REQUIRE(game->game_over() == true);
}

TEST_CASE("Test win by third row")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(7);//x
	REQUIRE(game->game_over() == false);
	game->mark_board(4);
	REQUIRE(game->game_over() == false);
	game->mark_board(8);//x
	REQUIRE(game->game_over() == false);
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(9);//x
	REQUIRE(game->game_over() == true);
}

TEST_CASE("Test win diagonally top left")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(1);//x
	REQUIRE(game->game_over() == false);
	game->mark_board(4);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);//x
	REQUIRE(game->game_over() == false);
	game->mark_board(3);
	REQUIRE(game->game_over() == false);
	game->mark_board(9);//x
	REQUIRE(game->game_over() == true);
}

TEST_CASE("Test win diagonally bottom left")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(7);//x
	REQUIRE(game->game_over() == false);
	game->mark_board(4);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);//x
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(3);//x
	REQUIRE(game->game_over() == true);
}
//HW8 tests

TEST_CASE("tests get_winner function")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(7);//x
	REQUIRE(game->game_over() == false);
	game->mark_board(4);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);//x
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(3);//x
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Tests manager incrementing function with 3 games")
{
	int o{0}, x{0}, t{0};
	unique_ptr<TicTacToe> a = make_unique<TicTacToe3>();
	unique_ptr<TicTacToe> b = make_unique<TicTacToe3>();
	unique_ptr<TicTacToe> c = make_unique<TicTacToe3>();

	TicTacToeManager manager;
	a->start_game("X");
	a->mark_board(7);//x
	REQUIRE(a->game_over() == false);
	a->mark_board(4);
	REQUIRE(a->game_over() == false);
	a->mark_board(5);//x
	REQUIRE(a->game_over() == false);
	a->mark_board(2);
	REQUIRE(a->game_over() == false);
	a->mark_board(3);//x
	REQUIRE(a->game_over() == true);
	manager.save_game(a);
	manager.get_winner_totals(o,x,t);
	REQUIRE(x == 1);
	REQUIRE(o == 0);
	REQUIRE(t == 0);

	b->start_game("O");
	b->mark_board(4);//o
	REQUIRE(b->game_over() == false);
	b->mark_board(3);
	REQUIRE(b->game_over() == false);
	b->mark_board(5);//o
	REQUIRE(b->game_over() == false);
	b->mark_board(8);
	REQUIRE(b->game_over() == false);
	b->mark_board(6);//o
	REQUIRE(b->game_over() == true);
	manager.save_game(b);
	manager.get_winner_totals(o,x,t);
	REQUIRE(x == 1);
	REQUIRE(o == 1);
	REQUIRE(t == 0);

	c->start_game("X");
	REQUIRE(c->game_over() == false);
	c->mark_board(5);
	REQUIRE(c->game_over() == false);
	c->mark_board(4);
	REQUIRE(c->game_over() == false);
	c->mark_board(1);
	REQUIRE(c->game_over() == false);
	c->mark_board(9);
	REQUIRE(c->game_over() == false);
	c->mark_board(8);
	REQUIRE(c->game_over() == false);
	c->mark_board(2);
	REQUIRE(c->game_over() == false);
	c->mark_board(3);
	REQUIRE(c->game_over() == false);
	c->mark_board(7);
	REQUIRE(c->game_over() == false);
	c->mark_board(6);
	REQUIRE(c->game_over() == true);
	manager.save_game(c);
	manager.get_winner_totals(o,x,t);
	REQUIRE(x == 1);
	REQUIRE(o == 1);
	REQUIRE(t == 1);
}

/*HW 9 tests
1, 2,  3,  4
5, 6,  7,  8
9, 10, 11, 12
13,14,15, 16
*/
TEST_CASE("Test win by first column4")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(1);//x
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);//x
	REQUIRE(game->game_over() == false);
	game->mark_board(3);
	REQUIRE(game->game_over() == false);
	game->mark_board(9);//x
	REQUIRE(game->game_over() == false);
	game->mark_board(11);
	REQUIRE(game->game_over() == false);
	game->mark_board(13);//x
	REQUIRE(game->game_over() == true);
}

TEST_CASE("Test win by second column4")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(2);//x
	REQUIRE(game->game_over() == false);
	game->mark_board(12);
	REQUIRE(game->game_over() == false);
	game->mark_board(6);//x
	REQUIRE(game->game_over() == false);
	game->mark_board(3);
	REQUIRE(game->game_over() == false);
	game->mark_board(10);//x
	REQUIRE(game->game_over() == false);
	game->mark_board(7);
	REQUIRE(game->game_over() == false);
	game->mark_board(14);//x
	REQUIRE(game->game_over() == true);
}

TEST_CASE("Test win by third column4")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(3);//x
	REQUIRE(game->game_over() == false);
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(7);//x
	REQUIRE(game->game_over() == false);
	game->mark_board(4);
	REQUIRE(game->game_over() == false);
	game->mark_board(11);//x
	REQUIRE(game->game_over() == false);
	game->mark_board(8);
	REQUIRE(game->game_over() == false);
	game->mark_board(15);//x
	REQUIRE(game->game_over() == true);
}

TEST_CASE("Test win by fourth column4")
{
	//3,7,11,15
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(4);//x
	REQUIRE(game->game_over() == false);
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(8);//x
	REQUIRE(game->game_over() == false);
	game->mark_board(3);
	REQUIRE(game->game_over() == false);
	game->mark_board(12);//x
	REQUIRE(game->game_over() == false);
	game->mark_board(13);
	REQUIRE(game->game_over() == false);
	game->mark_board(16);//x
	REQUIRE(game->game_over() == true);
}

/*HW 9 tests
1, 2,  3,  4
5, 6,  7,  8
9, 10, 11, 12
13, 14, 15, 16
*/
TEST_CASE("Test win by first row4")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(1);//x
	REQUIRE(game->game_over() == false);
	game->mark_board(8);
	REQUIRE(game->game_over() == false);
	game->mark_board(3);//x
	REQUIRE(game->game_over() == false);
	game->mark_board(7);
	REQUIRE(game->game_over() == false);
	game->mark_board(2);//x
	REQUIRE(game->game_over() == false);
	game->mark_board(11);
	REQUIRE(game->game_over() == false);
	game->mark_board(4);//x
	REQUIRE(game->game_over() == true);
}

TEST_CASE("Test win by second row4")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(5);//x
	REQUIRE(game->game_over() == false);
	game->mark_board(8);
	REQUIRE(game->game_over() == false);
	game->mark_board(6);//x
	REQUIRE(game->game_over() == false);
	game->mark_board(14);
	REQUIRE(game->game_over() == false);
	game->mark_board(7);//x
	REQUIRE(game->game_over() == false);
	game->mark_board(11);
	REQUIRE(game->game_over() == false);
	game->mark_board(8);//x
	REQUIRE(game->game_over() == true);
}

TEST_CASE("Test win by third row4")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(9);//x
	REQUIRE(game->game_over() == false);
	game->mark_board(8);
	REQUIRE(game->game_over() == false);
	game->mark_board(10);//x
	REQUIRE(game->game_over() == false);
	game->mark_board(7);
	REQUIRE(game->game_over() == false);
	game->mark_board(11);//x
	REQUIRE(game->game_over() == false);
	game->mark_board(15);
	REQUIRE(game->game_over() == false);
	game->mark_board(12);//x
	REQUIRE(game->game_over() == true);
}

TEST_CASE("Test win by fourth row4")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(13);//x
	REQUIRE(game->game_over() == false);
	game->mark_board(8);
	REQUIRE(game->game_over() == false);
	game->mark_board(14);//x
	REQUIRE(game->game_over() == false);
	game->mark_board(7);
	REQUIRE(game->game_over() == false);
	game->mark_board(15);//x
	REQUIRE(game->game_over() == false);
	game->mark_board(11);
	REQUIRE(game->game_over() == false);
	game->mark_board(16);//x
	REQUIRE(game->game_over() == true);
}

//13,10,7,4
TEST_CASE("Test win diagonally bottom left 4x4")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(7);//x
	REQUIRE(game->game_over() == false);
	game->mark_board(6);
	REQUIRE(game->game_over() == false);
	game->mark_board(4);//x
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(13);//x
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(10);//x
	REQUIRE(game->game_over() == true);
}
//1,6,11,16
TEST_CASE("Test win diagonally bottom right 4x4")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(1);//x
	REQUIRE(game->game_over() == false);
	game->mark_board(4);
	REQUIRE(game->game_over() == false);
	game->mark_board(6);//x
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(11);//x
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(16);//x
	REQUIRE(game->game_over() == true);
}