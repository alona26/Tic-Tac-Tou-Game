#pragma once
#include "GameController.h"
#include "Board.h"
// template<int I,int J>
class TTT_EasyGame : virtual public Board
{
public:
    virtual void add_move(char **arr, int width, int height,bool IsX);
    virtual int is_winner(char **arr,bool IsComputerX);
};