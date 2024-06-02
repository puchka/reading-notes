#include "../../std_lib_facilities.h"

int main()
{
  cout << "Enter a distance in miles (followed by 'enter') :\n";
  double d_miles;
  cin >> d_miles;
  cout << d_miles << " miles = " << 1609 * d_miles << " kilometers.\n";
  return 0;
}
