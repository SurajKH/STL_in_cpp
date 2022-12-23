#include<vector>
#include<set>
#include<iostream>
using namespace std;

//Set in cpp
int main()
{
   vector<int> vec;
   int n;
   cout<<"Enter the Size of Vector:\n"<<endl;
   cin>>n;
   cout<<"Enter the elements in vector with duplicates:\n"<<endl;
      set<int> st;
   for(int i=0;i<n;i++)
   {
       int item;
       cin>>item;
       vec.push_back(item);
       st.insert(item);
   }
   cout<<endl;
   //1.elements in set after removing Duplicates.
   cout<<"elements in the set are as followed:\n";
   for(auto it:st)
   {
       cout<<it<<" ";
   }
   cout<<endl;
   //2.Iterating over the elements using Iterator in set
   cout<<"Iteration using an Iterator over set elements:"<<endl;
   set<int>::iterator it;
   for(it=st.begin();it!=st.end();it++)
   {
       cout<<*it<<" ";
   }
   //3.Deleting a particular Element in Set 
   st.erase(st.begin());
   cout<<endl;
   cout<<"The Updated Content of the Set is: "<<endl;
    for (auto itr = st.begin(); itr != st.end(); itr++) {
        cout << *itr << " ";
    }
    return 0;
}
