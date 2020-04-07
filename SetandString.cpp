#include<iostream>
#include<algorithm>
#include<string>
#include<set>
using namespace std;
#define len(a) a.size();
/*

//For String class done
int main(){
    string s="busi";
    string ss=s+s;
    ss[4]='g';
    cout <<s;
    cout <<ss;
    cout<<ss.substr(2,5);
    return 0;
}
*/

int main(){
    set<int> s={1,2,3,4,5};
    set<int> s2={3,6,9,12};
    cout << s.size();
    return 0;
}