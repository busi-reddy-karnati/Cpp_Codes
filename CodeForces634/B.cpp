#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    int n,a,b;
    cin >> t;
    while(t--){
        cin >>n >> a >> b;
        int cc=0;
        for(int i=0;i<n;i++){
            char c=char(97+cc);
            cout << c;
            if(cc>=b)
            cc=0;
        }
        cout<<"\n";
    }
    return 0;
}