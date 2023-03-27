#include <iostream>
using namespace std;
int main() {
  int a[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

  int maxSum   = 0;
  int leftInd  = 0;
  int rightInd = 0;
  for (int i = 0; (i < 9); ++i) {
    int sum = a[i];
    for (int j = i + 1; j < 9; ++j) {
      sum += a[j];
      if (sum > maxSum) {
        maxSum = sum;
        leftInd = i;
        rightInd = j;
      }
    }
  }
  cout << "maxSum     = " << maxSum << endl
       << "leftIndex  = " << leftInd << endl
       << "rightIndex = " << rightInd << endl;
  return 0;
}
