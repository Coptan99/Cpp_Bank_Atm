#include <iostream>
using namespace std;
//******** Variables ********//
double balance = 1000;
int password = 1234, choice = 0, withdraw = 0, deposit = 0;
//******** End of Variables ********//

// Function to display menu of ATM
void display() {
  cout << "***** Menu *****" << endl;
  cout << "1:Balance" << endl;
  cout << "2:Withdraw" << endl;
  cout << "3:Deposit" << endl;
  cout << "4:Exit" << endl;
  cout << "****************" << endl;
}

void process() {
    cout << "Enter your password: "; 
    cin >> password;
    do {
        if(password == 0000) {
            cout << "Enter your choice: ";
            cin >> choice;
                switch(choice) {
                    case 1:
                        cout << "Your balance is: " << balance << endl;
                        break;
                    case 2:
                        cout << "NOTE: your balance is: " << balance << endl;
                        cout << "Enter your withdraw amount: ";
                        cin >> withdraw;
                        if (withdraw > balance) {
                            cout << "Sorry you cannot withdraw this amount" << endl; 
                        } 
                        else {
                            balance -= withdraw;
                            cout << "Your balance now is: " << balance << endl;
                        }
                        break;
                    case 3:
                        cout << "Your current balance is: " << balance << endl;
                        cout << "Enter your deposit money: ";
                        cin >> deposit;
                        balance += deposit;
                        cout << "Your current new balance is: " << balance << endl;
                        break;
                    case 4:
                        cout << "Thank you" << endl;
                        break;
                }
        } // End of if condition
        else {
            char option = 'o';
            cout << "Password is incorrect, do you want to try again? Enter [Y] for yes or [N] for no: ";
            cin >> option;
            if(option == 'Y' || option == 'y') {
                cout << "Enter your password: ";
                cin >> password;
            }
            else {
                choice = 4;
            }
        }
    }while(choice < 4);

} // End of process function

int main() {
    display();
    process();
}
