#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class zyp
{
public:
    int a;
    zyp()
    {
        cout << "Please select the difficulty level:" << endl;
        cout << "1. Easy " << endl;
        cout << "2. Medium " << endl;
        cout << "3. Hard " << endl;
        cout << endl;
        cout << "Enter your choice: ";
        cin >> a;
        cout << endl;
    }

    void function()
    {
        if (a == 1)
        {
            cout << "Great! You have selected the Easy difficulty level" << endl;
        }
        else if (a == 2)
        {
            cout << "Great! You have selected the Medium difficulty level" << endl;
        }
        else
        {
            cout << "Great! You have selected the Hard difficulty level" << endl;
        }
        cout << "Let's start the game!" << endl;
        cout << endl;
    }
};

class game_body : public zyp
{
public:
    int n;
    game_body() : n(a) {};

    void body()
    {
        srand(time(0));
        int target = rand() % 100 + 1;
        int max_attempts;
        if (n == 1)
        {
            max_attempts = 10;
        }
        else if (n == 2)
        {
            max_attempts = 7;
        }
        else
        {
            max_attempts = 5;
        }

        int guess, attempts = 0;

        for (int i = 1; i <= max_attempts; i++)
        {
            cout << "Enter your guess: ";
            cin >> guess;
            attempts++;

            if (guess == target)
            {
                cout << "Congratulations! You guessed the correct number in " << attempts << " attempts!" << endl;
                return;
            }

            else
            {

                if (guess < target)
                {
                    cout << "Incorrect! The number is greater than " << guess << "." << endl;
                }
                else
                {
                    cout << "Incorrect! The number is less than " << guess << "." << endl;
                }
            }
        }
    }
};

int main()
{
    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I'm thinking of a number between 1 and 100." << endl;

    game_body z;
    z.function();
    z.body();
    return 0;
}
