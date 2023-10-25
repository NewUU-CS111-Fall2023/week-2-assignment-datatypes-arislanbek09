/*
 * Author: Arislanbek Kalbaev
 * Date: Oct 25, 2023
 */


#include <iostream>
#include "task_1.h"
#include <cstdlib>
#include <ctime>
#include <string>
#include <vector>

using namespace std;


int main() {
    std::cout << "Task 1" << std::endl;

    int year;
    cout << "Enter a year: ";
    cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << year << " is a leap year" << endl;
    } else {
        cout << year << " is not a leap year." << endl;
    }



    std::cout << "Task 2" << std::endl;

    srand(static_cast<unsigned int>(time(0)));

    int randomNo = rand() % 100 + 1;
    int guess;
    int attempts = 0;

    cout << "Try to guess the number between 1-100 to enter the game: " << endl;

    do {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess < randomNo) {
            cout << "Too low! Try again" << endl;
        } else if (guess > randomNo) {
            cout << "Too high! Try again" << endl;
        } else {
            cout << "Congratulations! You guessed the correct number in " << attempts + 1 << " attempts" << endl;
        }

        attempts++;

    } while (guess != randomNo);



    std::cout << "Task 3" << std::endl;

    // done in PYTHON

    std::cout << "Task 4" << std::endl;

    std::string sentence, word;

    cout << "Enter a sentence: ";
    std::getline(cin, sentence);

    cout << "Enter a word to match: ";
    cin >> word;

    size_t found = sentence.find(word);
    if (found != std::string::npos) {
        cout << "Match found at index: " << found << endl;
    } else {
        cout << "No match." << endl;
    }




    std::cout << "Task 5" << std::endl;

    // done in PYTHON

        return 0;
}
