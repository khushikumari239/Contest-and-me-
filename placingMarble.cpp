// g++ .\placingMarble.cpp

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
// You are given a three-digit number s that contains only 0s and 1s. How many 1s does it contain?
int main() {
string s;
cin>>s;
int count =0;

for(char c :s){
    if(c=='1')
    count++;

}
cout<<count;

return 0;
}