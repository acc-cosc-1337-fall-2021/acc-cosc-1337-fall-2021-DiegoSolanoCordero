//cpp
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_data.h"
#include <memory>
#include <string>
#include <iostream>
#include <fstream>
void TicTacToeData::save_games(const std::vector<std::unique_ptr<TicTacToe>>& games)
{
    ofstream FileHandler;
    FileHandler.open("Games.txt");
    for(const auto& game : games)
    {
        for(const auto& letter : game->get_pegs())
        {
            FileHandler<<letter;
        }
    FileHandler<<game->get_winner()<<"\n";
    }
FileHandler.close();
}
std::vector<std::unique_ptr<TicTacToe>> TicTacToeData:: get_games()
{
    std::vector<std::unique_ptr<TicTacToe>> Boards;
    ifstream FileHandler;
    FileHandler.open("Games.txt");
    std::string line;
    std::vector<string> pegs;
    std::string winner;
   
    while (getline(FileHandler, line))
    {
        int pegvalues=line.size()-1;
        int winnervalue=line.size();
        for(int i=0; i<pegvalues; i=i+1)
        {
            std::string add=std::string(1,line[1]);
            pegs.push_back(add);
        }
        winner=std::string(1,line[winnervalue]);
     //Create Tictactoe board, depending on pegs size
    unique_ptr <TicTacToe> board;
    if (pegs.size()==9)
    {
        board=make_unique <TicTacToe3>();
    }
    else if (pegs.size()==16)
    {
        board=make_unique <TicTacToe4>();
    }
    Boards.push_back(board);
    }
    FileHandler.close();
    return Boards;
}