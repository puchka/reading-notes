#include <iostream>

using namespace std;

// convert from yen, euro, pound to dollar
// a suffix 'y', 'e' or 'p' indicates the unit of the input

int main()
{
  constexpr double dollar_per_yen = 112.612613;
  constexpr double dollar_per_euro = 0.848586679;
  constexpr double dollar_per_pound = 0.747222201;
  double sum = 1;
  char unit = 0;
  cout << "Please enter a sum followed by a unit (y, e or p):\n";
  cin >> sum >> unit;

  if (unit == 'y')
    cout << sum << " y == " << sum / dollar_per_yen << " $\n";
  else if (unit == 'e')
    cout << sum << " e == " << sum / dollar_per_euro << " $\n";
  else if (unit == 'p')
    cout << sum << " p == " << sum / dollar_per_pound << " $\n";
  else
    cout << "Unknown unit " << unit << endl;
}
