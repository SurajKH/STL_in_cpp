#include <bits/stdc++.h>
using namespace std;

//Dequeue in C++
/*
 Dequeue-->Double ended Queue.
 We can perform the insertion and deletion operation 
 from either ends of queue.
*/
int main()
{
    cout<<"\n------------------------Dequeue in C++-----------------------\n";
    deque<int> dq;
    cout<<"\nInsert at the front of the deque:\n";
    dq.push_front(10);
    dq.push_front(20);
    /* 
     Contents of dq is:20 10
    */
    cout<<"\nContents of Deque:\n";
    deque<int>::iterator it;
    for(it=dq.begin();it!=dq.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    cout<<"\n";
    //lets consider push_back operation over here.
    cout<<"Insert at the End of the Deque:\n";
    dq.push_back(23);
     cout<<"\nContents of Deque:\n";
    for(it=dq.begin();it!=dq.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    cout<<"\nDelete the elements at the front and rear position in the Deque:\n";
    dq.pop_front();
    dq.pop_back();
     cout<<"\nContents of Deque:\n";
    for(it=dq.begin();it!=dq.end();it++)
    {
        cout<<*it<<" ";
    }
    return 0;
}
