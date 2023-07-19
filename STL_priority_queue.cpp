#include<bits/stdc++.h>           //Max value always be on top , it follow heap data sturcture and tree used to maintain this
using namespace std;
int main(){
    priority_queue<int> pq;
    pq.push(150);
    pq.push(120);
    pq.push(200);
    pq.push(210);
    pq.push(300);
    pq.pop();
    cout<<pq.top();
    cout<<pq.size();
   // cout<<pq.empty();
    //pq1.swap(pq);


    priority_queue<int,vector<int>,greater<int>>p;  //min priority queue
    p.push(150);
    p.push(120);
    p.push(200);
    p.push(210);
    p.push(300);

    cout<<p.top();
   
    
}