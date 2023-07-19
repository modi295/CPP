#include<bits/stdc++.h>                //list and dqueue are same
using namespace std;
int main(){
    list<string> li;
    li.push_back("Rohan");
    li.push_back("Rohit");
    li.push_back("Aman");
    li.push_back("David");
    li.push_back("Aditya");
    li.push_front("chaman");
    li.insert(li.begin(),"Honey");
    cout<<li.max_size();    //max size of list to hold element
    cout<<li.size();        //size of list
    cout<<li.front();
    cout<<li.back()<<" ";
    //v.empty();    //return boolean value
    //v.clear();
    list<string> li2={"Shiva","Akshat","mohit"};
    li2.swap(li);
    li.reverse();      //reverse list
    li.remove("mohit");  //remove
    li.splice(li2.begin(),li);   //merge list
    li.merge(li2);               //merge list

   


 for(auto x:li){
        cout<<x<<" ";
    }
}