//h
#include <string>
#include <vector>
#include <iostream>
using namespace std;
using std::string;
using std::vector;
using std::ostream;
using std::istream;
#ifndef Tictactoe_H
#define Tictactoe_H

class TicTacToe
{
    public:
        bool game_over();
        void start_game(std::string first_player);
        void mark_board(int position);
        std::string get_player()const;
        std::string get_winner();
        friend std::ostream& operator<<(std::ostream& out, const TicTacToe& game);
        friend std::istream& operator>>(std::istream& in, TicTacToe& game);
    private:
        std::string player;
        std::vector<std::string> pegs= std::vector<std::string>(9," ");
        std::string winner;
        void set_next_player();
        bool check_board_full();
        void clear_board();
        bool check_column_win();
        bool check_row_win();
        bool check_diagonal_win();
        void set_winner();
        
};
#endif