#include<iostream>
#include<unistd.h>
#include<limits>
using namespace std;
int main()
{
    srand(time(0));
    string user_name;
    cout << "Enter your name: ";
    cin >> user_name;
    system("clear");
    cout << "Hello, " << user_name << "! Let's play a game." << endl;
    cout << "loading" << flush;
    for (int j = 0; j < 3; j++)
    {
        cout << "." << flush;
        sleep(1);
    }
    system("clear");
    cout<<"\n\t**Welcome to the No Guess Game!**"<<endl;
    cout<<"\n->In this game, you will be given a number and you have to guess it."<<endl;
    cout<<"\n->You will have 3 attempts to guess the number."<<endl;
    cout<<"\n->If you guess the number correctly, you win!"<<endl;
    cout<<"\n->If you don't guess the number correctly, you lose!"<<endl;
    int no_to_attempt = 3;
    int number;
    int guess_no;
    cout<<"\nGuess the number between 1 and 15: ";
    while(true)
    {
       number = rand() % 15 + 1; // Generate a random number between 1 and 15
       while (no_to_attempt > 0)
        {
            cin>>guess_no;
            if (guess_no == number)
            {
                cout << "Congratulations! You guessed the number correctly!" << endl;
                break;
            }
            else
            {
                no_to_attempt--;
                if (no_to_attempt > 0)
                {
                    cout << "Incorrect guess. You have " << no_to_attempt << " attempts left." << endl;
                }
                else
                {
                    cout << "Sorry, you've used all your attempts. The correct number was " << number << "." << endl;
                    break;
                }
            }
        }
        cout << "Do you want to play again? (y/n): ";
        char play_again;
        cin >> play_again;
        if (play_again == 'y' || play_again == 'Y')
        {
            no_to_attempt = 3; // Reset attempts for the new game
            cout << "Guess the number between 1 and 15: ";
        }
        else
        {
            cout << "Thank you for playing! Goodbye!" << endl;
            break;
        }
    }
        
    return 0;
}    