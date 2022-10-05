#include <iostream>
#include<cstdlib>
#include <ctime>
using namespace std;

void showInstructions()
{
    cout << "\nWelcome to roulette. You may bet on Even, Odd, or Zero" << endl <<
            "If you bet on Zero and win, you win 35 times the amount you bet."<< endl <<
            "You can choose Q to quit the game." << endl <<
            "The game end automatically if you run out of money.\nYou Have: $100.00" << endl;

}

void getAmount()
{
    int total = 100;
    int win = 0;
    int loose = 0;
    char input;
    srand(time(NULL));
    int bet;
    cout << "Bet on E)ven, O)dd, Z)ero, H)elp, or Q)uit > "; cin >> input;
    while (total != 0)
    {
        int random = rand()%36; //importing random number between 0 - 36
        
        if (input == 'q'|| input == 'Q' || total == 0 )  //break if user wants to quit
        {
            break;
        }
        
        else if (input == 'h' || input =='H')
        {
            // showInstructions();
            cout << "\nHelp Help!!!!!!\nHelp SOS \nHelp SOS.\n911 \n911\n911"<< endl;
        }

       else if (input == 'e' || input =='E')
       {
            cout <<"Enter amount of bet $"; cin >> bet;
            if (bet <= 0 || bet > total)
            {
                cout <<"You cannot bet less than zero and more than your total!" << endl;
            }
            else if (random % 2 == 0)
            {
                total = total + bet;
                win ++;
                cout << "The wheel comes up " << random << endl;
                cout << "You win! You now have $" << total << endl;
                if (total == 0)
                    break;
                else
                    cout << "Bet on E)ven, O)dd, Z)ero, H)elp, or Q)uit > "; cin >> input;
            }
            else
            {
                total = total - bet;
                loose ++;
                cout << "The wheel comes up " << random << endl;
                cout << "Sorry, you lose. You now have $" << total << endl;
                if (total == 0)
                    break;
                else
                    cout << "Bet on E)ven, O)dd, Z)ero, H)elp, or Q)uit > "; cin >> input;
            }
            
       }

       else if (input == 'o' || input =='O')
       {
            cout <<"Enter amount of bet $"; cin >> bet;

            if (bet <= 0 || bet > total)
            {
                cout <<"You cannot bet less than zero and more than your total!" << endl;
            }
            else if (random % 2 != 0)
            {
                total = total + bet;
                win++;
                cout << "The wheel comes up " << random << endl;
                cout << "You win! You now have $" << total << endl;
                if (total == 0)
                    break;
                else
                    cout << "Bet on E)ven, O)dd, Z)ero, H)elp, or Q)uit > "; cin >> input;
            }
            else
            {
                total = total - bet;
                loose ++;
                cout << "The wheel comes up " << random << endl;
                cout << "Sorry, you lose. You now have $" << total << endl;
                if (total == 0)
                cout << "Bet on E)ven, O)dd, Z)ero, H)elp, or Q)uit > "; cin >> input;
            }
        
       }

       else if (input == 'z' || input =='Z')
       {
            cout <<"Enter amount of bet $"; cin >> bet;
            
            if (bet < 0 || bet > total)
            {
                cout <<"You cannot bet less than zero and more than your total!" << endl;
            }

            else if (random == 0)
            {
                total = bet * 35;
                win ++;
                cout << "The wheel comes up " << random << endl;
                cout << "You win! You now have $" << total << endl;
                if (total == 0)
                    break;
                else
                    cout << "Bet on E)ven, O)dd, Z)ero, H)elp, or Q)uit > "; cin >> input;
            }
            else
            {
                total = total - bet;
                loose ++;
                cout << "The wheel comes up " << random << endl;
                cout << "Sorry, you lose. You now have $" << total << endl;
                if (total == 0)
                    break;
                else
                cout << "Bet on E)ven, O)dd, Z)ero, H)elp, or Q)uit > "; cin >> input;
        
            }
       }
       else
       {
        cout << "\n\nInvalid Input !! Read the instructions Carefully!!" <<endl;
        showInstructions();
        cout << "Bet on E)ven, O)dd, Z)ero, H)elp, or Q)uit > "; cin >> input;
       }
    }
    cout << "\nYour remaining money is $" << total << endl;
    cout << "Number of wins: " << win << endl;
    cout << "Number of looses: " << loose << endl;
}
int main()
{
    showInstructions();
    getAmount();
    cout <<"Thanks for playing. Press Enter to quit." << endl;
    return 0;
}