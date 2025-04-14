// Program Purpose:Ex2, Bank Account class, yes yes i got carried away its a
// fully functional menu system bank account! Author: Last Modified:13/04/2025
//
//**********************************************************************************
// #include <cmath>
// #include <cstdlib>
#include <iostream>
#include <string>
// #include <vector>
// #include <iomanip>
// #include <ctime>
// #include <fstream>
// #include <iostream>
using namespace std;

class Bank_Account {
public:
  // make name and account number public as they will be entered manually
  string Name;
  string ID_Number;
  double balance;
  // constructors
  // default constructor (don't use)
  Bank_Account() {};
  // Use constructor to create account
  Bank_Account(string name, string accNum, double initial_amount) {
    this->Name = name;
    this->ID_Number = accNum;
    this->balance = initial_amount;
  }
  void set_balance(double initial_amount);

  void print_balance();
  // setters
  void deposit(double amount);
  void withdraw(double amount);
  void transfer(double amount, string accNum);
  void calc_interest(double interest_rate, int days);

private:
  // account amount is private as it will be maniplulated using class functions
  // getters
};
//
// define functions from class Bank Account
//
//
// void Bank_Account::set_balance(double initial_amount) {
//  this->amount = initial_amount;
//}
void Bank_Account::print_balance() {
  cout << "##############################################" << "\n";
  cout << "Current Balance of account is: " << balance << endl;
  cout << "##############################################" << "\n";
}

void Bank_Account::deposit(double amount) {
  // double deposit_amount;
  if (amount > 0) {
    balance += amount;
    cout << "##############################################" << "\n";
    cout << "Deposit updated: " << balance << endl;
    cout << "##############################################" << "\n";
  } else {
    cout << "Enter a positive amount to deposit" << "\n";
  }
}

void Bank_Account::withdraw(double amount) {
  if (amount > 0 && amount <= balance) {
    balance -= amount;
    cout << "##############################################" << "\n";
    cout << "Withdrawal: " << amount << "\n";
    cout << "Your remaining balance is: " << balance << endl;
    cout << "##############################################" << "\n";
  } else if (amount >= balance) {
    cout << "##############################################" << "\n";
    cout << "Account has insufficient funds for withdrawal" << "\n";
    cout << "##############################################" << "\n";
  } else {
    cout << "##############################################" << "\n";
    cout << "Please enter a valid withdrawal amount: "
            "\n";
    cout << "##############################################" << "\n";
  }
}

void Bank_Account::transfer(double amount, string accNum) {
  if (amount > 0 && amount <= balance) {
    balance -= amount;
    cout << "##############################################" << "\n";
    cout << "Transferring: " << amount << "to account " << accNum << "\n";
    cout << "Your remaining balance is: " << balance << endl;
    cout << "##############################################" << "\n";
  } else if (amount >= balance) {
    cout << "##############################################" << "\n";
    cout << "Account has insufficient funds for Transfer" << "\n";
    cout << "##############################################" << "\n";
  } else {
    cout << "##############################################" << "\n";
    cout << "Please enter a valid transfer amount: "
            "\n";
    cout << "##############################################" << "\n";
  }
}

void Bank_Account::calc_interest(double interest_rate, int days) {
  // uses simple interest formula si = (P * R * T)/100
  double rate;
  int Number_of_days;
  rate = interest_rate;
  Number_of_days = days;
  cout << "Calculating Interest" << "\n";
  balance += (balance * rate * Number_of_days) / 100;
  cout << "##############################################" << "\n";
  cout << "The balance after interest is added is: " << balance << "\n";
  cout << "##############################################" << "\n";
  // return amount += amount_interest;
}

int main() {
  cout << "This program demonstrates a bank account class" << "\n";
  //
  // Create a basic account to test the transfer function
  Bank_Account acc1("Vasos Pavlika", "123", 1000000);
  //
  // Variables used to create account object
  string fullname;
  string ID_Number;
  double init_amount;
  //
  cout << "Type Name of account holder: ";
  getline(cin, fullname);
  cout << "Type account Number: ";
  cin >> ID_Number;
  cin.ignore(); // ignore blank space
  cout << "Type Initial Balance: ";
  cin >> init_amount;
  cout << "\n"; //
  //
  // Create bank account object with constructor
  Bank_Account firstaccount(fullname, ID_Number, init_amount);
  // firstaccount.set_balance(init_amount);

  int menu_option;
  do {
    cout << "Menu options for Bank Account" << "\n";
    cout << "1.Make a Deposit" << "\n";
    cout << "2.Make a Withdrawal" << "\n";
    cout << "3.Make a Transfer" << "\n";
    cout << "4.Check Balance" << "\n";
    cout << "5.Calculate Interest" << "\n";
    cout << "0.Exit" << "\n";
    cout << "-------------------------------" << "\n";
    cout << "Type a number: ";
    // cout << "-------------------------------" << "\n";
    cin >> menu_option;

    switch (menu_option) {
    case 1: {
      double deposit_amount;
      cout << "Type amount to deposit: ";
      cin >> deposit_amount;
      firstaccount.deposit(deposit_amount);
      break;
    }
    case 2: {
      double withdraw_amount;
      cout << "Type amount to withdrawal: ";
      cin >> withdraw_amount;
      firstaccount.withdraw(withdraw_amount);
      break;
    }
    case 3: {
      double transfer_amount;
      string transfer_acc_num;
      cout << "Type account number to transfer to: ";
      cin >> transfer_acc_num;
      cout << "Type amount to transder: ";
      cin >> transfer_amount;
      firstaccount.transfer(transfer_amount, transfer_acc_num);
    }
    case 4:
      firstaccount.print_balance();
      break;

    case 5: {
      double interest_rate;
      int timeperiod;
      cout << "Type the interest rate:";
      cin >> interest_rate;
      cout << "Type the number of days to calculate interest for: ";
      cin >> timeperiod;
      firstaccount.calc_interest(interest_rate, timeperiod);
    }
    case 0:
      cout << "Exiting the program" << "\n";
      break;
    default:
      cout << "Please enter a valid option" << "\n";
    }
  } while (menu_option != 0);

  return 0;
}
