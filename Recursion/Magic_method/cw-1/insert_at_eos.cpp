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
    
    //4. Base Condition
    if(st.empty()){
        st.push(x); return;
    }
    //remember returning from base condition is mandatory

    //1. reducing input - processing code
    auto temp = st.top(); st.pop();

    //2. magic happens, what you want has been achieved - recursion call
    insert_at_eos(st,x);

    //3. completing what we removed
    st.push(temp); 
}

int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    insert_at_eos(st,-1);
    print_stack(st); // O/p: | 5 || 4 || 3 || 2 || 1 || -1 |
    return 1;
}