#include<algorithm>
#include<vector>

#include<iostream>
using namespace std;
#define print(a) for(int i:a)cout<<i
#define intvec vector<int>
 int main(){
     intvec a={3,4,2,1,4,7,5,6,8};
     cout <<"Normal Array";
     sort(a.begin(),a.end());
     cout <<"\nSorted Array";
     print(a);
     intvec b={3,1,4,2};
     partial_sort(b.begin(),b.begin()+1,b.end());
     cout <<"\nAfter Partial Sort\n";
     print(b);
     intvec c={1,3,2,4};
     sort_heap(c.begin(),c.end());
     cout<<"\nAfter Sort Heap";
     print(c);
    return 0;
 }