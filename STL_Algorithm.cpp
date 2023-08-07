#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v={3,4,2,9,1,45,6,7,76,5};
    sort(v.begin(),v.end(),greater<int>());
   
    for(auto i :v){
        cout<<i<<" ";
    }
    cout<<endl;
    int max_v=*max_element(v.begin(),v.end());
    cout<<max_v;


    int num=7;
    long long num1=798273187;
    int cnt=__builtin_popcount(num);
    long long cnt1=__builtin_popcountll(num1);
    cout<<cnt1;


    string x="123";
    do{
        cout<<x<<" ";

    }while(next_permutation(x.begin(),x.end()));

     binary_search(v.begin(),v.end(),9);  //search

}