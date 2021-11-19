//h
#include "tic_tac_toe.h"
#include <memory>
#include <iostream>
#include <fstream>
#ifndef TicTacToeData_H
#define TicTacToeData_H
class TicTacToeData
{
    public:
    void save_games(const std::vector<std::unique_ptr<TicTacToe>>& games);
    std::vector<std::unique_ptr<TicTacToe>> get_games();
};
#endif