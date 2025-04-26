// AtCoDeer has three cards, one red, one green and one blue.

// An integer between 1 and 9 (inclusive) is written on each card: r on the red card, g on the green card and b on the blue card.

// We will arrange the cards in the order red, green and blue from left to right, and read them as a three-digit integer.

// Is this integer a multiple of 4?
// Constraints
// 1≤r,g,b≤9

#include <bits/stdc++.h>
using namespace std;

int main () {
  int r;
  cin >> r;  // uncommented to read input
  
  int g;
  cin >> g;  // uncommented to read input
  
  int b;
  cin >> b;  // uncommented to read input
  
  int n = 100*r + 10*g + b;
  
  if (n % 4 == 0) {
    cout << "YES";
  } else {
    cout << "NO";
  }
  
  return 0;
}
