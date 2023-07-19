#include<bits/stdc++.h>         //it store data in sorted order and unique
using namespace std;
int main(){
    set<int> st;
    st.insert(10);
    st.insert(6);
    st.insert(9);
    st.insert(9);

    cout<<st.size();
    cout<<st.max_size()<<" ";
   // cout<<st.empty();

   auto it=st.find(6);
   st.erase(it);
   cout<<st.count(9);


    for(auto x:st){
        cout<<x<<" ";
    }
}

//here is unordered set that doesn't store your data sorted order but store only unique data
