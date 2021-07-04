#include <iostream>
#include "TTT_MediumGame.h"
#include "TTT_EasyGame.h"
using namespace std;
void TTT_MediumGame::add_move(char **arr, int width, int height, bool IsX)
{
    //the algorithm checking where he should to put the sign
    for (int i = 0; i < width; i++)
    {
        if (IsX == true)
        {
            if ((arr[i][0] == arr[i][1] || arr[i][0] == arr[i][2] || arr[i][1] == arr[i][2]) && ((arr[i][0] != '-' && arr[i][1]!='-') || (arr[i][1] != '-' && arr[i][2]!='-') || (arr[i][2] != '-' && arr[i][0]!='-'))&&(arr[i][0]=='-'||arr[i][1]=='-'||arr[i][2]=='-'))
            { 
                if (arr[i][0] == '-')
                    arr[i][0] = 'X';
                else if (arr[i][1] == '-')
                    arr[i][1] = 'X';
                else if (arr[i][2] == '-')
                    arr[i][2] = 'X';
                return;
            }
        }
        if (IsX == false)
        {
            if ((arr[i][0] == arr[i][1] || arr[i][0] == arr[i][2] || arr[i][1] == arr[i][2]) && ((arr[i][0] != '-' && arr[i][1]!='-') || (arr[i][1] != '-' && arr[i][2]!='-') || (arr[i][2] != '-' && arr[i][0]!='-'))&&(arr[i][0]=='-'||arr[i][1]=='-'||arr[i][2]=='-'))
            {
                cout<<arr[i][0]<<" "<<arr[i][1]<<" "<<arr[i][2]<<i<<endl;
                if (arr[i][0] == '-')
                    arr[i][0] = 'O';
                else if (arr[i][1] == '-')
                    arr[i][1] = 'O';
                else if (arr[i][2] == '-')
                    arr[i][2] = 'O';
                cout<<arr[i][0]<<" "<<arr[i][1]<<" "<<arr[i][2]<<i<<endl;
                return;
            }
        }
        if ((arr[0][0] == arr[1][1] || arr[0][0] == arr[2][2] || arr[1][1] == arr[2][2]) && ((arr[0][0] != '-' && arr[1][1] != '-') || (arr[2][2] != '-' && arr[1][1]) || (arr[0][0] != '-' && arr[2][2]))&&(arr[0][0]=='-'||arr[2][2]=='-'||arr[1][1]=='-'))
        {
            if (arr[0][0] == '-')
            {
                arr[0][0] = 'O';
                return;
            }
            if (arr[1][1] == '-')
            {
                arr[1][1] = 'O';
                return;
            }
            if (arr[2][2] == '-')
            {
                arr[2][2] = 'O';
                return;
            }
        }
    }
    for (int i = 0; i < height; i++)
    {
        if (IsX == true)
        {
            if ((arr[0][i] == arr[1][i] || arr[1][i] == arr[2][i] || arr[0][i] == arr[2][i]) && ((arr[0][i] != '-' && arr[1][i]!='-') || (arr[1][i] != '-' && arr[2][i]!='-') || (arr[2][i] != '-' && arr[0][i]!='-'))&&(arr[0][i]=='-'||arr[1][i]=='-'||arr[2][i]=='-'))
            {
                if (arr[0][i] == '-')
                    arr[0][i] = 'X';
                else if (arr[1][i] == '-')
                    arr[1][i] = 'X';
                else if (arr[2][i] == '-')
                    arr[2][i] = 'X';
                return;
            }
        }
        if (IsX == false)
        {
            if ((arr[0][i] == arr[1][i] || arr[1][i] == arr[2][i] || arr[0][i] == arr[2][i]) && ((arr[0][i] != '-' && arr[1][i]!='-') || (arr[1][i] != '-' && arr[2][i]!='-') || (arr[2][i] != '-' && arr[0][i]!='-'))&&(arr[0][i]=='-'||arr[1][i]=='-'||arr[2][i]=='-'))
            {
                if (arr[0][i] == '-')
                    arr[0][i] = 'O';
                else if (arr[1][i] == '-')
                    arr[1][i] = 'O';
                else if (arr[2][i] == '-')
                    arr[2][i] = 'O';
                return;
            }
        }
        if ((arr[0][0] == arr[1][1] || arr[0][0] == arr[2][2] || arr[1][1] == arr[2][2]) && ((arr[0][0] != '-' && arr[1][1] != '-') || (arr[2][2] != '-' && arr[1][1]) || (arr[0][0] != '-' && arr[2][2]))&&(arr[1][1]=='-'||arr[0][0]=='-'||arr[2][2]=='-'))
        {
            if (arr[0][0] == '-')
            {
                arr[0][0] = 'O';
                return;
            }
            if (arr[1][1] == '-')
            {
                arr[1][1] = 'O';
                return;
            }
            if (arr[2][2] == '-')
            {
                arr[2][2] = 'O';
                return;
            }
        }
    }
    for (int i = 0; i < width; i++)
    { 
        for (int j = 0; j < height; j++)
        {
            if (arr[i][j] == '-')
            {
                if (IsX == true)
                    arr[i][j] = 'X';
                else
                    arr[i][j] = 'O';
                return;
            }
        }
    }
}
int TTT_MediumGame::is_winner(char **arr, bool IsComputerX)
{
    TTT_EasyGame g;
    return g.is_winner(arr,IsComputerX);
}