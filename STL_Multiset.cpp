#include<bits/stdc++.h>            //multiset store value in sorted and repeated formate
using namespace std;
int main(){
    multiset<int> mt;
    mt.insert(1);
    mt.insert(6);
    mt.insert(1);
    mt.insert(3);
    mt.insert(1);
    mt.insert(10);

    mt.erase(1);
    int cnt= mt.count(1);
    mt.erase(mt.find(1));

}