#include <bits/stdc++.h>
#include <iostream>
using namespace std;


int main() {
    string memo ;
    cin>>memo;
    int count = 700;
    int o = 100;
    int x =0;

    

    for(char toppings : memo) {
        if (toppings=='o'){
        count+= 100;
    }
}

    cout<<count;

    return 0;
}