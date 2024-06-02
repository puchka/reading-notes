#include "../../std_lib_facilities.h"

int main()
{
  int val1, val2;
  double ratio, d_val1, d_val2;
  cout << "Please enter 2 integers (searated by a space and followed by 'enter'):\n";
  cin >> val1 >> val2;
  d_val1 = val1;
  d_val2 = val2;
  ratio = d_val1 / d_val2;
  if (val1 < val2)
  {
    cout << "The smaller is " << val1 << "\n";
    cout << "The greater is " << val2 << "\n";
  } else {
    cout << "The smaller is " << val1 << "\n";
    cout << "The greater is " << val2 << "\n";
  }
  cout << val1 << " + " << val2 << " = " << val1 + val2 << "\n";
  cout << val1 << " - " << val2 << " = " << val1 - val2 << "\n";
  cout << val1 << " * " << val2 << " = " << val1 * val2 << "\n";
  cout << val1 << " / " << val2 << " = " << ratio << "\n";
}
