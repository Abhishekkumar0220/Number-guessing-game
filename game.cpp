#include <iostream>
#include <cstdlib>
#include <ctime> 
#include <climits>
using namespace std;

int main() {
   
    srand(time(0));

    
    int secretNumber = rand() % 100 + 1;
    int guess = 0;
    int attempts = 0;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I'm thinking of a number between 1 and 100." << endl;

    
    while (guess != secretNumber) {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        
        if (cin.fail()) {
            cin.clear();
            cin.ignore(INT_MAX, '\n');
            cout << "Please enter a valid number." << endl;
        } else if (guess < secretNumber) {
            cout << "Too low! Try again." << endl;
        } else if (guess > secretNumber) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the number " << secretNumber << " in " << attempts << " attempts." << endl;
        }
    }

    return 0;
}
