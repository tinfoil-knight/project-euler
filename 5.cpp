/*2520 is the smallest number that can be divided by each of the numbers from 1
 * to 10 without any remainder. What is the smallest positive number that is
 * evenly divisible by all of the numbers from 1 to 20?
 * */
#include <bits/stdc++.h>
#define LOG(x) cout << x << "\n"

using namespace std;

int main() {
  int toCheck[8] = {7, 9, 11, 13, 15, 16, 17, 19};
  int result = 7 * 11 * 13 * 17 * 19 * 3 * 3 * 5 * 16;
  LOG(result);
  return 0;
}