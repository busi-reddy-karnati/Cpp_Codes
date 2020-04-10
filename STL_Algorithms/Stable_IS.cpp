#include<iostream>
#include<algorithm>
#include<vector>
//Stable has the relative order maitained
//Sort(a.begin().a.end(),greater<int>())
//Is Heap
#define intvec vector<int>
using namespace std;
#define print(a) for(int i:a)cout<<i
int main(){
    
    intvec a={4,2,3,1,6,5};
    print(a);
    cout<<"\n"<<"THis is normal vector";


    stable_sort(a.begin(),a.end(),greater<int>());
    cout<<"This is after sort, let's see if that's the case";
    cout<<"\n";
    cout<<is_sorted(a.begin(),a.end());
    intvec b={4,2,3,1};
    cout <<is_heap(b.begin(),b.end());

    //is_sorted_until is also the same as it says
    // sort, heap and partition are the ones that accept these

    return 0;
    
}