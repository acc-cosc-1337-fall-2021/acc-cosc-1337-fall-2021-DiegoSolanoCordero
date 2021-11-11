//h
#include "tic_tac_toe.h"
class Game4:public TicTacToe
{
    public:
    Game4(): TicTacToe(4){};
    private:
    bool check_column_win();
    bool check_row_win();
    bool check_diagonal_win();  
};