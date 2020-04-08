#include<iostream>
#include<queue>
using namespace std;
#define show(a) cout <<a.front();cout <<a.back()
int main(){


    //IN the queue unlike you expected there wouldn't be 
    //enqueue or dequeue it is push and pop
    queue<int> q;
    q.push(1);
    show(q);
    cout <<q.back();
    q.push(2);
    q.pop();
    cout <<"front "<<q.front();
    //This is a normal Queue. THere is something called as
    //Priority queue
    //Priority Queue is Like a heap implementation
    return 0;
}