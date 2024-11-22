#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void rules();
void round1();

int main() {
    rules();
    cout << "\n\n";
    round1();
    return 0;
}

void round1() {
    string name;
    cout << "Enter your name: ";
    cin >> name;
    cout << "\n\n";

    int deposit1;
    cout << "Enter the money to deposit for the game: ";
    cin >> deposit1;
    cout << "\n\n";

    cout << "Your current balance is " << deposit1 << "\n\n";

    while (deposit1 >= 100) {
        int bet1;
        cout << name << ", enter the money to bet (minimum 100): ";
        cin >> bet1;
        cout << "\n\n";

        while (bet1 > deposit1 || bet1 < 100) {
            if (bet1 > deposit1) {
                cout << "Money exceeds your balance.\nEnter again: ";
            } else {
                cout << "Minimum bet is 100.\nEnter again: ";
            }
            cin >> bet1;
        }
        cout << "\n\n";

        srand(time(0)); // Seed for random number generation
        int computer1 = rand() % 10 + 1; // Generate a number between 1 and 10
        int guess1;

        cout << "Guess a number between 1 to 10: ";
        cin >> guess1;
        cout << "\n\n";

        while (guess1 > 10 || guess1 < 1) {
            cout << "Number exceeds the range.\nEnter again: ";
            cin >> guess1;
        }
        cout << "\n\n";

        if (guess1 == computer1) {
            cout << "You have won: " << bet1 << "\n\n";
            int winnings = bet1 * 10;
            deposit1 += winnings;
            cout << "You have won " << winnings << " as total.\n";
            cout << "Your new balance is: " << deposit1 << "\n\n";
        } else {
            cout << "You have lost " << bet1 << "\n\n";
            cout << "The correct number was " << computer1 << "\n\n";
            deposit1 -= bet1;
            cout << "Now you have " << deposit1 << " as balance.\n\n";
        }

        if (deposit1 < 100) {
            cout << "Your balance is less than 100. You can't continue playing. Have a nice day.\n";
            break;
        }

        char decision;
        cout << "Do you want to continue? (y/n): ";
        cin >> decision;
        cout << "\n\n";

        if (decision == 'n' || decision == 'N') {
            cout << "Have a nice day.\n";
            break;
        }
    }
}

void rules() {
    cout << "-------------------------------------------------------\n";
    cout << "Rules\n";
    cout << "1) Enter a number between 1 to 10.\n";
    cout << "2) If you win, you will get 10 times your bet.\n";
    cout << "3) If you lose, you will lose your bet.\n";
    cout << "4) Minimum bet is 100.\n";
    cout << "5) The game continues until your balance drops below 100 or you choose to stop.\n";
    cout << "-------------------------------------------------------\n";
}
