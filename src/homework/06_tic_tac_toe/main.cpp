#include <string>
#include <vector>
#include "iostream"
#include "tic_tac_toe.h"
using std::string;
using std::cout;
using std::cin;
int main() 
{
	std::string first_player;
	int position;
	int loop=0;
	int repeat=1;
	bool getout=false;
	std::string winner;
	TicTacToe instance;
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
		instance.display_board();
		getout=false;
		while (getout==false)
		{
			cout<<"Player:"<<instance.get_player()<<"'s turn, Select a space to fill from 1 to 9"<<"\n";
			cin>>position;
			//cout<<"mark_board"<<"\n";
			instance.mark_board(position); 
			//cout<<"display_board"<<"\n";
			instance.display_board();
			getout=instance.game_over();
		}
		winner=instance.get_winner();
		if (winner=="C")
		cout<<"It's a tie!"<<"\n";
		else
		cout<<"The Winner is: player "<<(winner)<<"!"<<"\n";
		cout<<"Game over, press 1 to play again, 2 to exit"<<"\n";
		cin>>repeat;
	}
	cout<<"Program ended"<<"\n";
	return 0;
}