#include<bits/stdc++.h>
using namespace std;
/*int main(){      //hashing for int using array
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int hash[13]={0};
    for(int i=0;i<n;i++){
        hash[a[i]]++;
    }
    int q;
    cin>>q;
    while(q--){
        int num;
        cin>>num;
        cout<<hash[num]<<endl;
    }

    return 0;

}*/

/*
int main(){            //hashing for string and unique char using array
    string s;
    cin>>s;

    int hash[256]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i]]++;
    }
    int q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        cout<<hash[c]<<endl;
    }

    return 0;

}
*/

int main(){        //hashing using Map
    int n;
    cout<<"enter n";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
         cin>>a[i];
    }
     map<int, int>m;
    for(int i=0;i<n;i++){     
       m[a[i]]++;
    }
   
    int q;
    cout<<"enter q";
    cin>>q;
    while(q--){
        int num;
        cin>>num;
        cout<<m[num]<<endl;
    }

    return 0;
}
