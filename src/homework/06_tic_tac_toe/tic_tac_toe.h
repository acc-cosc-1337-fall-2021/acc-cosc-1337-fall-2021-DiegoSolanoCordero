//h
#include <string>
#include <vector>
#include <iostream>
using namespace std;
using std::string;
using std::vector;
using std::ostream;
using std::istream;
#ifndef TicTacToe_H
#define TicTacToe_H
class TicTacToe
{
    
    public:
        TicTacToe(){};
        TicTacToe(int size):pegs(size*size," "){};
        bool game_over();
        void start_game(std::string first_player);
        void mark_board(int position);
        std::string get_player()const;
        std::string get_winner();
        friend std::ostream& operator<<(std::ostream& out, const TicTacToe& game);
        friend std::istream& operator>>(std::istream& in, TicTacToe& game);
    private:
        std::string player;
        std::string winner;
        void set_next_player();
        bool check_board_full();
        void clear_board();
        
        void set_winner();
    protected:
        std::vector<std::string> pegs;
        bool virtual check_column_win();
        bool virtual check_row_win();
        bool virtual check_diagonal_win();

};
#endif