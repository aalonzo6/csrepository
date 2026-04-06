#include <iostream>

using namespace std;

int main()
{
  // get user input //
  cout << "enter teaspoons: ";
  int teaspoons;
  cin >> teaspoons;

  // get tablespoons //
  int tablespoons = teaspoons / 3;
  int leftoverTeaspoons = teaspoons % 3;

  // get cups //
  int cups = tablespoons / 16;
  int leftoverTablespoons = tablespoons % 16;

  // get quarts //
  int quarts = cups / 4;
  int leftoverCups = cups % 4;

  // give answer //
  cout << "quarts: " << quarts << endl;

  
  
  return 0;
  
}
