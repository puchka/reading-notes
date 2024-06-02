#include "../../std_lib_facilities.h"

int main()
{
  string a, b, c;
  cout << "Please inter 3 strings (separated by a 'Space' and followed by 'Enter') :\n";
  cin >> a >> b >> c;
  if (a <= b && b <= c)
    cout << a << " " << b << " " << c << endl;
  else if (a <= c && c <= b)
    cout << a << " " << c << " " << b << endl;
  else if (b <= a && a <= c)
    cout << b << " " << a << " " << c << endl;
  else if (b <= c && c <= a)
    cout << b << " " << c << " " << a << endl;
  else if (c <= a && a <= b)
    cout << c << " " << a << " " << b << endl;
  else
    cout << c << " " << b << " " << a << endl;
}
