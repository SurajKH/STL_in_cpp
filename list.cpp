#include<bits/stdc++.h>
using namespace std;

//list in cpp

int main()
{
    list<int> l;
    int n;
    cout<<"Enter the number of elements:\n";
    cin>>n;
    //1.push operation in list l
    int start,end;
    cout<<"Enter the start and end range for inserting random numbers into list:\n";
    cin>>start>>end;
    
    //for even index-->push_back and for odd index-->push_front.
    for(int i=0;i<n;i++)
    {
        int random_value=start+(rand()%(end-start+1));
        if(i%2==0)
        l.push_back(random_value);
        else
        l.push_front(random_value);
    }
    //Iterating through the contents of list.
     cout<<"******************************"<<endl;
    cout<<"Iterating over list elements:\n";
    for(auto it=l.begin();it!=l.end();it++)
    {
        //extract the value-->pointer concept.
        cout<<*it<<" ";
    }
    cout<<endl;
     cout<<"******************************"<<endl;
    cout<<"Sorted List(Ascending Order):\n";
    l.sort();
    for(auto it:l)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    cout<<"******************************"<<endl;
    cout<<"Sorted List(Descending Order):\n";
    l.reverse();
     for(auto it:l)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    
     cout<<"******************************"<<endl;
    //swapping the contents of the list

     list<int> l1={12,23,34,56};
     list<int> l2={10,20,30,40};
     cout<<"Before Swapping:\n";
     cout<<"list 1:"<<endl;
     for(auto it:l1)
     {
         cout<<it<<" ";
     }
     cout<<endl;
     cout<<"list 2:"<<endl;
     for(auto it:l2)
     {
         cout<<it<<" ";
     }
     cout<<endl;
     list<int> temp_list=l1;
     l1=l2;
     l2=temp_list;
     cout<<"\n";
     
      cout<<"After Swapping:\n"<<endl;
      cout<<"list 1:"<<endl;
     for(auto it:l1)
     {
         cout<<it<<" ";
     }
     cout<<endl;
     cout<<"list 2:"<<endl;
     for(auto it:l2)
     {
         cout<<it<<" ";
     }
     
     
    return 0;
}