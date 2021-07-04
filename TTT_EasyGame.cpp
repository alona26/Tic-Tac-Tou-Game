#include <iostream>
#include "TTT_EasyGame.h"
using namespace std;
void TTT_EasyGame::add_move(char **arr, int width, int height,bool IsX)
{ 
    for (int i = 0; i < width ; i++)
    {
        for (int j = 0; j < height; j++)
        {
            if(arr[i][j]=='-')//random move
            {
                if(IsX==true)
                arr[i][j]='X';
                else arr[i][j]='O';
                return;
            }
        }
    }
}
int TTT_EasyGame::is_winner(char **arr,bool IsComputerX)
{
    /*******************checking the rows for X****************************/
    if(arr[0][0]=='X'&&arr[0][1]=='X'&&arr[0][2]=='X' &&IsComputerX==true)
        return 1;               //the computer won;
    if(arr[0][0]=='X'&&arr[0][1]=='X'&&arr[0][2]=='X' &&IsComputerX==false)
        return -1;               //the person won;
    if(arr[1][0]=='X'&&arr[1][1]=='X'&&arr[1][2]=='X' &&IsComputerX==true)
        return 1;               //the computer won;
    if(arr[1][0]=='X'&&arr[1][1]=='X'&&arr[1][2]=='X' &&IsComputerX==false)
        return -1;               //the person won;
    if(arr[2][0]=='X'&&arr[2][1]=='X'&&arr[2][2]=='X' &&IsComputerX==true)
        return 1;               //the computer won;
    if(arr[2][0]=='X'&&arr[2][1]=='X'&&arr[2][2]=='X' &&IsComputerX==false)
        return -1;               //the person won;
    /********************checking the rows for O*****************************/
    if(arr[0][0]=='O'&&arr[0][1]=='O'&&arr[0][2]=='O' &&IsComputerX==false)
        return 1;               //the computer won;
    if(arr[0][0]=='O'&&arr[0][1]=='O'&&arr[0][2]=='O' &&IsComputerX==true)
        return -1;               //the person won;
    if(arr[1][0]=='O'&&arr[1][1]=='O'&&arr[1][2]=='O' &&IsComputerX==false)
        return 1;               //the computer won;
    if(arr[1][0]=='O'&&arr[1][1]=='O'&&arr[1][2]=='O' &&IsComputerX==true)
        return -1;               //the person won;
    if(arr[2][0]=='O'&&arr[2][1]=='O'&&arr[2][2]=='O' &&IsComputerX==false)
        return 1;               //the computer won;
    if(arr[2][0]=='O'&&arr[2][1]=='O'&&arr[2][2]=='O' &&IsComputerX==true)
        return -1;               //the person won;
    /********************checking the diagonal for O**************************/
    if(arr[0][0]=='O'&&arr[1][1]=='O'&&arr[2][2]=='O' &&IsComputerX==false)
        return 1;               //the computer won;
    if(arr[0][0]=='O'&&arr[1][1]=='O'&&arr[2][2]=='O' &&IsComputerX==true)
        return -1;               //the person won;
    if(arr[0][2]=='O'&&arr[1][1]=='O'&&arr[2][0]=='O' &&IsComputerX==false)
        return 1;               //the computer won;
    if(arr[0][2]=='O'&&arr[1][1]=='O'&&arr[2][0]=='O' &&IsComputerX==true)
        return -1;               //the person won;
    /********************checking the diagonal for X**************************/
    if(arr[0][0]=='X'&&arr[1][1]=='X'&&arr[2][2]=='X' &&IsComputerX==true)
        return 1;               //the computer won;
    if(arr[0][0]=='X'&&arr[1][1]=='X'&&arr[2][2]=='X' &&IsComputerX==false)
        return -1;               //the person won;
    if(arr[0][2]=='X'&&arr[1][1]=='X'&&arr[2][0]=='X' &&IsComputerX==true)
        return 1;               //the computer won;
    if(arr[0][2]=='X'&&arr[1][1]=='X'&&arr[2][0]=='X' &&IsComputerX==false)
        return -1;               //the person won;

    /********************checking the columns for X ****************************/

    if(arr[0][0]=='X'&&arr[1][0]=='X'&&arr[2][0]=='X' &&IsComputerX==true)
        return 1;               //the computer won;
    if(arr[0][0]=='X'&&arr[1][0]=='X'&&arr[2][0]=='X' &&IsComputerX==false)
        return -1;               //the person won;
    if(arr[0][1]=='X'&&arr[1][1]=='X'&&arr[2][1]=='X' &&IsComputerX==true)
        return 1;               //the computer won;
    if(arr[0][1]=='X'&&arr[1][1]=='X'&&arr[2][1]=='X' &&IsComputerX==false)
        return -1;               //the person won;
    if(arr[0][2]=='X'&&arr[1][2]=='X'&&arr[2][2]=='X' &&IsComputerX==true)
        return 1;               //the computer won;
    if(arr[0][2]=='X'&&arr[1][2]=='X'&&arr[2][2]=='X' &&IsComputerX==false)
        return -1;
        
    /********************checking the columns for Y ****************************/

    if(arr[0][0]=='O'&&arr[1][0]=='O'&&arr[2][0]=='O' &&IsComputerX==false)
        return 1;               //the computer won;
    if(arr[0][0]=='O'&&arr[1][0]=='O'&&arr[2][0]=='O' &&IsComputerX==true)
        return -1;               //the person won;
    if(arr[0][1]=='O'&&arr[1][1]=='O'&&arr[2][1]=='O' &&IsComputerX==false)
        return 1;               //the computer won;
    if(arr[0][1]=='O'&&arr[1][1]=='O'&&arr[2][1]=='O' &&IsComputerX==true)
        return -1;               //the person won;
    if(arr[0][2]=='O'&&arr[1][2]=='O'&&arr[2][2]=='O' &&IsComputerX==false)
        return 1;               //the computer won;
    if(arr[0][2]=='O'&&arr[1][2]=='O'&&arr[2][2]=='O' &&IsComputerX==true)
        return -1;               //the person won;
    return 0;
}