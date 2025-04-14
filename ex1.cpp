// Program Purpose:Ex1, Inheritance with Employees
// Author:
// Last Modified:31/03/2-25
//
//**********************************************************************************
// #include <cmath>
// #include <cstdlib>
#include <iostream>
// #include <string>
// #include <vector>
// #include <iomanip>
// #include <ctime>
// #include <fstream>
// #include <iostream>
using namespace std;

class Employee {
protected:
  Employee() {};

public:
  string number;
  string name;
  string status;

  // getters
  string getNumber(string num) { return number; }

  string getName() { return name; }
  string getStatus() { return status; }
};

class FullTimeEmployee : public Employee {
public:
  double annualSalary;
  // constructor
  FullTimeEmployee() {};
  // setter
  double setAnnualSalary() { double annualSalary; }
  double calculateMonthlyPay() { double MonthlyPay; }
  // getters
  string getStatus() { return status; }
};
class PartTimeEmployee : public Employee {

public:
  double HourlyPay;
  // constructor
  PartTimeEmployee() {};

  // getters
  double setHourlyPay() { return HourlyPay; }
  // setters
  double setHourlyPay(double hourly) { this->HourlyPay = hourly; }
  double calculateHourlyPay(double hourly) { return hourly; }

  string getStatus() { return status; }
};

int main() { return 0; }
