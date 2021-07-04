#pragma once
// template<int I,int J>
#include <iostream>
class Board
{
public:
    void init_board(char **arr, int width, int height);
    bool is_full(char **arr, int width, int height);
    virtual int is_winner(char **arr, bool IsComputerX)=0;
    virtual void add_move(char **arr, int width, int height,bool b)=0;
    void display_board(char **arr, int width, int height);
    void update_move(char **arr, int i, int j, int width, int height, bool IsX);
};