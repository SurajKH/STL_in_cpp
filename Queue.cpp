#include <bits/stdc++.h>
using namespace std;

/*
Queue in C++

1.Queue follows first in first out fashion(FIFO)
2.The element can be access from front of the Queue.
3.The different operations associated with the Queue are as followed:

q.push(item)-->push the element at the end of the queue.
q.pop()-->pops the element from the front of the queue.
q.front()-->to access the front element of queue without deleting it.
q.empty()-->check if queue is empty.
q.size()-->returns the size of the queue.
*/
int main()
{
    queue<int> q1;
    queue<int> q2;
    int n;
    cout<<"Queue in C++"<<endl;
    cout<<"Enter the number of elements in Vector:\n";
    cin>>n;
    vector<int> v;
    cout<<"Enter the Contents into the Vector:\n";
    for(int i=0;i<n;i++)
    {
        int item;cin>>item;
        v.push_back(item);
    }
    cout<<"the elements in vector are:\n";
    for(auto it:v)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    //Task 1:To access the  Elements in the Vector by using single Queue by preserving the Order.
    
    
    for(int i=0;i<n;i++)
    {
        //push operation.
       q1.push(v[i]);
    }
    cout<<endl;
    cout<<q1.size()<<endl;
    //Display the Contents of the queue(FIFO)
 cout<<"*********************************\n";
 cout<<"First In First Out Fashion(FIFO):\n";
 cout<<"the elements in first queue are:\n";
  while(!q1.empty())
 {
    cout<<q1.front()<<" ";
    //pop the contents from the queue q1
    q1.pop();
 }
    return 0;
}
