#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int,int> mp;
    mp[3]=5;
    mp[1]=3;
    mp[2]=9;

    auto it=mp.find(2);
    cout<<it->second;

    for(auto i:mp){
        cout<<i.first<<" "<<i.second<<" ";
    }
}

// it has functionality of size,clear,insert,begin,end,max_size,empty,find,count
// multimap store multiple same key in sorted value
// unordered map it store unique data in unsorted manner
