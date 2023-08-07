#include<bits/stdc++.h>
using namespace std;
void selection(int a[],int n){
     for(int i=0;i<=n-2;i++){
        int min=i;
        for(int j=i;j<=n-1;j++){
            if(a[j]<a[min]){
                min=j;
            }
        }
        swap(a[i],a[min]);
    }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    selection(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}


// //working of selection sort
// //find the min element from array and swap with first element till n-2 position

// arr={21,9,34,4}
//     {4,9,34,21}
//     {4,9,34,21}
//     {4,9,21,34}