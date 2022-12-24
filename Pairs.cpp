#include <bits/stdc++.h>
using namespace std;

/*
Pairs in C++
*/
int main()
{
    vector<pair<char,int>> p;
    cout<<"The pairs of English alphabet along with it's index are as followed:"<<endl;
    for(char i='a';i<='z';i++)
    {
        p.push_back({i,i-'a'});
        //we can also use make_pair(char,int) over here
    }
    for(auto it:p)
    {
        //accessing pair elements.
        cout<<it.first<<":"<<it.second<<" ";
    }
    cout<<endl;
    //Task 1:Segregate the Pairs into even pairs and odd pairs based on index.
    vector<pair<char,int>> even;
    vector<pair<char,int>> odd;
    for(auto it:p)
    {
        //accessing pair elements.
         if(it.second%2==0)
         {
             even.push_back({it.first,it.second});
         }
         else
         {
             odd.push_back({it.first,it.second});
         }
    }
    cout<<endl;
    cout<<"Even Pairs:\n";
    for(auto it:even)
    {
        //accessing pair elements.
        cout<<it.first<<":"<<it.second<<" ";
    }
    cout<<endl;
    cout<<endl;
    cout<<"Odd Pairs:\n";
    for(auto it:odd)
    {
        //accessing pair elements.
        cout<<it.first<<":"<<it.second<<" ";
    }
    cout<<endl;
    return 0;
}
