#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
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
		instance.display_board();
		check=check+1;
		instance.game_over();
		instance.mark_board(2);
		instance.display_board();
		check=check+1;
		instance.game_over();
		instance.mark_board(3);
		instance.display_board();
		check=check+1;
		instance.game_over();
		instance.mark_board(4);
		instance.display_board();
		check=check+1;
		instance.game_over();
		instance.mark_board(5);
		instance.display_board();
		check=check+1;
		instance.game_over();
		instance.mark_board(7);
		instance.display_board();
		check=check+1;
		instance.game_over();
		instance.mark_board(6);
		instance.display_board();
		check=check+1;
		instance.game_over();
		instance.mark_board(9);
		instance.display_board();
		check=check+1;
		instance.game_over();
		instance.mark_board(8);
		instance.display_board();
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
		instance.display_board();
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
		instance.display_board();
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
		instance.display_board();
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
		instance.display_board();
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
		instance.display_board();
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
		instance.display_board();
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
		instance.display_board();
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
		instance.display_board();
	} while (instance.game_over()==false);
	REQUIRE(instance.game_over()==true);
	REQUIRE(instance.get_winner()=="X");
	cout<<"Test complete: "<<"\n";
	cout<<"\n";
}