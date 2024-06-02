#include<iostream>
#include<climits>
#include <ctime>

#define MAX_N 1000000

using namespace std;

int main() {
  clock_t begin = clock();
  int n, sum, max_sum = INT_MIN, mi, mj;
  int A[MAX_N];
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> A[i];
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = n - 1; j >= i; j--)
    {
      sum = 0;
      for (int k = i; k <= j; k++)
	sum += A[k];
      if (sum > max_sum)
      {
	max_sum = sum;
	mi = i;
	mj = j;
      }
    }
  }
  cout << "(" << mi << ", " << mj << ") : " << max_sum << endl;
  clock_t end = clock();
  double elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;
  cout << "elapsed_secs : " << elapsed_secs << endl;
  return 0;
}
