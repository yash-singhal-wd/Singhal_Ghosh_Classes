#include <bits/stdc++.h>

using namespace std;

//use recursion

void print_1_to_n(int n){
    // add your code here
    if(n==0) return;
    print_1_to_n(n-1);
    cout << n << " ";
}

void print_n_to_1(int n){
    // add your code here
    if(n==0) return;
    cout << n << " ";
    print_n_to_1(n-1);
}

int main(){
    int n;
    cin >> n;
    print_1_to_n(n);
    cout << endl;
    print_n_to_1(n);
    cout << endl;
    return 1;
}