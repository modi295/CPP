#include<bits/stdc++.h>
using namespace std;
void insertion(int a[],int n){
    for(int i=0;i<=n-1;i++){
        int j=i;
        while(a[j]>0 && a[j-1]>a[j]){
            int temp=a[j-1];
            a[j-1]=a[j];
            a[j]=temp;
            j--;
        }
    }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    insertion(a,n);
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