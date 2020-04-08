#include<iostream>
using namespace std;
#include<stack>
int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    cout << s.size();
    s.pop();
    cout <<s.top();
    return 0;  
}