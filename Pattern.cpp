#include<bits/stdc++.h>
using namespace std;
/*
* * * 
* * *
* * *
*/
void pattern1(int n){
    for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<"* ";
		}
		cout<<endl;
	}
}

/*
*
* *
* * *
*/
void pattern2(int n){
    for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			cout<<"* ";
		}
		cout<<endl;
	}
}

/*
1
1 2
1 2 3
*/
 void pattern3(int n){
    for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<j<<" ";
		}
		cout<<endl;
	}
 }
 /*
 1
 2 2
 3 3 3
 */
 void pattern4(int n){
    for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<i<<" ";
		}
		cout<<endl;
	}
 }
 /*
 * * *
 * *
 * 
 * */
void pattern5(int n){
    for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			cout<<"* ";
		}
		cout<<endl;
	}
}
/*
1
1 2
1 2 3
*/
void pattern6(int n){
    for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i+1;j++){
			cout<<j<<" ";
		}
		cout<<endl;
	}
}
/*
     *     
    ***
   *****
  *******
 *********
***********
*/
void pattern7(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
} 
/*
***********
 *********
  *******
   *****
    ***
     *
*/

void pattern8(int n){
     for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=0;j<2*n-(2*i+1);j++){
            cout<<"*";
        }
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
/*
   *   
  ***
 *****
*******
*******
 *****
  ***
   *
*/

void pattern9(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
     for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=0;j<2*n-(2*i+1);j++){
            cout<<"*";
        }
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
} 
/*
*
**
***
****
***
**
*
*/

void pattern10(int n){
     for(int i=1;i<=2*n-1;i++){
        int star=i;
        if(i>n) star=2*n-i;
        for(int j=1;j<=star;j++){
            cout<<"*";
        }
        cout<<endl;

    }
}
/*
1 
0 1
1 0 1
0 1 0 1
*/
void pattern11(int n){
     int x=1;
    for(int i=0;i<n;i++){
        if(i%2==0) x=1;
        else x=0;
        for(int j=0;j<=i;j++){
            cout<<x<<" ";
            x=1-x;
        }
        cout<<endl;
    }
}


int main(){
    pattern11(4);
}