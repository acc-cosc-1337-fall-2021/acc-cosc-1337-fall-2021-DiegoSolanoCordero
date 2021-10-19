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
	int loop;
	TicTacToe instance;
	cout<<"Press X or Y to"<<"\n";
	cin>>first_player;
	instance.start_game(first_player);
	while (loop=0)
	instance.display_board();
	instance.mark_board(position);
	
	return 0;
}