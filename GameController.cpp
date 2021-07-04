#include <iostream>
#include "GameController.h"
#include "TTT_EasyGame.h"
#include "TTT_MediumGame.h"
using namespace std;
void GameController::play()
{
    int game_number = 0;
    while (game_number < 1 || game_number > 1)      //while the number of the game is not valid ask the right number
    {
        cout << "Hello please choose the number of the game you want to play:" << endl;
        cout << "1. tic tac tou" << endl;
        cin >> game_number;
        if (game_number < 1 || game_number > 1)
            cout << "The game does not exist" << endl;
    }
    if (game_number == 1)
    {
        int game_level_number;
        while (game_level_number < 1 || game_level_number > 2)
        {
            cout << "Choose the level of the game:" << endl;
            cout << "1. Easy" << endl;
            cout << "2. Medium" << endl;
            cin >> game_level_number;
            if (game_level_number < 1 || game_level_number > 2)
                cout << "This kind of level is not exist please choose again" << endl;
        }
        if (game_level_number == 1)     //if the choice is easy game
        {
            char **ary = new char *[3];
            for (int i = 0; i < 3; ++i)
            {
                ary[i] = new char[3];
            }
            _arr = ary;
            TTT_EasyGame easy_TTT;
            board = &easy_TTT;
        }
        if (game_level_number == 2)     //if the choice is medium game
        {
            char **ary = new char *[3];
            for (int i = 0; i < 3; ++i)
            {
                ary[i] = new char[3];
            }
            _arr = ary;
            TTT_MediumGame easy_TTT;
            board = &easy_TTT;
        }
        board->init_board(_arr, 3, 3);      //initializing board
        // board->display_board(_arr, 3, 3);
        int sign_number = 0;
        while (!(sign_number > 0 && sign_number < 3))   //checking if the sign valid
        {
            cout << "Please choose which sign you prefer:" << endl;
            cout << "1. X" << endl;
            cout << "2. O" << endl;
            cin >> sign_number;
            if (sign_number > 2 || sign_number < 1)
            {
                cout << "Invalid sign" << endl;
            }
        }
        if (sign_number == 2)       //if the user chose the sign O 
        {
            IsComputerFirst = true;
            board->add_move(_arr, 3, 3, IsComputerFirst);   //the computer making a move
        }
        else
            IsComputerFirst = false;
        board->display_board(_arr, 3, 3);
        while (!board->is_full(_arr, 3, 3))
        {
            int i, j;
            cout << "Please choose line index->";
            cin >> i;
            cout << "Please choose column index->";
            cin >> j;
            board->update_move(_arr, i, j, 3, 3, !IsComputerFirst);
            //checking who is the winner
            if (board->is_winner(_arr, IsComputerFirst) == 0 && board->is_full(_arr, 3, 3) == true) //if the game finished and there is no a winner
            {
                board->display_board(_arr, 3, 3);
                cout << "Equality. The game over!" << endl;
                break;
            }
            else
            {
                if (board->is_winner(_arr, IsComputerFirst) == -1)  //if the user is the winner
                {
                    board->display_board(_arr, 3, 3);
                    cout << "You won!" << endl;
                    break;
                }
                if (board->is_winner(_arr, IsComputerFirst) == 1)
                {
                    board->display_board(_arr, 3, 3);
                    cout << "You lost!" << endl;
                    break;
                }
            }
            board->display_board(_arr, 3, 3);
            board->add_move(_arr, 3, 3, IsComputerFirst);
            cout << "The computer move" << endl;
            board->display_board(_arr, 3, 3);
            if (board->is_winner(_arr, IsComputerFirst) == 0 && board->is_full(_arr, 3, 3) == true)
            {
                cout << "Equality. The game over!" << endl;
                break;
            }
            else
            {
                if (board->is_winner(_arr, IsComputerFirst) == -1)
                {
                    cout << "You won!" << endl;
                    break;
                }
                if (board->is_winner(_arr, IsComputerFirst) == 1)
                {
                    cout << "You lost!" << endl;
                    break;
                }
            }
        }
    }
}
GameController::~GameController()
{
    for (int i = 0; i < 3; ++i)
    {
        delete[] _arr[i];
    }
    delete[] _arr;
}