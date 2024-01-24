#include <bits/stdc++.h>

using namespace std;

//use recursion only

void insert_into_sorted_stack(stack<int> &st, int x){
    //enter your code here
    
}

void print_stack(stack<int> &st){
    while(!st.empty()){
        auto tos = st.top(); st.pop();
        cout << "| " << tos << " |";
    }
    cout << endl;
}

int main(){
    stack<int> st;
    st.push(1);
    st.push(3);
    st.push(4);
    st.push(5);
    insert_into_sorted_stack(st, 2);
    print_stack(st);
    return 1;
}