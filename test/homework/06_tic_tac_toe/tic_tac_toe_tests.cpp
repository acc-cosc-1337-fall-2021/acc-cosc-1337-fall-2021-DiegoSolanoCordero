#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe_manager.h"
#include "iostream"
TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
using std::cout;
TEST_CASE("Tie") 
{
	unique_ptr<TicTacToe> instance;
	instance=make_unique <TicTacToe3>();
	int check=0;
	do
	{
		instance->start_game("X");
		instance->mark_board(1);
		cout<<*instance;
		check=check+1;
		instance->game_over();
		instance->mark_board(2);
		cout<<*instance;
		check=check+1;
		instance->game_over();
		instance->mark_board(3);
		cout<<*instance;
		check=check+1;
		instance->game_over();
		instance->mark_board(4);
		cout<<*instance;
		check=check+1;
		instance->game_over();
		instance->mark_board(5);
		cout<<*instance;
		check=check+1;
		instance->game_over();
		instance->mark_board(7);
		cout<<*instance;
		check=check+1;
		instance->game_over();
		instance->mark_board(6);
		cout<<*instance;
		check=check+1;
		instance->game_over();
		instance->mark_board(9);
		cout<<*instance;
		check=check+1;
		instance->game_over();
		instance->mark_board(8);
		cout<<*instance;
		check=check+1;
		instance->game_over();
		cout<<"number of game over checks: "<<check<<"\n";
	
	} while (instance->game_over()==false);
	REQUIRE(instance->get_winner()=="C");
	cout<<"Test complete: "<<"\n";
	cout<<"\n";
}
TEST_CASE("Win by column 1") 
{
	unique_ptr<TicTacToe> instance;
	instance=make_unique <TicTacToe3>();
	do
	{
		instance->start_game("X");
		instance->mark_board(1);
		instance->game_over();
		instance->mark_board(2);
		instance->game_over();
		instance->mark_board(4);
		instance->game_over();
		instance->mark_board(3);
		instance->game_over();
		instance->mark_board(7);
		instance->game_over();
		cout<<*instance;
	} while (instance->game_over()==false);
	REQUIRE(instance->game_over()==true);
	REQUIRE(instance->get_winner()=="X");
	cout<<"Test complete: "<<"\n";
	cout<<"\n";
}
TEST_CASE("Win by column 2") 
{
	unique_ptr<TicTacToe> instance;
	instance=make_unique <TicTacToe3>();
	do
	{
		instance->start_game("X");
		instance->mark_board(2);
		instance->game_over();
		instance->mark_board(1);
		instance->game_over();
		instance->mark_board(5);
		instance->game_over();
		instance->mark_board(4);
		instance->game_over();
		instance->mark_board(8);
		instance->game_over();
		cout<<*instance;
	} while (instance->game_over()==false);
	REQUIRE(instance->game_over()==true);
	REQUIRE(instance->get_winner()=="X");
	cout<<"Test complete: "<<"\n";
	cout<<"\n";
}
TEST_CASE("Win by column 3") 
{
	unique_ptr<TicTacToe> instance;
	instance=make_unique <TicTacToe3>();
	do
	{
		instance->start_game("X");
		instance->mark_board(3);
		instance->game_over();
		instance->mark_board(1);
		instance->game_over();
		instance->mark_board(6);
		instance->game_over();
		instance->mark_board(4);
		instance->game_over();
		instance->mark_board(9);
		instance->game_over();
		cout<<*instance;
	} while (instance->game_over()==false);
	REQUIRE(instance->game_over()==true);
	REQUIRE(instance->get_winner()=="X");
	cout<<"Test complete: "<<"\n";
	cout<<"\n";
}
TEST_CASE("Win by row 1") 
{
	unique_ptr<TicTacToe> instance;
	instance=make_unique <TicTacToe3>();
	do
	{
		instance->start_game("X");
		instance->mark_board(1);
		instance->game_over();
		instance->mark_board(4);
		instance->game_over();
		instance->mark_board(2);
		instance->game_over();
		instance->mark_board(5);
		instance->game_over();
		instance->mark_board(3);
		instance->game_over();
		cout<<*instance;
	} while (instance->game_over()==false);
	REQUIRE(instance->game_over()==true);
	REQUIRE(instance->get_winner()=="X");
	cout<<"Test complete: "<<"\n";
	cout<<"\n";
}
TEST_CASE("Win by row 2") 
{
	unique_ptr<TicTacToe> instance;
	instance=make_unique <TicTacToe3>();
	do
	{
		instance->start_game("X");
		instance->mark_board(4);
		instance->game_over();
		instance->mark_board(1);
		instance->game_over();
		instance->mark_board(5);
		instance->game_over();
		instance->mark_board(2);
		instance->game_over();
		instance->mark_board(6);
		instance->game_over();
		cout<<*instance;
	} while (instance->game_over()==false);
	REQUIRE(instance->game_over()==true);
	REQUIRE(instance->get_winner()=="X");
	cout<<"Test complete: "<<"\n";
	cout<<"\n";
}
TEST_CASE("Win by row 3") 
{
	unique_ptr<TicTacToe> instance;
	instance=make_unique <TicTacToe3>();
	do
	{
		instance->start_game("X");
		instance->mark_board(7);
		instance->game_over();
		instance->mark_board(4);
		instance->game_over();
		instance->mark_board(8);
		instance->game_over();
		instance->mark_board(5);
		instance->game_over();
		instance->mark_board(9);
		instance->game_over();
		cout<<*instance;
	} while (instance->game_over()==false);
	REQUIRE(instance->game_over()==true);
	REQUIRE(instance->get_winner()=="X");
	cout<<"Test complete: "<<"\n";
	cout<<"\n";
}
TEST_CASE("Win by top left diagonal") 
{
	unique_ptr<TicTacToe> instance;
	instance=make_unique <TicTacToe3>();
	do
	{
		instance->start_game("X");
		instance->mark_board(1);
		instance->game_over();
		instance->mark_board(4);
		instance->game_over();
		instance->mark_board(5);
		instance->game_over();
		instance->mark_board(6);
		instance->game_over();
		instance->mark_board(9);
		instance->game_over();
		cout<<*instance;
	} while (instance->game_over()==false);
	REQUIRE(instance->game_over()==true);
	REQUIRE(instance->get_winner()=="X");
	cout<<"Test complete: "<<"\n";
	cout<<"\n";
}
TEST_CASE("Win by bottom left diagonal") 
{
	unique_ptr<TicTacToe> instance;
	instance=make_unique <TicTacToe3>();
	do
	{
		instance->start_game("X");
		instance->mark_board(7);
		instance->game_over();
		instance->mark_board(4);
		instance->game_over();
		instance->mark_board(5);
		instance->game_over();
		instance->mark_board(6);
		instance->game_over();
		instance->mark_board(3);
		instance->game_over();
		cout<<*instance;
	} while (instance->game_over()==false);
	REQUIRE(instance->game_over()==true);
	REQUIRE(instance->get_winner()=="X");
	cout<<"Test complete: "<<"\n";
	cout<<"\n";
}


