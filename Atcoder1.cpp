// Your task is to process some data.
// You are given
// 3 integers
// a ,
// b ,
// c and a string
// s. Output result of
// a+b+c and string
// s with a half-width break.
#include <iostream>
#include <string>
using namespace std;

int main() {
    int a, b, c;
    string s;

    // Read three integers
    cin >> a >> b >> c;
    // Read the string (assuming the string is a single word)
    cin >> s;

    // Calculate the sum
    int sum = a + b + c;

    // Output the sum and the string separated by a space (half-width break)
    cout << sum << " " << s << endl;

    return 0;
}
