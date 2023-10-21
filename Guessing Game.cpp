#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h> // For Sleep function

using namespace std;

void LoadingScreen() {
    cout << "Loading...";
    for (int i = 0; i < 10; i++) {
        cout << ".";
        Sleep(200);
    }
    cout << endl;
}

int main() {
    cout << "WELCOME TO THE NUMBER GUESSING GAME" << endl;

    system("COLOR E5");
    LoadingScreen();
    system("cls");

    srand(time(0));
    system("COLOR A0");
    int secretNumber = rand() % 100 + 1; // Generate a random number between 1 and 100
    int guess;
    int attempts = 0;

    cout << "I'm thinking of a number between 1 and 100. Can you guess it?" << endl;

    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess == secretNumber) {
            cout << "Congratulations! You guessed the number " << secretNumber << " in " << attempts << " attempts!" << endl;
        } else if (guess > secretNumber) {
            cout << "Too big! Try again." << endl;
        } else {
            cout << "Too small! Try again." << endl;
        }
    } while (guess != secretNumber);

}

