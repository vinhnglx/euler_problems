// Multiples of 3 and 5
//
// If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these
// multiples is 23.
// Find the sum of all multiples of 3 or 5 below 1000.
//
//
// The Big O notation will be O(1)

#include <iostream>
using namespace std;

int lowestCommonMultiples(int a, int b, int gcd);

int greatestCommonDivisor(int a, int b);

int sumMultiples(int a, int b, int lcm, int n);

int sum(int c, int n);

int main () {

  int a, b, n, lcm, gcd;

  cout << "Enter the first number: " << endl;
  cin >> a;

  cout << "Enter the last number: " << endl;
  cin >> b;

  cout << "Enter the range: " << endl;
  cin >> n;

  gcd = greatestCommonDivisor(a, b);

  lcm = lowestCommonMultiples(a, b, gcd);

  cout << "lcm is " << lcm << endl;

  // n - 1 because sum of multiples below n
  cout << "sum is " << sumMultiples(a, b, lcm, n-1) << endl;

  return 0;
};

int greatestCommonDivisor(int a, int b) {
  int limit = a > b ? a : b;
  int gcd;

  for (int i = 1; i <= limit; i++) {
    if (a % i == 0 && b % i == 0) {
      gcd = i;
    }
  }

  return gcd;
}

int lowestCommonMultiples(int a, int b, int gcd) {
  int lcm;

  return lcm = (a * b) / gcd;
}

int sumMultiples(int a, int b, int lcm, int n) {
  return sum(a, n) + sum(b, n) - sum(lcm, n);
}

int sum(int c, int n) {
  return c * (n/c * (n/c + 1)/2);
}

