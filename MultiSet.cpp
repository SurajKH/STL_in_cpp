//MultiSet in C++
#include <bits/stdc++.h>
using namespace std;

/*
  how is multiset different from set:
    multiset basically tends to store duplicate values as well.
    but set tends to store only unique values over here.
*/
int main()
{
    cout<<"\n-------------------MultiSet and Set in C++----------------------\n";
    multiset<int> multi_set;
    set<int> st;
    int n;
    cout<<"Enter the Number of Elements in the Set:\n";
    cin>>n;
    cout<<"Enter the Elements into Set and MultiSet(Note:Consider adding Duplicate to see the Difference):\n";
    for(int i=0;i<n;i++)
    {
        int item;
        cin>>item;
        st.insert(item);
        multi_set.insert(item);
    }
    cout<<"The Elements in the Set are as followed:\n";
    for(auto it=st.begin();it!=st.end();it++)
    {
        cout<<*it<<" ";
    }
    multiset<int>::iterator it;
    
    cout<<"\nThe Elements in the Multi Set are as followed:\n";
    for(auto it=multi_set.begin();it!=multi_set.end();it++)
    {
        cout<<*it<<" ";
    }
    return 0;
}
