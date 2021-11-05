#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "iostream"
TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
using std::cout;
TEST_CASE("Tie") 
{
	TicTacToe instance;
	int check=0;
	do
	{
		instance.start_game("X");
		instance.mark_board(1);
		cout<<instance;
		check=check+1;
		instance.game_over();
		instance.mark_board(2);
		cout<<instance;
		check=check+1;
		instance.game_over();
		instance.mark_board(3);
		cout<<instance;
		check=check+1;
		instance.game_over();
		instance.mark_board(4);
		cout<<instance;
		check=check+1;
		instance.game_over();
		instance.mark_board(5);
		cout<<instance;
		check=check+1;
		instance.game_over();
		instance.mark_board(7);
		cout<<instance;
		check=check+1;
		instance.game_over();
		instance.mark_board(6);
		cout<<instance;
		check=check+1;
		instance.game_over();
		instance.mark_board(9);
		cout<<instance;
		check=check+1;
		instance.game_over();
		instance.mark_board(8);
		cout<<instance;
		check=check+1;
		instance.game_over();
		cout<<"number of game over checks: "<<check<<"\n";
	
	} while (instance.game_over()==false);
	REQUIRE(instance.get_winner()=="C");
	cout<<"Test complete: "<<"\n";
	cout<<"\n";
}
TEST_CASE("Win by column 1") 
{
	TicTacToe instance;
	do
	{
		instance.start_game("X");
		instance.mark_board(1);
		instance.game_over();
		instance.mark_board(2);
		instance.game_over();
		instance.mark_board(4);
		instance.game_over();
		instance.mark_board(3);
		instance.game_over();
		instance.mark_board(7);
		instance.game_over();
		cout<<instance;
	} while (instance.game_over()==false);
	REQUIRE(instance.game_over()==true);
	REQUIRE(instance.get_winner()=="X");
	cout<<"Test complete: "<<"\n";
	cout<<"\n";
}
TEST_CASE("Win by column 2") 
{
	TicTacToe instance;
	do
	{
		instance.start_game("X");
		instance.mark_board(2);
		instance.game_over();
		instance.mark_board(1);
		instance.game_over();
		instance.mark_board(5);
		instance.game_over();
		instance.mark_board(4);
		instance.game_over();
		instance.mark_board(8);
		instance.game_over();
		cout<<instance;
	} while (instance.game_over()==false);
	REQUIRE(instance.game_over()==true);
	REQUIRE(instance.get_winner()=="X");
	cout<<"Test complete: "<<"\n";
	cout<<"\n";
}
TEST_CASE("Win by column 3") 
{
	TicTacToe instance;
	do
	{
		instance.start_game("X");
		instance.mark_board(3);
		instance.game_over();
		instance.mark_board(1);
		instance.game_over();
		instance.mark_board(6);
		instance.game_over();
		instance.mark_board(4);
		instance.game_over();
		instance.mark_board(9);
		instance.game_over();
		cout<<instance;
	} while (instance.game_over()==false);
	REQUIRE(instance.game_over()==true);
	REQUIRE(instance.get_winner()=="X");
	cout<<"Test complete: "<<"\n";
	cout<<"\n";
}
TEST_CASE("Win by row 1") 
{
	TicTacToe instance;
	do
	{
		instance.start_game("X");
		instance.mark_board(1);
		instance.game_over();
		instance.mark_board(4);
		instance.game_over();
		instance.mark_board(2);
		instance.game_over();
		instance.mark_board(5);
		instance.game_over();
		instance.mark_board(3);
		instance.game_over();
		cout<<instance;
	} while (instance.game_over()==false);
	REQUIRE(instance.game_over()==true);
	REQUIRE(instance.get_winner()=="X");
	cout<<"Test complete: "<<"\n";
	cout<<"\n";
}
TEST_CASE("Win by row 2") 
{
	TicTacToe instance;
	do
	{
		instance.start_game("X");
		instance.mark_board(4);
		instance.game_over();
		instance.mark_board(1);
		instance.game_over();
		instance.mark_board(5);
		instance.game_over();
		instance.mark_board(2);
		instance.game_over();
		instance.mark_board(6);
		instance.game_over();
		cout<<instance;
	} while (instance.game_over()==false);
	REQUIRE(instance.game_over()==true);
	REQUIRE(instance.get_winner()=="X");
	cout<<"Test complete: "<<"\n";
	cout<<"\n";
}
TEST_CASE("Win by row 3") 
{
	TicTacToe instance;
	do
	{
		instance.start_game("X");
		instance.mark_board(7);
		instance.game_over();
		instance.mark_board(4);
		instance.game_over();
		instance.mark_board(8);
		instance.game_over();
		instance.mark_board(5);
		instance.game_over();
		instance.mark_board(9);
		instance.game_over();
		cout<<instance;
	} while (instance.game_over()==false);
	REQUIRE(instance.game_over()==true);
	REQUIRE(instance.get_winner()=="X");
	cout<<"Test complete: "<<"\n";
	cout<<"\n";
}
TEST_CASE("Win by top left diagonal") 
{
	TicTacToe instance;
	do
	{
		instance.start_game("X");
		instance.mark_board(1);
		instance.game_over();
		instance.mark_board(4);
		instance.game_over();
		instance.mark_board(5);
		instance.game_over();
		instance.mark_board(6);
		instance.game_over();
		instance.mark_board(9);
		instance.game_over();
		cout<<instance;
	} while (instance.game_over()==false);
	REQUIRE(instance.game_over()==true);
	REQUIRE(instance.get_winner()=="X");
	cout<<"Test complete: "<<"\n";
	cout<<"\n";
}
TEST_CASE("Win by bottom left diagonal") 
{
	TicTacToe instance;
	do
	{
		instance.start_game("X");
		instance.mark_board(7);
		instance.game_over();
		instance.mark_board(4);
		instance.game_over();
		instance.mark_board(5);
		instance.game_over();
		instance.mark_board(6);
		instance.game_over();
		instance.mark_board(3);
		instance.game_over();
		cout<<instance;
	} while (instance.game_over()==false);
	REQUIRE(instance.game_over()==true);
	REQUIRE(instance.get_winner()=="X");
	cout<<"Test complete: "<<"\n";
	cout<<"\n";
}
TEST_CASE("Winner total Manager check") 
{
	TicTacToe instance;
	TicTacToeManager instance2;
	do
	{
		instance.start_game("X");
		instance.mark_board(1);
		instance.game_over();
		instance.mark_board(4);
		instance.game_over();
		instance.mark_board(2);
		instance.game_over();
		instance.mark_board(5);
		instance.game_over();
		instance.mark_board(3);
		instance.game_over();
		cout<<instance;
	} while (instance.game_over()==false);
	instance2.save_game(instance);
	do
	{
		instance.start_game("O");
		instance.mark_board(1);
		instance.game_over();
		instance.mark_board(4);
		instance.game_over();
		instance.mark_board(2);
		instance.game_over();
		instance.mark_board(5);
		instance.game_over();
		instance.mark_board(3);
		instance.game_over();
		cout<<instance;
	} while (instance.game_over()==false);
	instance2.save_game(instance);
	do
	{
		instance.start_game("X");
		instance.mark_board(1);
		instance.game_over();
		instance.mark_board(2);
		instance.game_over();
		instance.mark_board(3);
		instance.game_over();
		instance.mark_board(4);
		instance.game_over();
		instance.mark_board(5);
		instance.game_over();
		instance.mark_board(6);
		instance.game_over();
		instance.mark_board(8);
		instance.game_over();
		instance.mark_board(7);
		instance.game_over();
		instance.mark_board(9);
		instance.game_over();
		cout<<instance;
	} while (instance.game_over()==false);
	instance2.save_game(instance);
	int x;
	int o;
	int t;
	instance2.get_winner_total(x,o,t);
	cout<<"X wins: "<<x<<"O wins: "<<o<<"Ties: "<<t<<"\n";
	REQUIRE(instance.game_over()==true);
	cout<<"Test complete: "<<"\n";
	cout<<"\n";
}
