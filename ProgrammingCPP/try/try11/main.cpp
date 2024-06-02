#include<iostream>

using namespace std;

int main()
{
  for (char c = 'a'; c <= 'z'; ++c)
  {
    cout << c << " " << (int)(c) << endl;
  }
  for (char c = 'A'; c <= 'Z'; ++c)
  {
    cout << c << " " << (int)(c) << endl;
  }
  for (char c = '0'; c <= '9'; ++c)
  {
    cout << c << " " << (int)(c) << endl;
  }
  return 0;
}
