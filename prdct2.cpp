
// You are given two positive integers  and Determine whether the product of and is even or odd...

#include <bits/stdc++.h>
using namespace std;

int main() {

    int a,b;
    // int n;
    cin>>a;
    cin>>b;
    int n = a*b;
    cout<<n<<endl;

    if(n%2==0) 
        cout <<"EVEN"<< endl;
        else 
        cout<<"ODD"<< endl;
    


    return 0;
}