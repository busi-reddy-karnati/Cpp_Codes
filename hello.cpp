// This is kind of template that WE will be working on right now.

#include<iostream>
#include<vector>
#include<string.h>
#include<algorithm>
//This is for Sort and the functions in STL;
using namespace std;

#define fi(i,a,b) for(int i=a;i<b;i++)
#define fd(i,a,b) for(int i=b;i>b;i--)

//For Python Kind of Coding Style(The suffix p means python)
#define len(a) a.size()
#define printarray(a) fi(i,0,len(a))cout<<a[i]
#define print(a) cout<<a
#define input(a) cin>>a;
#define sortp(a) sort(a.begin(),a.end())

/* Remember This: Define shortcut for the full one:
        The first one is a shortcut and the second one is a full definition
        
        
    Define the type of long long as ll

*/


int main(){
    
    vector<int> a;
    a={1,5,4,3,2,4,6,8};
    sortp(a);
    printarray(a);
    
    print("Hello World");
    
    return 0;
}

