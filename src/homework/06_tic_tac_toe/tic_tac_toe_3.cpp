#include "tic_tac_toe_3.h"
#include "tic_tac_toe.h"
/*
class function check_column_win
Win by column if and return true if
0,3, and 6 are equal
1, 4, and 7
2, 5, and 8
else
false
*/
//Check for column winners
bool TicTacToe3:: check_column_win()
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
/*
class function check_row_win
Win by row if
0, 1, 2 are equal
3,4,5 are equal
6,7,8 are equal
*/
//Check for row winners
bool TicTacToe3:: check_row_win()
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
/*
class function check_diagonal_win
Win diagonally
0 1 2
3 4 5
6 7 8
*/
//Check for diagonal winners
bool TicTacToe3:: check_diagonal_win()
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
