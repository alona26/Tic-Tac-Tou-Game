#include <iostream>
#include "Board.h"
using namespace std;
void Board::init_board(char **arr, int width, int height)
{
    for (int i = 0; i < width ; i++)
    {
        for (int j = 0; j < height; j++)
        {
            arr[i][j]='-';
        }
    }
}
void Board::display_board(char **arr, int width, int height)
{
    for (int i = 0; i < width ; i++)
    {
        for (int j = 0; j < height; j++)
        {
            cout<<"  "<<arr[i][j]<<"  |";
        }
        cout<<endl;
    }
}
bool Board::is_full(char **arr, int width, int height)
{
    for (int i = 0; i < width ; i++)
    {
        for (int j = 0; j < height; j++)
        {
            if (arr[i][j]=='-')
                return false;
        }
    }
    return true;
}
void Board::update_move(char **arr, int i, int j, int width, int height, bool IsX)
{
    while(i>width||j>height||i<0||j<0||(arr[i][j]!='-')) //checking if the indexes are valid
    {
        cout<<"Invalid Move"<<endl;
        cout<<"Please choose line index->";
        cin>>i;
        cout<<"Please choose column index->";
        cin>>j;
    }
    if(IsX==true)
    arr[i][j]='X';
    else arr[i][j]='O';
}
