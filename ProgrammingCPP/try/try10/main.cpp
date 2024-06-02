#include<iostream>

using namespace std;

int main()
{
  char c = 'a';
  while (c <= 'z')
  {
    cout << c << " " << (int)(c) << endl;
    ++c;
  }
  return 0;
}
