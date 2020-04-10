#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> a={1,2,6,4,5,3,0};
    auto b=find(a.begin(),a.end(),4);
    return 0;
}