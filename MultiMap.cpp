//MultiMap in C++
#include <bits/stdc++.h>
using namespace std;

/*
  MultiMap in C++:
  
  How is it different from map?
  
  let us consider an example:
    map<int,int> mp;
    mp[0]=1;
    mp[1]=1;
    
    result:mp[1]=1.
    
    multimap<int,int> mp;
    mp[0]=1;
    mp[1]=1;
    
    result:mp[1]=1;
    mp[0]=1;
    
*/
int main()
{
    cout<<"\n------------------------MultiMap and Maps in C++----------------------\n";
    map<int,int> mp;
    multimap<int,int> mmp;
    int n;
    cout<<"Enter the Number of elements in Map and MultiMap:\n";
    cin>>n;
    cout<<"Add the Entries into Map and MultiMap:\n";
    cout<<"\nNote Consider adding multiple key entries to see the difference between map and multimap:\n";
    for(int i=0;i<n;i++)
    {
        int key;
        cout<<"\nEnter the key:\n";
        cin>>key;
        mp[key]=i;
        //inserting {key:value} pair in a mutlimap.
       mmp.insert(pair<int,int>(key,i));
    }
    cout<<"Contents of Map:\n";
    for(auto it:mp)
    {
        cout<<"{ "<<it.first<<" : "<<it.second<<" }\n";
    }
    cout<<"\nContents of MultiMap:\n";
    for(auto it:mmp)
    {
        cout<<"{ "<<it.first<<" : "<<it.second<<" }\n";
    }
    return 0;
}
