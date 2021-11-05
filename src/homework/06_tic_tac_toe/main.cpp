#include <string>
#include <vector>
#include "iostream"
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
using std::string;
using std::cout;
using std::cin;
int main() 
{
	std::string first_player;
	int loop=0;
	int repeat=1;
	bool getout=false;
	std::string winner;
	TicTacToe instance;
	TicTacToeManager instance2;
	while (repeat==1)
	{
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
		instance.start_game(first_player);
		cout<<instance;
		getout=false;
		while (getout==false)
		{
			cout<<"Player:"<<instance.get_player()<<"'s turn, Select a space to fill from 1 to 9"<<"\n";
			cin>>instance;
			cout<<instance;
			getout=instance.game_over();
		}
		winner=instance.get_winner();
		if (winner=="C")
		cout<<"It's a tie!"<<"\n";
		else
		cout<<"The Winner is: player "<<(winner)<<"!"<<"\n";
		instance2.save_game(instance);
		int x;
		int o;
		int t;
		instance2.get_winner_total(x,o,t);
		cout<<"X wins: "<<x<<", O wins: "<<o<<", Ties: "<<t<<"\n";
		cout<<"Game over, press 1 to play again, 2 to exit"<<"\n";
		cin>>repeat;	
	}
	cout<<"Games played: "<<"\n";
	cout<<instance2;
	cout<<"Program ended"<<"\n";
	return 0;
}