#include<iostream>

using namespace std;

int square(int x)
{
  int s = 0;
  for (int i = 0; i < x; ++i)
  {
    s += x;
  }
  return s;
}

int main()
{
  for (int i = 0; i <= 100; ++i)
  {
    cout << "square(" << i << ") == " << square(i) << endl;
  }
  return 0;
}
