/*If we list all the natural numbers below 10 that are multiples of 3 or 5, we
 * get 3, 5, 6 and 9. The sum of these multiples is 23. Find the sum of all the
 * multiples of 3 or 5 below 1000.
 * */
#include <bits/stdc++.h>
#define LOG(x) cout << x << "\n"

using namespace std;
int arithmeticProgression(int, int, int);

int main() {
  // Number of Mutliples below 1000
  int multiplesOf3 = 1000 / 3;
  int multiplesOf5 = 1000 / 5 - 1;
  int multiplesOf15 = 1000 / 15;
  // Sum of Multiples
  int sumOf3x = arithmeticProgression(multiplesOf3, 3, 3);
  int sumOf5x = arithmeticProgression(multiplesOf5, 5, 5);
  int sumOf15x = arithmeticProgression(multiplesOf15, 15, 15);
  // Since multiples of 15 have been counted twice
  LOG(sumOf3x + sumOf5x - sumOf15x);
  return 0;
}

int arithmeticProgression(int n, int a, int d) {
  return ((2 * a + (n - 1) * d) * n) / 2;
}