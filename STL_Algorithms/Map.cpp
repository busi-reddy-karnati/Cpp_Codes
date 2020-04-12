#include<iostream>
#include<map>
#include<algorithm>
#include<vector>

using namespace std;

#define print(a) for(int i:a) cout<<i
int main(){
map<int,vector<int>> map1;
map1[1]={1,2,3};
map1[2]={1,4,9};
map1[2].push_back(16);
print(map1[2]);
return 0;


}