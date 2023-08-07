#include<bits/stdc++.h>
using namespace std;
void bubble(int a[],int n){
    
   for(int i=n-1;i>0;i--){
       int s=0;
       for(int j=0;j<i;j++){
           if(a[j]>a[j+1]){
               swap(a[j],a[j+1]);
               s=1;
           }
       }
       if(s==0){
           break;
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
    bubble(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}

// working of bubble sort 
// by swapping two element just move max element in last and again apply loop on remaining begining max_element
// arr[]= {70,4,67,323,5,100}
// {4,67,70,5,100,323}
// {4,67,5,70,100,323}
// {4,5,67,70,100,323}
