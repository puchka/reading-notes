#include "../../std_lib_facilities.h"

int main()
{
  int pennies, nickels, dimes, quarters, half, one;
  double values;
  cout << "How many pennies do you have?\n";
  cin >> pennies;
  cout << "How many nickels do you have?\n";
  cin >> nickels;
  cout << "How many dimes do you have?\n";
  cin >> dimes;
  cout << "How many quarters do you have?\n";
  cin >> quarters;
  cout << "How many half dollars do you have?\n";
  cin >> half;
  cout << "How many one-dollar coins do you have?\n";
  cin >> one;
  cout << "You have " << pennies;
  if (pennies == 1)
    cout << " penny.\n";
  else
    cout << " pennies.\n";
  cout << "You have " << nickels;
  if (nickels == 1)
    cout << " nickel.\n";
  else
    cout << " nickels.\n";
  cout << "You have " << dimes;
  if (dimes == 1)
    cout << " dime.\n";
  else
    cout << " dimes.\n";
  cout << "You have " << quarters;
  if (quarters == 1)
    cout << " quarter.\n";
  else
    cout << " quarters.\n";
  cout << "You have " << half;
  if (half == 1)
    cout << " half dollar.\n";
  else
    cout << " half dollars.\n";
  values = half * 50 + quarters * 25 + dimes * 10 + nickels * 5 + pennies;
  cout << "The value of all of your coins is " << values / 100 << " dollars.\n";
}
