// Made by Yash Sharma

#include <iostream>
#include <string>

using namespace std;

char btn[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
string player_1, player_2;

void playing_board()
{

    system("clear");
    cout << "\t\t     Tic Tac Toe\n\n";

    cout << " ------------------------------------------------\n";
    cout << "\t     " << player_1 << " (X)   -   " << player_2 << "(O)" << endl
         << endl;
    cout << endl;

    cout << "\t\t     |     |     " << endl;
    cout << "\t\t  " << btn[1] << "  |  " << btn[2] << "  |  " << btn[3] << endl;

    cout << "\t\t_____|_____|_____" << endl;
    cout << "\t\t     |     |     " << endl;

    cout << "\t\t  " << btn[4] << "  |  " << btn[5] << "  |  " << btn[6] << endl;

    cout << "\t\t_____|_____|_____" << endl;
    cout << "\t\t     |     |     " << endl;

    cout << "\t\t  " << btn[7] << "  |  " << btn[8] << "  |  " << btn[9] << endl;

    cout << "\t\t     |     |     " << endl
         << endl;

    cout << "\t     Enter only numeric value !\n\n";
}

int results()
{
    if (btn[1] == btn[4] && btn[4] == btn[7])
    {
        return 1;
    }
    else if (btn[2] == btn[5] && btn[5] == btn[8])
    {
        return 1;
    }
    else if (btn[3] == btn[6] && btn[6] == btn[9])
    {
        return 1;
    }
    else if (btn[1] == btn[2] && btn[2] == btn[3])
    {
        return 1;
    }
    else if (btn[4] == btn[5] && btn[5] == btn[6])
    {
        return 1;
    }
    else if (btn[7] == btn[8] && btn[8] == btn[9])
    {
        return 1;
    }
    else if (btn[1] == btn[5] && btn[5] == btn[9])
    {
        return 1;
    }
    else if (btn[3] == btn[5] && btn[5] == btn[7])
    {
        return 1;
    }
    else if (btn[1] != '1' && btn[2] != '2' && btn[3] != '3' && btn[4] != '4' && btn[5] != '5' && btn[6] != '6' && btn[7] != '7' && btn[8] != '8' && btn[9] != '9')

    {
        return 0;
    }

    else
    {
        return -1;
    }
}

int play()
{
    char mark_it;

    cout << "Enter name of Player 1 -> ";
    getline(cin, player_1);
    cout << "\nEnter name of Player 2 -> ";
    getline(cin, player_2);

    int player_count = 1, i, j, choose;
    do
    {
        playing_board();
        player_count = (player_count % 2) ? 1 : 2;
        j = player_count;
        if (j == 1)
        {
            cout << player_1 << ", choose a box : ";
        }
        else
        {
            cout << player_2 << ", choose a box : ";
        }
        cin >> choose;

        mark_it = (player_count == 1) ? 'X' : 'O';

        if (choose == 1 && btn[1] == '1')
        {
            btn[1] = mark_it;
        }
        else if (choose == 2 && btn[2] == '2')
        {
            btn[2] = mark_it;
        }
        else if (choose == 3 && btn[3] == '3')
        {
            btn[3] = mark_it;
        }
        else if (choose == 4 && btn[4] == '4')
        {
            btn[4] = mark_it;
        }
        else if (choose == 5 && btn[5] == '5')
        {
            btn[5] = mark_it;
        }
        else if (choose == 6 && btn[6] == '6')
        {
            btn[6] = mark_it;
        }
        else if (choose == 7 && btn[7] == '7')
        {
            btn[7] = mark_it;
        }
        else if (choose == 8 && btn[8] == '8')
        {
            btn[8] = mark_it;
        }
        else if (choose == 9 && btn[9] == '9')
        {
            btn[9] = mark_it;
        }
        else
        {
            cout << "Wrong choice ! Press enter & then Re-eneter :/";
            player_count--;
            cin.ignore();
            cin.get();
        }
        i = results();
        player_count++;

    } while (i == -1);

    playing_board();
    if (i == 1)
    {
        j = --player_count;
        if (j == 1)
        {
            cout << player_1 << " won !" << endl;
        }
        else
        {
            cout << player_2 << " won !" << endl;
        }
    }
    else
    {
        cout << "Its a draw !" << endl;
    }

    cin.ignore();
    cin.get();

    return 0;
}

int main()
{
    play();
    return 0;
}