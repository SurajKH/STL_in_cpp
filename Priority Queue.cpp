#include <bits/stdc++.h>
using namespace std;

/*
Priority Queue in C++
By default Priority Queue is Max heap.
*/
int main()
{
    priority_queue<pair<int,char>> pq;
    //cout<<pq.size();
    cout<<"The pairs of English alphabet along with it's index are as followed:"<<endl;
    for(char i='a';i<='z';i++)
    {
        pq.push(make_pair(i-'a',i));
        //we can also use make_pair(char,int) over here
    }
    cout<<endl;
    cout<<"Max Heap:"<<endl;
    
    while(!pq.empty())
    {
        pair<int,char> p=pq.top();
        cout<<p.second<<":"<<p.first<<" ";
        pq.pop();
    }
    cout<<endl;
    cout<<endl;
    cout<<"Min Heap:"<<endl;
    priority_queue<pair<int,char>,vector<pair<int,char>>,greater<pair<int,char>>> pq_min;
    for(char i='a';i<='z';i++)
    {
        pq_min.push(make_pair(i-'a',i));
        //we can also use make_pair(char,int) over here
    }
  
    
    while(!pq_min.empty())
    {
        pair<int,char> p=pq_min.top();
        cout<<p.second<<":"<<p.first<<" ";
        pq_min.pop();
    }
    return 0;
}