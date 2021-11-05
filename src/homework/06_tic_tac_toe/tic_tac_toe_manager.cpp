//cpp
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
void TicTacToeManager::save_game(TicTacToe b) 
{
    games.push_back(b);
    update_winner_count(b.get_winner());
}
void TicTacToeManager:: get_winner_total(int& x, int& o, int&t)
{
    x=x_win;
    o=o_win;
    t=ties;
}
void TicTacToeManager:: update_winner_count(string winner)
{
    if (winner=="X")
    x_win=x_win+1;
    else if (winner=="O")
    o_win=o_win+1;
    if (winner=="C")
    ties=ties+1;
}
ostream& operator<<(std::ostream & out, const TicTacToeManager& manager)
{
    for(auto itr: manager.games )
    {
    out<<itr<<"\n";
    }
}

