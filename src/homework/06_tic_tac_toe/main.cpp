#include <string>
#include <vector>
#include <memory>
#include "iostream"
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe_manager.h"
using std::string;
using std::cout;
using std::cin;
int main() 
{
	std::string first_player;
	int loop=0;
	int repeat=1;
	int size;
	bool getout=false;
	std::string winner;
	unique_ptr <TicTacToe> instance;
	TicTacToeManager manager;
	TicTacToeData datainstance;
	manager.save_game(datainstance);
	while (repeat==1)
	{
		int size_check=1;
		while (size_check==1)
		{
			cout<<"Press 3 for a 3x3 board, 4 for a 4x4 board"<<"\n";
			cin>>size;
			if (size==3)
			{
				instance=make_unique <TicTacToe3>();
				size_check=2;
			}
			else if (size==4)
			{
				instance=make_unique <TicTacToe4>();
				size_check=2;
			}
			else
			{
				cout<<"That is not a valid number, please try again"<<"\n";
				size_check=1;
			}	
		}
		int input_player=1;
		while (input_player==1)
		{
			cout<<"Press X or O for the first player's turn"<<"\n";
			cin>>first_player;
			if (first_player=="X"||first_player=="O"||first_player=="x"||first_player=="o")
			{
				input_player=2;
			}
			else
			{
				cout<<"That is not a valid player, please try again"<<"\n";
				input_player=1;
			}	
		}
		instance->start_game(first_player);
		cout<<*instance;
		getout=false;
		while (getout==false)
		{
			cout<<"Player:"<<instance->get_player()<<"'s turn"<<"\n";
			cin>>*instance;
			cout<<*instance;
			getout=instance->game_over();
		}
		winner=instance->get_winner();
		if (winner=="C")
		cout<<"It's a tie!"<<"\n";
		else
		cout<<"The Winner is: player "<<(winner)<<"!"<<"\n";
		manager.save_game(instance);
		int x;
		int o;
		int t;
		manager.get_winner_total(x,o,t);
		cout<<"X wins: "<<x<<", O wins: "<<o<<", Ties: "<<t<<"\n";
		cout<<"Game over, press 1 to play again, 2 to exit"<<"\n";
		cin>>repeat;	
	}
	cout<<"Games played: "<<"\n";
	cout<<manager;
	cout<<"Program ended"<<"\n";
	return 0;
}