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

void insert_at_eos(stack<int> &st, int x){
    //your code here    
}

int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    insert_at_eos(st,-1);
    print_stack(st);
    return 1;
}