#include <bits/stdc++.h>

using namespace std;

//use recursion only

void insert_into_sorted_stack(stack<int> &st, int x){
    //enter your code here
    
    //4. Base Condition: returning is mandatory
    if(st.empty() || (!st.empty() && x>=st.top())){
        st.push(x);
        return;
    }

    //1. reducing input - processing code
    int t = st.top(); st.pop();
    
    //2. magic happens, what you want has been achieved - recursion call
    insert_into_sorted_stack(st,x);

    //3. completing what we removed
    st.push(t); 
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