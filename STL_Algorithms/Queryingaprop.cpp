//Lets see the property of even and odd for all_of or any_of or none_of
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define print(a) for(int i:c) cout<<i
//Let's see if all the numbers given areeven or odd in the list of given numbers
int main(){
    vector<int> a={2,4,6,11};
    if(all_of(a.begin(),a.end(),[](int i){return i%2==0;})){
        cout<<"All Even";//Now doesn't
    }
    //Same with anyof and noneof
    //equal(a,b)checks if all of the contents are same
    return 0;
}