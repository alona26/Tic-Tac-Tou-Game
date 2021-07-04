#pragma once
#include <iostream>
#include "Board.h"
// template<typename I,typename J>
class GameController
{
private:
    Board *board;
    char **_arr;
    bool IsComputerFirst;
public:
    void play();
    ~GameController();
};