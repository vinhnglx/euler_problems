// Multiples of 3 and 5
//
// If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these
// multiples is 23.
// Find the sum of all multiples of 3 or 5 below 1000.
//
//
// The Big O notation will be O(n)

#include <iostream>
#include <string>
#include <array>
using namespace std;

int sumMultiples(int n, int a, int b);

int main () {

  int a, b, n, sum;

  cout << "Please enter the first number: " << endl;
  cin >> a;

  cout << "Please enter the last number: " << endl;
  cin >> b;

  cout << "Please enter the range: " << endl;
  cin >> n;

  sum = sumMultiples(n, a, b);

  cout << "The sum of all multiples of " << a << " or " << b << " is " << sum << endl;

  return 0;
}

int sumMultiples(int n, int a, int b) {
  int sum;

  sum = 0;

  for (int i = 0; i < n; i++) {
    if (i % a == 0 || i % b == 0) {
      sum += i;
    }
  }

  // The big O notation is O(n)

  return sum;
}

