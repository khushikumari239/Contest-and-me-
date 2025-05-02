// Problem Statement
// The word internationalization is sometimes abbreviated to i18n. This comes from the fact that there are 
// 18 letters between the first i and the last n.

// You are given a string 
// s of length at least 
// 3 consisting of lowercase English letters. Abbreviate 
// s in the same way.

// Constraints
// 3≤∣s∣≤100 (
// ∣s∣ denotes the length of 
// s.)
// s consists of lowercase English letters.

#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.length();
    cout << s[0] << (n - 2) << s[n - 1] << endl;
    return 0;
}
