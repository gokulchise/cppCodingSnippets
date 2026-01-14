#include <iostream>

using namespace std;

int main()
{
  int x, y = 0;
  int sum = 0;
  
  //Prompt the user to enter two numbers..
  cout << "Enter two numbers: \n";
 
  cin >> x >> y;            //Store the two numbers into x and y
 
  sum = x + y;              //Sum the two entered numbers
  
  // Output the sum value on the console window..
  cout << x << " + " << y << " = " << sum << endl;

  return 0;
}