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

    int bet1;
    cout << name << ", enter the money to bet: ";
    cin >> bet1;
    cout << "\n\n";

    while (bet1 > deposit1) {
        cout << "Money exceeds your balance.\nEnter again: ";
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
        int bet2 = bet1 * 10;
        int new_won = (bet1 == deposit1) ? bet2 : bet2 + deposit1;
        cout << "You have won " << new_won << " as total.\n";
    } else {
        cout << "You have lost " << bet1 << "\n\n";
        cout << "The correct number was " << computer1 << "\n\n";
        int new_loss = deposit1 - bet1;
        cout << "Now you have " << new_loss << " as balance.\n\n";

        if (new_loss == 0) {
            cout << "You don't have enough balance to play. Have a nice day.\n";
        } else {
            int decision;
            cout << "Do you want to continue?\nPress 1 for Yes\nPress 2 for No\n";
            cin >> decision;
            cout << "\n\n";

            if (decision == 1) {
                rules();
                cout << "\n\n";
                cout << "Now you have " << new_loss << " as balance.\n\n";

                int bet3;
                cout << name << ", enter the money to bet: ";
                cin >> bet3;
                cout << "\n\n";

                while (bet3 > new_loss) {
                    cout << "Money exceeds your balance.\nEnter again: ";
                    cin >> bet3;
                }

                int computer2 = rand() % 10 + 1; // New random number for second round
                int guess2;

                cout << "Guess a number between 1 to 10: ";
                cin >> guess2;
                cout << "\n\n";

                while (guess2 > 10 || guess2 < 1) {
                    cout << "Number exceeds the range.\nEnter again: ";
                    cin >> guess2;
                }

                if (guess2 == computer2) {
                    cout << "You have won: " << bet3 << "\n\n";
                    int b = bet3 * 10;
                    int b1 = (bet3 == new_loss) ? b : b + new_loss;
                    cout << "You have won " << b1 << " as total.\n";
                } else {
                    cout << "You have lost " << bet3 << "\n\n";
                    cout << "The correct number was " << computer2 << "\n\n";
                    int b2 = new_loss - bet3;
                    cout << "You now have " << b2 << " as total.\n\n";

                    if (b2 == 0) {
                        cout << "You don't have enough balance to play. Have a nice day.\n";
                    }
                }
            } else if (decision == 2) {
                cout << "Have a nice day.\n";
            }
        }
    }
}

void rules() {
    cout << "-------------------------------------------------------\n";
    cout << "Rules\n";
    cout << "1) Enter a number between 1 to 10.\n";
    cout << "2) If you win, you will get 10 times your bet.\n";
    cout << "3) If you lose, you will lose your bet.\n";
    cout << "4) If you win once, you can't continue.\n";
    cout << "5) For every 2 games, you can't continue.\n";
    cout << "-------------------------------------------------------\n";
}
