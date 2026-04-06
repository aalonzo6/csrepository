#include <iostream>

using namespace std;

int main()
{
  //get user input
  cout << "enter teaspoons: ";
  int teaspoons;
  cin >> teaspoons;

  //turn into tablespoons
  int tablespoons = teaspoons / 3;
  cout << tablespoons << endl;
  int leftoverTablespoons = teaspoons % 3;
  cout << leftoverTablespoons << endl;
  
  return 0;
  
}
