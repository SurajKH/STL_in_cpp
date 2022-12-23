#include <vector>
#include<iostream>
#include<map>
using namespace std;

//Maps in c++
//general format:{key,value} pair
//We can access the value  using the mapped keys over here.

int main()
{
    map<char,int> mp;
    //{key,value} format.
    
    int n=0;
    //mapping of english alphabets(a to e) to respective index.
    for(char i='a';i<='e';i++)
    {
        mp[i]=i-'a';
    }
    //2.Iterating over the contents of map
    for(auto it:mp)
    {
        //it.first defines keys and it.second defines values.
        cout<<it.first<<":"<<it.second<<" ";
    }
    
    
    //3.Task-find the elements with index divisible by 2 
    vector<char> even;
    vector<char> odd;
    
    for(auto it:mp)
    {
        if(it.second%2==0)
        {
            even.push_back(it.first);
        }
        else
        {
            odd.push_back(it.first);
        }
    }
    cout<<endl;
    cout<<"contents of even vector are: "<<endl;
    for(auto it:even)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    cout<<"contents of odd vector are: "<<endl;
    for(auto it:odd)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    return 0;
}
