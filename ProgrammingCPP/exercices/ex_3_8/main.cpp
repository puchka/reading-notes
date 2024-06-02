#include "../../std_lib_facilities.h"

int main()
{
  int n;
  cout << "Please enter an integer value (followed by 'Enter') :\n";
  cin >> n;
  cout << "The value " << n << " is an ";
  if (n % 2 == 0)
    cout << "even";
  else
    cout << "odd";
  cout << " number.\n";
}
