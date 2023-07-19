#include<bits/stdc++.h>     //follow FIFO
using namespace std;
int main(){
    queue<int> q;
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    q.pop();
    cout<<q.front();
    cout<<q.back();
    cout<<q.size();
    //q1.swap(q);
}
