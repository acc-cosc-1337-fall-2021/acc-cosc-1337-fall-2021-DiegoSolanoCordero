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
    return check_board_full();
}
//set first player value to player
void TicTacToe::start_game(std::string first_player)
{
    player=first_player;
    TicTacToe::clear_board();
}
//Mark position -1	
void TicTacToe::mark_board(int position)
{
    int current=position-1;
    pegs[current]= get_player();
    set_next_player();
    cout<<current<<"\n";
}
//Return player value
string TicTacToe::get_player() const
{
    return player;
}
//Iterate and display vectors
void TicTacToe::display_board() const
{
    cout<<"["<<pegs[0]<<"]"<<"["<<pegs[1]<<"]"<<"["<<pegs[2]<<"]"<<"\n";
    cout<<"["<<pegs[3]<<"]"<<"["<<pegs[4]<<"]"<<"["<<pegs[5]<<"]"<<"\n";
    cout<<"["<<pegs[6]<<"]"<<"["<<pegs[7]<<"]"<<"["<<pegs[8]<<"]"<<"\n";
}

//If Player X or O then O or X
void TicTacToe::set_next_player()
{
    if (player=="X" || player=="x")
    player="O";
    else if (player=="O" || player=="o")
    player="X";
}
//Check if the board is full
bool TicTacToe::check_board_full()
{
    bool over=true;
    int value=0;
    int empty=0;
    for(auto itr: pegs )
    {
        if (itr!="X" & itr!="O" & itr!="x" & itr!="o")
        empty=empty+1;
    }

    if (empty>0) 
    over=false;   
    return over;
}
//Set all board to empty space
void TicTacToe::clear_board()
{
    pegs= std::vector<std::string>(9," ");
    //for(auto itr: pegs )
    //{
      //  itr=" ";
    //}
}
