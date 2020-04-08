//For this to work you will have to come to the working directory
// and only then the executable will work

/*
Q: Given a list of coins we need to construct the sum to a
fixed number

given[1,2,3] if asked for 4 we need to return [1,3]

Give a coin denominations to satisify the total

There is no proof that greedy Algorithm will work always
An example where it doesn't work is in the cae of [1,3,4] 
and we want 6 This Algo gives 4+1+1 Although the result is 
3+3
So We will look at other ways of solving this
*/

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int> coins={1,5,10,50,100,200,500,2000};
    cout<<"Give How much";
    int n;
    int coincount=0;
    cin >>n;
    for(int i=coins.size()-1;i>=0;i--){
        int k=n/coins[i];
        coincount+=k;
        n-=k*coins[i];
        cout << k <<" Notes of " << coins[i] <<" Denominations\n";
    }cout<<coincount;                   
    return 0;


}