#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin >>n;
        vector<int> dist;
        vector<int> actual;
        int k;
        cin >> k;
        actual.push_back(k);
        for(int i:actual){
            if(find(dist.begin(),dist.end(),i)==dist.end()){
                dist.push_back(i);
            }
        }//Till here the dist is done
        int nd=dist.size();
        int maxfreq=0;
        for(int i:dist){
            int h=count(actual.begin(),actual.end(),i);
            if(h>maxfreq){
                maxfreq=h;
            }
        }
        if(maxfreq==nd)
        cout<<maxfreq-1<<"\n";
        else
        cout<<min(maxfreq,nd);
        
    }
    return 0;
}