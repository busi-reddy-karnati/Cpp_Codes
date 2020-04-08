#include<iostream>
#include<string>
#include<algorithm>
#include <bitset>
#include<set>
using namespace std;
int main(){
    bitset<10> s;//This is a bitset having 10 elements
    s[1]=1;
    bitset<10> s1(string("1010101010"));
    cout <<s.count()<<endl;
    cout <<s1.count();
    return 0;
}