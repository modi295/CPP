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
/*
1              1
1 2          2 1
1 2 3      3 2 1
1 2 3 4  4 3 2 1
*/

void pattern12(int n){
    int space = 2*(n-1);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
         for(int j=1;j<=space;j++){
            cout<<"  ";
        }
        for(int j=i;j>=1;j--){
            cout<<" "<<j;
        }
        cout<<endl;
        space-=2;
    }
}
/*
1 
2 3 
4 5 6 
7 8 9 10
*/

void pattern13(int n){
    int x=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<x<<" ";
            x++;
        }
    cout<<endl;
    }
}
/*
A 
A B 
A B C 
A B C D
*/

void pattern14(int n){
    for(int i=0;i<n;i++){
        for(char ch='A';ch<='A'+i;ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
/*
A B C D 
A B C
A B
A
*/

void pattern15(int n){
      for(int i=0;i<n;i++){
        for(char ch='A';ch<='A'+(n-i-1);ch++){
        cout<<ch<<" ";
        }
         cout<<endl;
    }
}

/*
A 
B B
C C C
D D D D
*/

void pattern16(int n){
     for(int i=0;i<n;i++){
        char ch='A'+i;
        for(int j=0;j<=i;j++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
/*
    A    
  A B A
 A B C B A
A B C D C B A
*/

void pattern17(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        char ch = 'A';
        int breakpoint = (2*i+1)/2;
        for(int j=1;j<=2*i+1;j++){
              
         cout<<ch<<" ";
          if(j <= breakpoint) ch++;
           else ch--;
        }

        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }   

        cout<<endl; 
    }
}

void pattern18(int n){
     for(int i=0;i>n;i++){
        for(char ch='C';ch>=ch-i;ch--){
            cout<<ch;
        }
        cout<<endl;
    }
}
/*
**** ****
***   ***
**     **
*       *
*       *
**     **
***   ***
**** ****
*/

void pattern19(int n){
    int s=0;
    for(int i=0;i<n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        for(int j=0;j<=s;j++){
            cout<<" ";
        }
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        s=s+2;
        cout<<endl;
    }
    
    int x=8;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int j=0;j<x;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        x=x-2;
        cout<<endl;
    }
    
}
/*
*      *
**    **
***  ***
********
***  ***
**    **
*      *
*/
 void pattern20(int n){
      int space= 2*n-2;
    for(int i=1;i<=2*n-1;i++){
        int star=i;
       
        if(i>n) star=2*n-i;
        for(int j=1;j<=star;j++){
            cout<<"*";
        }
        for(int j=1;j<=space;j++){
            cout<<" ";
        }

        for(int j=1;j<=star;j++){
            cout<<"*";
        }
        cout<<endl;
        if(i<n) space-=2;
        else space+=2;
    }
  }

/*
****
*  *
*  *
****
*/
 void pattern21(int n){
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0||j==0||j==n-1||i==n-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
 }

 
/*
4444444
4333334
4322234
4321234
4322234
4333334
4444444
*/
void pattern22(int n){
     for(int i=0;i<n*2 -1;i++){
        for(int j=0;j<n*2 -1;j++){
           int top=i;
           int left=j;
           int right=(2*n-2)-j;
           int down=(2*n-2)-i;
           cout<<(n-min(min(top,down),min(left,right)));
        }
        cout<<endl;
    }
}


int main(){
    pattern20(4);
}