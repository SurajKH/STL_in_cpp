#include <bits/stdc++.h>
using namespace std;

/*
Stack in C++

1.Stack follows last in first out fashion(LIFO)
2.The element can be access from the top of the stack.
3.The different operations associated with the stack are as followed.

*/
int main()
{
    stack<int> st;
    int n;
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
    //Insert element into stack:st.push(item)
    //Element to view the top of stack:st.top()
    //To pop the element from the stack:st.pop()
    
    //Task 1:Reverse the element of the Vector using stack
    for(int i=0;i<n;i++)
    {
        //push operation.
        st.push(v[i]);
    }
    //Display the Contents of the stack.
 cout<<"the elements in stack are:\n";
  while(!st.empty())
 {
    cout<<st.top()<<" ";
    st.pop();
 }
    return 0;
}
