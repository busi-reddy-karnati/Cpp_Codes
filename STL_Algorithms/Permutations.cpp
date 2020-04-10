#include<iostream>
#include<algorithm>
#include<vector>
#define print(a) for(int i:a)cout<<i 
#define intvec vector<int>
using namespace std;
int main(){
    intvec a={1,2,3,4};
    cout<<"\nNow rotating";
    rotate(a.begin(),a.end(),a.end());
    print(a);
    cout <<"\nNext Permutation";
    next_permutation(a.begin(),a.end());
    print(a);
    prev_permutation(a.begin(),a.end());
    cout<<"\nPrevious Permutation";
    print(a);
    reverse(a.begin(),a.end());
    return 0;


}