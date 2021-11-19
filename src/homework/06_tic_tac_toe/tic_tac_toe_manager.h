//h
#include <string>
#include <vector>
#include <memory>
#include <iostream>
#include "tic_tac_toe_data.h"
#include "tic_tac_toe.h"
using std::string;
using std::vector;
using std::ostream;
using std::istream;
using std::unique_ptr;
#ifndef TicTacToeManager_H
#define TicTacToeManager_H
class TicTacToeManager
{
  
    public:
        TicTacToeManager() = default;
        TicTacToeManager(TicTacToeData Data);
        void get_winner_total(int& x, int& o, int&t);
        void save_game(unique_ptr<TicTacToe> &b);
        void update_winner_count(std::string winner);
        friend ostream&operator<<(std::ostream & out, const TicTacToeManager& manager);
        ~TicTacToeManager();
    private:
        
        std::vector<unique_ptr<TicTacToe>> games;
        int x_win=0;
        int o_win=0;
        int ties=0;
        TicTacToeData Data;
};
#endif