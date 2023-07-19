#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={1,2,3,4,5,5,6,6,7};
    vector<int> v1(5,100);           //{100,100,100,100,100}
    v.push_back(5);     //add at last
    v.pop_back();       //remove at last
    v.erase(v.begin()+2);  // remove 2nd index value
    v.insert(v.begin(),v1.begin(),v1.end()); //merge both vector
    v.swap(v1);    //swap both vector
    //v.empty();    //return boolean value
    //v.clear();    //remove all element from vector
    cout<<v.max_size();    //max size of vector to hold element
    cout<<v.size();        //size of vector
    cout<<v.capacity();    //capacity of vector
    cout<<v.front();
    cout<<v.back();
    v.shrink_to_fit();   //remove extra space 


//Print vector


/*
    for(vector<int>::iterator it=v.begin();it<v.end();it++){
        cout<<*(it)<<" ";
    }

    for(auto it=v.begin();it<v.end();it++){
        cout<<*(it)<<" ";
    }
    
    for(auto i :v){
        cout<<i<<" ";
    }
*/  



}