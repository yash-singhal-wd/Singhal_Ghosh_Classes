#include <bits/stdc++.h>

using namespace std;

//use recursion only

void print_stack(stack<int> &st){
    while(!st.empty()){
        auto tos = st.top(); st.pop();
        cout << "| " << tos << " |";
    }
    cout << endl;
}

void sort_stack(stack<int> &st){
    //your code here
}

int main(){
    stack<int> st;
    st.push(1);
    st.push(8);
    st.push(2);
    st.push(4);
    st.push(9);
    st.push(-1);
    sort_stack(st);
    print_stack(st);
    return 1;
}