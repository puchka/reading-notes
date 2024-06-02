#include<iostream>
#include<climits>

#define MAX_N 1000000

using namespace std;

struct max_res {
  int low;
  int high;
  int sum;
};

typedef struct max_res max_res;

max_res max_cross_subarray(int A[], int low, int mid, int high) {

  int left, right, sum_left = INT_MIN, sum_right = INT_MIN, sum = 0;
  
  for (int i = mid; i >= low; i--) {
    sum += A[i];
    if (sum > sum_left) {
      sum_left = sum;
      left = i;
    }
  }

  sum = 0;
  for (int i = mid + 1; i <= high; i++) {
    sum += A[i];
    if (sum > sum_right) {
      sum_right = sum;
      right = i;
    }
  }

  max_res res;
  res.low = left;
  res.high = right;
  res.sum = sum_left + sum_right;
  return res;
}

max_res max_subarray(int A[], int low, int high) {
  if (low == high) {
    max_res res;
    res.low = low;
    res.high = high;
    res.sum = A[low];
    return res;
  } else {
    max_res left_res = max_subarray(A, low, (low + high) / 2);
    max_res cross_res = max_cross_subarray(A, low, (low + high) / 2, high);
    max_res right_res = max_subarray(A, (low + high) / 2 + 1, high);
    if (left_res.sum > cross_res.sum && left_res.sum > right_res.sum)
      return left_res;
    else if (cross_res.sum > left_res.sum && cross_res.sum > right_res.sum)
      return cross_res;
    else
      return right_res;
  }
}

int main() {
  clock_t begin = clock();
  int n;
  int A[MAX_N];
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> A[i];
  }
  max_res res =  max_subarray(A, 0, n - 1);
  cout << "(" << res.low << ", " << res.high << ") : " << res.sum << endl;
  clock_t end = clock();
  double elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;
  cout << "elapsed_secs : " << elapsed_secs << endl;
  return 0;
}
