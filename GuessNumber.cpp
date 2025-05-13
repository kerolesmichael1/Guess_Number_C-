#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int readNumber()
{
    int number = 0;
    cout << "Enter Your Number : ";
    cin >> number;
    return number;
}

int randomNumber()
{
    return (rand() % 100 + 1);
}
int playAgain()
{
    int choice = 0;
    cout << "\n";
    cout << "Do You Want Play Again : \n";
    cout << "[1] Yes \n";
    cout << "[2] No \n";
    cout << "Enter Your Choice : ";
    cin >> choice;
    while (choice < 1 || choice > 2)
    {
        cout << "Your Choice [" << choice << "] InValid Choice \n";
        cout << "Enter Your Choice : ";
        cin >> choice;
    }
    cout << "\n";
    return choice;
}
void startGame()
{
    cout << "\n\n";
    cout << "________________________________________\n";
    cout << "______ Welcome To Octopus Academy ______\n";
    cout << "_____________ Guess Number _____________\n";
    cout << "________________________________________\n";
    cout << "\n\n";
}
void gameOver()
{
    cout << "\n\n";
    cout << "________________________________________\n";
    cout << "_____________G A M E O V E R____________\n";
    cout << "________________________________________\n";
    cout << "\n\n";
}
void guessNumberGame()
{
    startGame();
    int choice = 0;
    do
    {
        int random = randomNumber();
        int number = readNumber();
        int count = 1;
        while (number != random)
        {
            if (number < random)
            {
                cout << "Your Number [" << number << "] < random Number \n";
                count++;
                number = readNumber();
            }
            else if (number > random)
            {
                cout << "Your Number [" << number << "] > random Number \n";
                count++;
                number = readNumber();
            }
        }

        cout << "You Win :) \n";
        cout << "Your Guess " << count << " Times \n";

    } while (playAgain() == 1);
    gameOver();
}
int main()
{
    srand(time(0));
    guessNumberGame();
    system("pause > 0");
    return 0;
}