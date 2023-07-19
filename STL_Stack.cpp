#include<bits/stdc++.h>          //FILO
using namespace std;
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(90);
    st.push(50);
    st.pop();

    cout<<st.size();
    cout<<st.top();
    //st1.swap(st);

   // cout<<st.empty();
}