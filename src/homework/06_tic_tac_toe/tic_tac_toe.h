//h
#include <string>
#include <vector>
using std::string;
using std::vector;
class TicTacToe
{
    public:
        bool game_over();
        void start_game(std::string first_player);
        void mark_board(int position);
        void display_board()const;
        std::string get_player()const;
        std::string get_winner();
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