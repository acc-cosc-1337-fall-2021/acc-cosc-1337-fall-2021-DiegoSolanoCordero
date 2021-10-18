//cpp
#include <string>
#include <vector>
#include "iostream"
#include "tic_tac_toe.h"
using std::string;
using std::cout;
//return check_board_full function return value
bool TicTacToe::game_over()
{
    return TicTacToe::check_board_full;
}
//set first player value to player
void TicTacToe::start_game(std::string first_player)
{
    player=first_player;
    TicTacToe::clear_board;
}
//Mark position -1	
void TicTacToe::mark_board(int position)
{
    int current=position-1;
    pegs[current]= get_player();
    set_next_player();
}
//Return player value
string TicTacToe::get_player() const
{
    return player;
}
//Iterate and display vectors
void TicTacToe::display_board() const
{
    cout<<"["<<pegs[0,2]<<"]"<<"\n";
    cout<<"["<<pegs[3,5]<<"]"<<"\n";
    cout<<"["<<pegs[6,8]<<"]"<<"\n";
}

//If Player X or O then O or X
void TicTacToe::set_next_player()
{
    if (player=="X")
    player="O";
    else if (player=="O")
    player="X";
}
//Check if the board is full
bool TicTacToe::check_board_full()
{
    int value;
    for (int value=0; value<8;++value);
    {
        if (pegs[value]=="")
        return false;
        else if (pegs[0,8]!=" ")
        return true;
    }
}
//Set all board to empty space
void TicTacToe::clear_board()
{
    pegs[0,8]=" ";
}
