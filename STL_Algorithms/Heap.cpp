#include<iostream>
/*
Heap Data Structure is one which is handy if we need a minimum or a maximum
We can take an array and make_heap it
We can push_heap to an array 
We can pop_heap but we need to delete the last element that is there in the list by pop_back
Heap makes it easy for retrieval in the data
*/
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int> a={1,4,2,3,8,7,6};
    cout <<"The Initial Vector is ";
    for(int i:a){
        cout<<" "<<i;
    }
    cout<<"/n";
    
    make_heap(a.begin(),a.end());

    cout <<"After We made the array to heap";
    for(int i:a){
        cout<<" "<<i;
    }
    cout<<"\n";

    cout<<"Now Lets Push the element 10 to heap\n";

    //To make the numbers to be added to a heap, we first push it to an array and then push_heap
    a.push_back(10);
    push_heap(a.begin(),a.end());
    for(int i:a){
        cout<<" "<<i;
    }
    cout <<"\n";


    //To delete the maximum, pop_heap and delete the last(pop_back)
    pop_heap(a.begin(),a.end());
    a.pop_back();
    cout << "Let's delete or pop the head of heap";
    for(int i:a){
        cout<<" "<<i;

    }
    cout<<"\n";
    
    //FOR the command problem we should always open our code from the developer options
    return 0;
    

}
