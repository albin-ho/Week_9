// Program Purpose:Exercise 4, SportsPerson Class
// Author:
// Last Modified: 13/04/2025
//
//**********************************************************************************
// #include <cmath>
// #include <cstdlib>
#include <iostream>
// #include <memory_resource>
#include <string>
// #include <vector>
// #include <iomanip>
// #include <ctime>
// #include <fstream>
// #include <iostream>
using namespace std;

class SportsPerson {
private:
public:
  string Name;
  int Age;
  int Wins;

  // constructors
  // basic
  SportsPerson() {};
  //
  // Use this one as default
  SportsPerson(string Name, int Age, int Wins) {};

protected:
  // getters are set to Virtual so child classes can use them
  virtual int getAge();
  virtual int getWins();
  virtual string getStatus();
};
//
// Function definitions
//
// Define function to getAge
int SportsPerson::getAge() { return Age; }
//
// Define function for getwins
int SportsPerson::getWins() { return Wins; }
//
// Define Function for get Status (doesnt do anything!)
string SportsPerson::getStatus() {
  cout << "The status of the Sportsperson is: ";
  return 0;
}
//
/////////////////////////////////////////////////////////////////////
//
class TennisPlayer : public SportsPerson {
public:
  // Create unique fields for class
  int Rank;
  // Function Prototypes
  void whoami();
  void getData();
  // Constructor using inherited data from SportsPerson
  TennisPlayer(string name, int age, int wins, int Rank) {

    this->Name = name;
    this->Age = age;
    this->Wins = wins;
    this->Rank = Rank;
  }

  // Redfine getAge from Base class
  int getAge() { return Age - 1; }
  //
  // Redefine getWins from Base Class
  int getWins() { return Wins + 1; }
};
//
//
//
void TennisPlayer::whoami() {
  cout << "I am a Tennis Player called " << Name << endl;
}

void TennisPlayer::getData() {
  cout << "Rank:" << Rank << "\n";
  // cout << "Name:" << Name << "\n";
  cout << "Age: " << Age << "\n";
  cout << "Wins: " << Wins << "\n";
}
//////////////////////////////////////////////////////////////////////
//
class FootBallPlayer : public SportsPerson {
public:
  // Custom variable for Footballers
  int Goals;
  //
  // function prototypes for class
  // function call to base class using virtual
  //
  //
  // constructor
  FootBallPlayer(string name, int age, int wins, int goals) {
    this->Name = name;
    this->Age = age;
    this->Wins = wins;
    this->Goals = goals;
    // this->NumberofGoals = NumberofGoals;
  }
  //
  // Function prototypes
  void getData();
  void whoami();
  // Redfine getAge from Base Class
  int getAge();
  // Redfine getWins from Base Class
  int getWins();
};

//
// Functions for FootballPlayer
// Redfined base functions
int FootBallPlayer::getAge() { return Age - 1; }

// Redfined base functions
int FootBallPlayer::getWins() { return Wins + 1; }

void FootBallPlayer::whoami() {

  cout << "I am a Football Player called " << Name << "\n";
}

void FootBallPlayer::getData() {
  // cout << "Name:" << Name << "\n";
  cout << "Age: " << Age << "\n";
  cout << "Wins: " << Wins << "\n";
  cout << "Goals: " << Goals << "\n";
}
//
//////////////////////////////////////////////////////////////////////////////
//

int main() {
  //
  // Instantiate some objects for derived classes
  FootBallPlayer F_Player0("Vasos Pavlika", 30, 10, 100);
  FootBallPlayer F_Player1("Mohammed Saleh", 35, 20, 200);
  TennisPlayer T_Player0("Serena Williams", 38, 40, 1);
  TennisPlayer T_Player1("Venus Williams", 35, 30, 2);
  //
  //
  cout << "----------------------------------------------------------------"
       << endl;
  F_Player0.whoami();
  F_Player0.getData();
  //
  // cout << "The best Football Player is: " << F_Player0.Name << "\n";
  // using override function from Base class
  // cout << "The age of the best player before override: " << F_Player0.Age
  //     << "\n";
  cout << "The age of the best player using override function is: "
       << F_Player0.getAge() << "\n";
  cout << "The number of wins using override is: " << F_Player0.getWins()
       << "\n";
  cout << "----------------------------------------------------------------"
       << endl;
  F_Player1.whoami();
  F_Player1.getData();
  cout << "The age of the player using override is " << F_Player1.getAge()
       << "\n";
  cout << "The number of wins using override is: " << F_Player0.getWins()
       << "\n";
  // cout << "The number of goals in the last match: " <<
  // F_Player0.NumberofGoals()
  // << "\n";
  // cout << "All data" << F_Player1.getData() << "\n";
  cout << "----------------------------------------------------------------"
       << endl;
  T_Player0.whoami();
  T_Player0.getData();
  cout << "The age of the player using override is " << T_Player0.getAge()
       << "\n";
  cout << "The number of wins using override is: " << T_Player0.getWins()
       << "\n";
  cout << "----------------------------------------------------------------"
       << endl;
  T_Player1.whoami();
  T_Player1.getData();
  cout << "The age of the player using override is " << T_Player1.getAge()
       << "\n";
  cout << "The number of wins using override is: " << T_Player1.getWins()
       << "\n";
  cout << "----------------------------------------------------------------"
       << endl;

  // cout << "The best Tennis Player is: " << T_Player0.Name << "\n";
  // cout << "The age of the best player is: " << T_Player0.Age << "\n";
  // cout << "The number of wins is: " << T_Player0.Wins << "\n";

  return 0;
}
