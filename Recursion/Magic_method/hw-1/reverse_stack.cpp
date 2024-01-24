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

void reverse_stack(stack<int> &st){
    //your code here
}

int main(){
    stack<int> st;
    st.push(1);
    st.push(3);
    st.push(4);
    st.push(5);
    reverse_stack(st);
    print_stack(st);
    return 1;
}