//cpp
#include <string>
#include <vector>
#include "iostream"
#include "tic_tac_toe.h"
using namespace std;
using std::string;
using std::cout;
using std::ostream;
using std::istream;
//return check_board_full function return value

bool TicTacToe::game_over()
{
    bool true_check=false;
    bool check1=check_column_win();
    bool check2=check_row_win();
    bool check3=check_diagonal_win();
    bool check4=check_board_full();
    if (check1==true)
    {
        true_check=check1;
        cout<<"A column is full"<<"\n";
        set_winner();
    }
    else if (check2==true)
    {
        true_check=check2;
        cout<<"A row is full"<<"\n";
        set_winner();
    }
    else if (check3==true)
    {
        true_check=check3;
        cout<<"A diagonal is full"<<"\n";
        set_winner();
    }
    else if (check4==true)
    {
        true_check=check4;
        cout<<"Board is full"<<"\n";
        winner="C";
    }
    return true_check;
    //return check_board_full();
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

std::ostream& operator<<(std::ostream& out, const TicTacToe& game)
{
    out<<"["<<game.pegs[0]<<"]"<<"["<<game.pegs[1]<<"]"<<"["<<game.pegs[2]<<"]"<<"\n";
    out<<"["<<game.pegs[3]<<"]"<<"["<<game.pegs[4]<<"]"<<"["<<game.pegs[5]<<"]"<<"\n";
    out<<"["<<game.pegs[6]<<"]"<<"["<<game.pegs[7]<<"]"<<"["<<game.pegs[8]<<"]"<<"\n";
    return out;
}

std::istream& operator>>(std::istream& in, TicTacToe& game)
{
    int position;
    cout<<"Choose a space between 1 and 9"<<"\n";
    in>>position;
    game.mark_board(position);
    return in;
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
}
//Check for column winners
bool TicTacToe:: check_column_win()
{
    bool column=false;
    if (pegs[0]=="X" && pegs[3]=="X" && pegs[6]=="X"||pegs[0]=="O" && pegs[3]=="O" && pegs[6]=="O")
    {
        column=true;
    }
    else if (pegs[1]=="X" && pegs[4]=="X" && pegs[7]=="X"||pegs[1]=="O" && pegs[4]=="O" && pegs[7]=="O")
    {
        column=true;
    }
    else if (pegs[2]=="X" && pegs[5]=="X" && pegs[8]=="X"||pegs[2]=="O" && pegs[5]=="O" && pegs[8]=="O")
    {
        column=true;
    }
    else
    {
        column=false;
    }
    return column;
    
}
//Check for row winners
bool TicTacToe:: check_row_win()
{
    bool row=false;
    if (pegs[0]=="X" && pegs[1]=="X" && pegs[2]=="X"||pegs[0]=="O" && pegs[1]=="O" && pegs[2]=="O")
    {
        row=true;
    }
    else if (pegs[3]=="X" && pegs[4]=="X" && pegs[5]=="X"||pegs[3]=="O" && pegs[4]=="O" && pegs[5]=="O")
    {
        row=true;
    }
    else if (pegs[6]=="X" && pegs[7]=="X" && pegs[8]=="X"||pegs[6]=="O" && pegs[7]=="O" && pegs[8]=="O")
    {
        row=true;
    }
    else
    {
        row=false;
    }
    return row;
}
//Check for diagonal winners
bool TicTacToe:: check_diagonal_win()
{
    bool diagonal=false;
    if (pegs[0]=="X" && pegs[4]=="X" && pegs[8]=="X"||pegs[0]=="O" && pegs[4]=="O" && pegs[8]=="O")
    {
        diagonal=true;
    }
    else if (pegs[2]=="X" && pegs[4]=="X" && pegs[6]=="X"||pegs[2]=="O" && pegs[4]=="O" && pegs[6]=="O")
    {
        diagonal=true;
    }
    else
    {
        diagonal=false;
    }
    return diagonal;
}
//Set winner
void TicTacToe:: set_winner()
{
    if (player=="X")
    winner="O";
    else if (player=="O")
    winner="X";
}
