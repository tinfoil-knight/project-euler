#include <bits/stdc++.h>
#define LOG(x) cout << x << "\n"

using namespace std;

int main() {
  // Variables for holding last 2 values
  int tmp1 = 0;
  int tmp2 = 1;
  // Count of all even numbers in Fibonacci Series
  int count = 0;

  int i = 0;
  while (i < 4000000) {
    if (i % 2 == 0) {
      count += i;
    }
    // term = last term + second last term
    i = tmp1 + tmp2;
    tmp1 = tmp2;
    tmp2 = i;
  }
  LOG(count);
  return 0;
}