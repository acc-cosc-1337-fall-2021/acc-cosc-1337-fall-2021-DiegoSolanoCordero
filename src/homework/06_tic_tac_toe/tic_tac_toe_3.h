//h
#include "tic_tac_toe.h"
#ifndef TicTacToe3_H
#define TicTacToe3_H
class TicTacToe3:public TicTacToe
{
    public:
        TicTacToe3():TicTacToe(3){};
    private:
        bool check_column_win();
        bool check_row_win();
        bool check_diagonal_win();  
};
#endif
