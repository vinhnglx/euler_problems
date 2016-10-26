// Multiples of 3 and 5
//
// If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these
// multiples is 23.
// Find the sum of all multiples of 3 or 5 below 1000.
//
//
// The Big O notation will be O(n)

#include <iostream>
using namespace std;

int multiplesTest(int actual, int expected);
int sumMultipleNumbers(int n);

int main () {
  multiplesTest(3, sumMultipleNumbers(4));
  multiplesTest(3, sumMultipleNumbers(5));
  multiplesTest(8, sumMultipleNumbers(6));
  multiplesTest(23, sumMultipleNumbers(10));
  multiplesTest(233168, sumMultipleNumbers(1000));
  multiplesTest(0, sumMultipleNumbers(2));
}

int multiplesTest(int actual, int expected) {
  if (actual == expected) {
    cout << "." << endl;
  } else {
    cout << "F" << endl;
  }

  return 0;
}

int sumMultipleNumbers(int n) {
  int a, b, i;
  int sum;

  a = 3;
  b = 5;

  sum = 0;

  i = 0;
  while (i < n) {
    if (i % a == 0 || i % b == 0) {
      sum += i;
    }

    i++;
  }

  return sum;
}


