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
    /*bool check;
    check=check_column_win();
    if (check=true)
    return check;
    else
    check=check_row_win();
    if (check=true)
    return check;
    else
    check=check_diagonal_win();
    if (check=true)
    return check;
    else*/
    return check_board_full();
}
//set first player value to player
void TicTacToe::start_game(std::string first_player)
{
    if (first_player=="X"||first_player=="x")
    player="X";
    else if (first_player=="O"||first_player=="o")
    player="O";
    TicTacToe::clear_board();
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
    cout<<"["<<pegs[0]<<"]"<<"["<<pegs[1]<<"]"<<"["<<pegs[2]<<"]"<<"\n";
    cout<<"["<<pegs[3]<<"]"<<"["<<pegs[4]<<"]"<<"["<<pegs[5]<<"]"<<"\n";
    cout<<"["<<pegs[6]<<"]"<<"["<<pegs[7]<<"]"<<"["<<pegs[8]<<"]"<<"\n";
}
// Find winner
string TicTacToe::get_winner()
{
    return winner;
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
//Check for column winners
bool TicTacToe:: check_column_win()
{
    if (pegs[0]=="X" && pegs[3]=="X" && pegs[6]=="X" ||pegs[1]=="X" && pegs[4]=="X" && pegs[7]=="X"||pegs[2]=="X" && pegs[5]=="X" && pegs[8]=="X")
    return true;
    else if (pegs[0]=="O" && pegs[3]=="O" && pegs[6]=="O" ||pegs[1]=="O" && pegs[4]=="O" && pegs[7]=="O"||pegs[2]=="O" && pegs[5]=="O" && pegs[8]=="O")
    return true;
    else
    return false;
    
}
//Check for row winners
bool TicTacToe:: check_row_win()
{
    if (pegs[0]=="X" && pegs[1]=="X" && pegs[2]=="X" ||pegs[3]=="X" && pegs[4]=="X" && pegs[5]=="X"||pegs[6]=="X" && pegs[7]=="X" && pegs[8]=="X")
    return true;
    else if (pegs[0]=="O" && pegs[1]=="O" && pegs[2]=="O" ||pegs[3]=="O" && pegs[4]=="O" && pegs[5]=="O"||pegs[6]=="O" && pegs[7]=="O" && pegs[8]=="O")
    return true;
    else
    return false;
    
}
//Check for diagonal winners
bool TicTacToe:: check_diagonal_win()
{
    if (pegs[0]=="X" && pegs[4]=="X" && pegs[8]=="X" ||pegs[6]=="X" && pegs[4]=="X" && pegs[2]=="X")
    return true;
    else if (pegs[0]=="O" && pegs[4]=="O" && pegs[8]=="O" ||pegs[6]=="O" && pegs[4]=="O" && pegs[2]=="O")
    return true;
    else
    return false;
}
//Set winner
void TicTacToe:: set_winner()
{
    if (player=="X")
    winner="O";
    else if (player=="O")
    winner="X";
}