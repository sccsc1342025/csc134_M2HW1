// CSC 134
// M2HW1
// Sebastian Camacho
// 02/22/2025

#include <iostream>

using namespace std;

int main()
{
    string name;
    double startingBalance, depositAmount, withdrawalAmount;

    // user name
    cout << "Enter your name: ";
    cin >> name;

    // starting account balance
    cout << "Enter your starting account balance in dollars: $";
    cin >> startingBalance;

    // amount of deposit
    cout << "Enter the amount you want to deposit in dollars: $";
    cin >> depositAmount;

    // amount of withdrawal
    cout << "Enter the amount you want to withdraw in dollars: $";
    cin >> withdrawalAmount;

    // final account balance
    double finalBalance = startingBalance + depositAmount - withdrawalAmount;

    // account number
    int accountNumber = 012345;

    // Account details
    cout << "Name of the account: " << name << endl;
    cout << "Account number: " << accountNumber << endl;
    cout << "Final aacount balance: $" << finalBalance << endl;

    return 0;
}