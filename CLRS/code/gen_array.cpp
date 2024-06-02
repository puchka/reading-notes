#include<iostream>
#include<climits>

using namespace std;

int main(int argc, char* argv[])
{
  int n, min = 1, max = 50;
  srand(time(NULL));
  sscanf(argv[1], "%d", &n);
  cout << n << endl;
  while (--n >= 0)
  {
    cout << min + (rand() % static_cast<int>(max - min + 1));
    if (n > 0)
      cout << " ";
  }
  cout << endl;
  return 0;
}
