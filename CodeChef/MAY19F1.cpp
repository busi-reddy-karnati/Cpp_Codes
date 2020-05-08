#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int t,n,q,m;
    vector<int> arr;
    cin >> t;
    while(t--){
        cin >> n;
        cin >> q;
        m=0;
        for(int i=0;i<n;i++){
            int l;
            cin >> l;
            m=max(m,l);
            arr.push_back(l);

        }
        for(int i=0;i<q;i++){
            int q1;
            cin >> q1;
            cout << arr[q1-1]<<"\n";
        }
        return 0;
    }
}