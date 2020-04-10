#include<iostream>
#include<algorithm>
#include<vector>
#include<numeric>
using namespace std;
#define intvec vector<int> 
#define print(a) for(int i:a) cout<<i

int main(){

    intvec a={1,2,3,4,1};
    cout<<"Count of 1 :";
    cout <<count(a.begin(),a.end(),1);
    cout <<"\n";
    intvec b={1,2,3,1,2};
    cout << inner_product(a.begin(),a.end(),b,0);
    cout<<" is the Innner Product of a and b";
    cout <<"The sum of the numbers in that array: "<<accumulate(a.begin(),a.end(),0); 
    return 0;
}