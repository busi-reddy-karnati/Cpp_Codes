#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        if(n%2==0)
        cout<<(n/2)-1<<"\n";
        else
        cout << (n-1)/2;
    }
    return 0;
}