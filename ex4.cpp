// Program Purpose:Exercise 4, SportsPerson Class
// Author:
// Last Modified: 13/04/2025
//
//**********************************************************************************
// #include <cmath>
// #include <cstdlib>
#include <iostream>
#include <memory_resource>
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
  int getAge();
  int getWins();
  string getStatus();
};
//
//
// Define functions for Sport
string SportsPerson::getStatus() {
  cout << "The status of the Sportsperson is: ";
  return 0;
}
// Define function to return age
int SportsPerson::getAge() { return Age; }
//
// Define function for return wins
int SportsPerson::getWins() { return Wins; }
//
//
//
//
//
class TennisPlayer : public SportsPerson {
public:
  string data;
  // string getData;
  void whoami();

  // Constructor using inherited data from SportsPerson
  TennisPlayer(string name, int age, int wins) {

    this->Name = name;
    this->Age = age;
    this->Wins = wins;
  }
};
//
//
//
void TennisPlayer::whoami() {
  cout << "I am a Tennis Player called " << Name << endl;
}
//
//
//
class FootBallPlayer : public SportsPerson {
public:
  // int NumberofGoals();
  string getData();
  void whoami();
  //
  // constructor
  FootBallPlayer(string name, int age, int wins) {
    this->Name = name;
    this->Age = age;
    this->Wins = wins;
    // this->NumberofGoals = NumberofGoals;
  }
};
//
//
// Functions for FootballPlayer
void FootBallPlayer::whoami() {

  cout << "I am a Football Player called " << Name << "\n";
}

string FootBallPlayer::getData() {
  cout << "Name:" << Name << "\n";
  cout << "Age: " << Age << "\n";
  cout << "Wins: " << Wins << "\n";
  return Name;
}
//
//
//

int main() {
  FootBallPlayer F_Player0("Vasos Pavlika", 30, 10);
  FootBallPlayer F_Player1("Mohammed Saleh", 35, 20);
  TennisPlayer T_Player0("Serena Williams", 38, 40);
  TennisPlayer T_Player1("Venus Williams", 35, 30);

  cout << "The best Football Player is: " << F_Player0.Name << "\n";
  cout << "The age of the best player is: " << F_Player0.Age << "\n";
  cout << "The number of wins is: " << F_Player0.Wins << "\n";
  cout << "-----------------------------------------------------" << endl;
  F_Player0.whoami();
  cout << "The second best Football Player is: " << F_Player1.Name << "\n";
  cout << "The age of the second best player is: " << F_Player1.Age << "\n";
  cout << "The second best player has won: " << F_Player1.Wins << " games"
       << "\n";
  // cout << "The number of goals in the last match: " <<
  // F_Player0.NumberofGoals()
  // << "\n";
  // cout << "All data" << F_Player1.getData() << "\n";
  cout << "-----------------------------------------------------" << endl;

  cout << "The best Tennis Player is: " << T_Player0.Name << "\n";
  cout << "The age of the best player is: " << T_Player0.Age << "\n";
  cout << "The number of wins is: " << T_Player0.Wins << "\n";

  return 0;
}
