//h
#include "tic_tac_toe.h"
class Game3:public TicTacToe
{
    public:
    Game3(): TicTacToe(3){};
    private:
    bool check_column_win();
    bool check_row_win();
    bool check_diagonal_win();  
};