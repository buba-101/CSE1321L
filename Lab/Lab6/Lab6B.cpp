#include <iostream>
#include <cstdlib> 
#include <ctime>   

using namespace std;

int main() {
    
    srand((unsigned)time(0));

    int num;
    int ran_num;
    int count = 0;

    // user input
    cout << "Enter a number between 1 and 1000: ";
    cin >> num;

    // check user input
    while (num < 1 || num > 1000) {
        cout << "Invalid input. Please enter an integer between 1 and 1000: ";
        cin >> num;
    }

    // Generate random numbers until it matches user's input
    while (true) 
    {
        // Generate a random number between 1 and 1000
        ran_num = rand() % 1000 + 1; 

        count++;
        cout << "My guess was " <<  ran_num << endl;

        // Exit the loop if the random number == user
        if (ran_num == num) {
            break;
        }
    }

    // Display the total number of guesses

    cout << "I guessed the number was " << num << " and it only took me " << count << " guesses\n";
}
