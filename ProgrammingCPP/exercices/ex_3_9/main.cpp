#include "../../std_lib_facilities.h"

int main()
{
  string s;
  cout << "Please enter a spelled-out number (e.g. \"one\") :\n";
  cin >> s;
  if (s == "zero")
    cout << 0;
  else if (s == "one")
    cout << 1;
  else if (s == "two")
    cout << 2;
  else if (s == "three")
    cout << 3;
  else if (s == "four")
    cout << 4;
  else
    cout << "not a number I know";
  cout << endl;
}
