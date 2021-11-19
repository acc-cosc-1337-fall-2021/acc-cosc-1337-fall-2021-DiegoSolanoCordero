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
    if (game.pegs.size()==9)
    {
        out<<"["<<game.pegs[0]<<"]"<<"["<<game.pegs[1]<<"]"<<"["<<game.pegs[2]<<"]"<<"\n";
        out<<"["<<game.pegs[3]<<"]"<<"["<<game.pegs[4]<<"]"<<"["<<game.pegs[5]<<"]"<<"\n";
        out<<"["<<game.pegs[6]<<"]"<<"["<<game.pegs[7]<<"]"<<"["<<game.pegs[8]<<"]"<<"\n";
    }
    else if (game.pegs.size()==16)
    {
        out<<"["<<game.pegs[0]<<"]"<<"["<<game.pegs[1]<<"]"<<"["<<game.pegs[2]<<"]"<<"["<<game.pegs[3]<<"]"<<"\n";
        out<<"["<<game.pegs[4]<<"]"<<"["<<game.pegs[5]<<"]"<<"["<<game.pegs[6]<<"]"<<"["<<game.pegs[7]<<"]"<<"\n";
        out<<"["<<game.pegs[8]<<"]"<<"["<<game.pegs[9]<<"]"<<"["<<game.pegs[10]<<"]"<<"["<<game.pegs[11]<<"]"<<"\n";
        out<<"["<<game.pegs[12]<<"]"<<"["<<game.pegs[13]<<"]"<<"["<<game.pegs[14]<<"]"<<"["<<game.pegs[15]<<"]"<<"\n";
    }
    return out;
}

std::istream& operator>>(std::istream& in, TicTacToe& game)
{
    int position;
    cout<<"Choose a space to fill in the board"<<"\n";
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
    for(auto itr: pegs )
    {
        itr!=" ";
    }
}
//Check for column winners
bool TicTacToe:: check_column_win()
{
    return false;   
}
//Check for row winners
bool TicTacToe:: check_row_win()
{
    return false;
}
//Check for diagonal winners
bool TicTacToe:: check_diagonal_win()
{
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
//Return the pegs vector
const std::vector<string> TicTacToe::get_pegs()
{
    return pegs;
}
