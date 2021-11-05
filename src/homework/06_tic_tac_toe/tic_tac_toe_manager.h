//h
#include <string>
#include <vector>
#include <iostream>
#include "tic_tac_toe.h"
using std::string;
using std::vector;
using std::ostream;
using std::istream;
class TicTacToeManager
{
    public:
        void get_winner_total(int& x, int& o, int&t);
        void save_game(TicTacToe b);
        void update_winner_count(std::string winner);
        friend ostream&operator<<(std::ostream & out, const TicTacToeManager& manager);
    private:
        std::vector<TicTacToe> games;
        int x_win=0;
        int o_win=0;
        int ties=0;
        
};
