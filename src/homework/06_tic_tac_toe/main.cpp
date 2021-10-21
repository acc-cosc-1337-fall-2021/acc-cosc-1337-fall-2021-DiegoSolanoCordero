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
	TicTacToe instance;
	while (repeat==1)
	{
		cout<<"Press X or O for the first player's turn"<<"\n";
		cin>>first_player;
		instance.start_game(first_player);
		instance.display_board();
		while (getout!=true)
		{
			cout<<"Player:"<<instance.get_player()<<"'s turn,Select a space to fill from 1 to 9"<<"\n";
			cin>>position;
			//cout<<"mark_board"<<"\n";
			instance.mark_board(position); 
			//cout<<"display_board"<<"\n";
			instance.display_board();
			getout=instance.game_over();
		}
		cout<<"Game over, press 1 to play again, 2 to exit"<<"\n";
		cin>>repeat;
	}
	cout<<"Program ended"<<"\n";
	return 0;
}