TEST_CASE("Tie 4") 
{
	unique_ptr<TicTacToe> instance;
	instance=make_unique <TicTacToe4>();
	int check=0;
	do
	{
		instance->start_game("X");
		instance->mark_board(1);
		cout<<*instance;
		check=check+1;
		instance->game_over();
		instance->mark_board(2);
		cout<<*instance;
		check=check+1;
		instance->game_over();
		instance->mark_board(3);
		cout<<*instance;
		check=check+1;
		instance->game_over();
		instance->mark_board(4);
		cout<<*instance;
		check=check+1;
		instance->game_over();
		instance->mark_board(6);
		cout<<*instance;
		check=check+1;
		instance->game_over();
		instance->mark_board(5);
		cout<<*instance;
		check=check+1;
		instance->game_over();
		instance->mark_board(8);
		cout<<*instance;
		check=check+1;
		instance->game_over();
		instance->mark_board(7);
		cout<<*instance;
		check=check+1;
		instance->game_over();
		instance->mark_board(9);
		cout<<*instance;
		check=check+1;
		instance->game_over();
		instance->mark_board(10);
		cout<<*instance;
		check=check+1;
		instance->game_over();
		instance->mark_board(11);
		cout<<*instance;
		check=check+1;
		instance->game_over();
		instance->mark_board(12);
		cout<<*instance;
		check=check+1;
		instance->game_over();
		instance->mark_board(13);
		cout<<*instance;
		check=check+1;
		instance->game_over();
		instance->mark_board(14);
		cout<<*instance;
		check=check+1;
		instance->game_over();
		instance->mark_board(15);
		cout<<*instance;
		check=check+1;
		instance->game_over();
		instance->mark_board(16);
		cout<<*instance;
		check=check+1;
		instance->game_over();
		cout<<"number of game over checks: "<<check<<"\n";
	
	} while (instance->game_over()==false);
	REQUIRE(instance->get_winner()=="C");
	cout<<"Test complete: "<<"\n";
	cout<<"\n";
}
TEST_CASE("Win by column 1 4") 
{
	unique_ptr<TicTacToe> instance;
	instance=make_unique <TicTacToe4>();
	do
	{
		instance->start_game("X");
		instance->mark_board(1);
		instance->game_over();
		instance->mark_board(2);
		instance->game_over();
		instance->mark_board(5);
		instance->game_over();
		instance->mark_board(3);
		instance->game_over();
		instance->mark_board(9);
		instance->game_over();
		instance->mark_board(4);
		instance->game_over();
		instance->mark_board(13);
		instance->game_over();
		cout<<*instance;
	} while (instance->game_over()==false);
	REQUIRE(instance->game_over()==true);
	REQUIRE(instance->get_winner()=="X");
	cout<<"Test complete: "<<"\n";
	cout<<"\n";
}
TEST_CASE("Win by column 2 4") 
{
	unique_ptr<TicTacToe> instance;
	instance=make_unique <TicTacToe4>();
	do
	{
		instance->start_game("X");
		instance->mark_board(2);
		instance->game_over();
		instance->mark_board(1);
		instance->game_over();
		instance->mark_board(6);
		instance->game_over();
		instance->mark_board(4);
		instance->game_over();
		instance->mark_board(10);
		instance->game_over();
		instance->mark_board(13);
		instance->game_over();
		instance->mark_board(14);
		instance->game_over();
		cout<<*instance;
	} while (instance->game_over()==false);
	REQUIRE(instance->game_over()==true);
	REQUIRE(instance->get_winner()=="X");
	cout<<"Test complete: "<<"\n";
	cout<<"\n";
}
TEST_CASE("Win by column 3 4") 
{
	unique_ptr<TicTacToe> instance;
	instance=make_unique <TicTacToe4>();
	do
	{
		instance->start_game("X");
		instance->mark_board(3);
		instance->game_over();
		instance->mark_board(1);
		instance->game_over();
		instance->mark_board(7);
		instance->game_over();
		instance->mark_board(4);
		instance->game_over();
		instance->mark_board(11);
		instance->game_over();
		instance->mark_board(10);
		instance->game_over();
		instance->mark_board(15);
		instance->game_over();
		cout<<*instance;
	} while (instance->game_over()==false);
	REQUIRE(instance->game_over()==true);
	REQUIRE(instance->get_winner()=="X");
	cout<<"Test complete: "<<"\n";
	cout<<"\n";
}
TEST_CASE("Win by column 4 4") 
{
	unique_ptr<TicTacToe> instance;
	instance=make_unique <TicTacToe4>();
	do
	{
		instance->start_game("X");
		instance->mark_board(4);
		instance->game_over();
		instance->mark_board(1);
		instance->game_over();
		instance->mark_board(8);
		instance->game_over();
		instance->mark_board(9);
		instance->game_over();
		instance->mark_board(12);
		instance->game_over();
		instance->mark_board(10);
		instance->game_over();
		instance->mark_board(16);
		instance->game_over();
		cout<<*instance;
	} while (instance->game_over()==false);
	REQUIRE(instance->game_over()==true);
	REQUIRE(instance->get_winner()=="X");
	cout<<"Test complete: "<<"\n";
	cout<<"\n";
}
TEST_CASE("Win by row 1 4") 
{
	unique_ptr<TicTacToe> instance;
	instance=make_unique <TicTacToe4>();
	do
	{
		instance->start_game("X");
		instance->mark_board(1);
		instance->game_over();
		instance->mark_board(5);
		instance->game_over();
		instance->mark_board(2);
		instance->game_over();
		instance->mark_board(6);
		instance->game_over();
		instance->mark_board(3);
		instance->game_over();
		instance->mark_board(7);
		instance->game_over();
		instance->mark_board(4);
		instance->game_over();
		cout<<*instance;
	} while (instance->game_over()==false);
	REQUIRE(instance->game_over()==true);
	REQUIRE(instance->get_winner()=="X");
	cout<<"Test complete: "<<"\n";
	cout<<"\n";
}
TEST_CASE("Win by row 2 4") 
{
	unique_ptr<TicTacToe> instance;
	instance=make_unique <TicTacToe4>();
	do
	{
		instance->start_game("X");
		instance->mark_board(5);
		instance->game_over();
		instance->mark_board(1);
		instance->game_over();
		instance->mark_board(6);
		instance->game_over();
		instance->mark_board(2);
		instance->game_over();
		instance->mark_board(7);
		instance->game_over();
		instance->mark_board(3);
		instance->game_over();
		instance->mark_board(8);
		instance->game_over();
		cout<<*instance;
	} while (instance->game_over()==false);
	REQUIRE(instance->game_over()==true);
	REQUIRE(instance->get_winner()=="X");
	cout<<"Test complete: "<<"\n";
	cout<<"\n";
}
TEST_CASE("Win by row 3 4") 
{
	unique_ptr<TicTacToe> instance;
	instance=make_unique <TicTacToe4>();
	do
	{
		instance->start_game("X");
		instance->mark_board(9);
		instance->game_over();
		instance->mark_board(4);
		instance->game_over();
		instance->mark_board(10);
		instance->game_over();
		instance->mark_board(5);
		instance->game_over();
		instance->mark_board(11);
		instance->game_over();
		instance->mark_board(6);
		instance->game_over();
		instance->mark_board(12);
		instance->game_over();
		cout<<*instance;
	} while (instance->game_over()==false);
	REQUIRE(instance->game_over()==true);
	REQUIRE(instance->get_winner()=="X");
	cout<<"Test complete: "<<"\n";
	cout<<"\n";
}
TEST_CASE("Win by row 4 4") 
{
	unique_ptr<TicTacToe> instance;
	instance=make_unique <TicTacToe4>();
	do
	{
		instance->start_game("X");
		instance->mark_board(13);
		instance->game_over();
		instance->mark_board(4);
		instance->game_over();
		instance->mark_board(14);
		instance->game_over();
		instance->mark_board(5);
		instance->game_over();
		instance->mark_board(15);
		instance->game_over();
		instance->mark_board(6);
		instance->game_over();
		instance->mark_board(16);
		instance->game_over();
		cout<<*instance;
	} while (instance->game_over()==false);
	REQUIRE(instance->game_over()==true);
	REQUIRE(instance->get_winner()=="X");
	cout<<"Test complete: "<<"\n";
	cout<<"\n";
}
TEST_CASE("Win by top left diagonal 4") 
{
	unique_ptr<TicTacToe> instance;
	instance=make_unique <TicTacToe4>();
	do
	{
		instance->start_game("X");
		instance->mark_board(1);
		instance->game_over();
		instance->mark_board(4);
		instance->game_over();
		instance->mark_board(6);
		instance->game_over();
		instance->mark_board(2);
		instance->game_over();
		instance->mark_board(11);
		instance->game_over();
		instance->mark_board(3);
		instance->game_over();
		instance->mark_board(16);
		instance->game_over();
		cout<<*instance;
	} while (instance->game_over()==false);
	REQUIRE(instance->game_over()==true);
	REQUIRE(instance->get_winner()=="X");
	cout<<"Test complete: "<<"\n";
	cout<<"\n";
}
TEST_CASE("Win by bottom left diagonal 4") 
{
	unique_ptr<TicTacToe> instance;
	instance=make_unique <TicTacToe4>();
	do
	{
		instance->start_game("X");
		instance->mark_board(4);
		instance->game_over();
		instance->mark_board(1);
		instance->game_over();
		instance->mark_board(7);
		instance->game_over();
		instance->mark_board(2);
		instance->game_over();
		instance->mark_board(10);
		instance->game_over();
		instance->mark_board(3);
		instance->game_over();
		instance->mark_board(13);
		instance->game_over();
		cout<<*instance;
	} while (instance->game_over()==false);
	REQUIRE(instance->game_over()==true);
	REQUIRE(instance->get_winner()=="X");
	cout<<"Test complete: "<<"\n";
	cout<<"\n";
}
TEST_CASE("Winner total Manager check") 
{
	std::string winner;
	int x;
	int o;
	int t;
	unique_ptr<TicTacToe> instance;
	instance=make_unique <TicTacToe3>();
	TicTacToeManager manager;
	instance->start_game("X");
	instance->game_over();
	do
	{
		instance->mark_board(1);
		instance->game_over();
		instance->mark_board(4);
		instance->game_over();
		instance->mark_board(2);
		instance->game_over();
		instance->mark_board(5);
		instance->game_over();
		instance->mark_board(3);
		instance->game_over();
		cout<<*instance;
	} while (instance->game_over()==false);
	winner=instance->get_winner();
	manager.save_game(instance);
	instance->start_game("O");
	instance->game_over();
	do
	{
		instance->mark_board(1);
		instance->game_over();
		instance->mark_board(4);
		instance->game_over();
		instance->mark_board(2);
		instance->game_over();
		instance->mark_board(5);
		instance->game_over();
		instance->mark_board(3);
		instance->game_over();
		cout<<*instance;
	} while (instance->game_over()==false);
	winner=instance->get_winner();
	manager.save_game(instance);
	instance->start_game("X");
	instance->game_over();
	do
	{
		instance->mark_board(1);
		instance->game_over();
		instance->mark_board(2);
		instance->game_over();
		instance->mark_board(3);
		instance->game_over();
		instance->mark_board(4);
		instance->game_over();
		instance->mark_board(5);
		instance->game_over();
		instance->mark_board(7);
		instance->game_over();
		instance->mark_board(6);
		instance->game_over();
		instance->mark_board(9);
		instance->game_over();
		instance->mark_board(8);
		instance->game_over();
		cout<<*instance;
	} while (instance->game_over()==false);
	winner=instance->get_winner();
	manager.save_game(instance);
	manager.get_winner_total(x,o,t);
	cout<<"X wins: "<<x<<", O wins: "<<o<<", Ties: "<<t<<"\n";
	REQUIRE(instance->game_over()==true);
	cout<<"Test complete: "<<"\n";
	cout<<"\n";
}
