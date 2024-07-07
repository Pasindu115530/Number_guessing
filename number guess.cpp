#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string input;
    int x;
    int count = 5;

    // Seed the random number generator with the current time
    srand(time(0));
    int guess = (rand() % 30) + 1; // Generate a random number between 1 and 30
    cout << "************ Welcome to the Number Guessing Game ************" << '\n';

    do {
        cout << "Can you guess the number between 1 and 30?" << '\n';
        cin >> input;

        // Check if the input is a number
        bool isNumber = true;
        for (char c : input) {
            if (!isdigit(c)) {
                isNumber = false;
                break;
            }
        }

        if (!isNumber) {
            cout << "Invalid input. Please enter a number between 1 and 30." << '\n';
            continue;
        }

        // Convert the input string to an integer
        x = stoi(input);
        count--; // Decrement the count for each attempt

        // Check if the guess is out of the valid range
        if (x < 1 || x > 30) {
            cout << "Please enter a number between 1 and 30." << '\n';
        } else {
            if (x > guess) {
                cout << "Too high!" << '\n';
                cout << "Your remaining chances: " << count << '\n';
            } else if (x < guess) {
                cout << "Too low!" << '\n';
                cout << "Your remaining chances: " << count << '\n';
            } else {
                cout << "Congratulations! You guessed correctly!" << '\n';
                break; // Exit the loop if the guess is correct
            }
        }

        // Check if the user is out of guesses
        if (count == 0) {
            cout << "Sorry, you've used all your chances. The correct number was " << guess << ".\n";
        }
    } while (guess != x && count > 0);

    cout << "******* Thanks for Participating! *******" << '\n';

    return 0;
}
