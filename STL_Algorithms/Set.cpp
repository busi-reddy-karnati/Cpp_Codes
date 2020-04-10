#include<iostream>
#include<algorithm>
#include<set>
#include<vector>
#define print(a) for(int i:a) cout<<i
using namespace std;
int main(){
    set<int> s1={1,2,3,4};
    set<int> s2={2,3,6,5};
    set<int> res;
    set_difference(s1.begin(),s1.end(),s2.begin(),s2.end(),res);
    print(res);
    cout <<"\n";
    set_intersection(s1.begin(),s1.end(),s2.begin(),s2.end(),res);
    print(res);
    cout <<"\n";
    set_union(s1.begin(),s1.end(),s2.begin(),s2.end(),res);

    //Remove in a collection to take out all the instances
    print(res);
    cout <<"\n";
    return 0;
}