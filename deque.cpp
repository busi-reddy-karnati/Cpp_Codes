#include<iostream>
#include<string>
#include<algorithm>
#include <bitset>
#include<set>
#include<deque>
using namespace std;
int main(){
    //Deque is just like a vector but from both the sides
    //This is useful if we want to manipulate the data from both the sides
    deque<int> d;
    d.push_back(1);
    cout<< d[0];
    d.push_front(2);
    cout <<d[0] <<d[1];
    d.pop_front();
    
    d.pop_back();
    return 0;
}