#include <vector>
#include<iostream>
#include<iterator>
using namespace std;

int main()
{
    vector<int> arr;
    vector<int> temp_arr;
    
    //1.to track the difference between size and capacity.
    for(int i=0;i<10;i++)
    {
        arr.push_back(i);
    }
    
    temp_arr=arr;
    //here now the size of array is 10 but the capacity of array is 16
    cout<<"Size: "<<arr.size()<<endl;
    cout<<"Capacity: "<<arr.capacity()<<endl;
    
    //2.Iterating through the contents of vector
     cout<<"Contents of vector are: "<<endl;
    for(auto it:arr)
    {
        //for each loop
       
        cout<<it<<" ";
    }
    cout<<endl;
    cout<<"********************"<<endl;
    //3.to track the difference between clear and erase.
    vector<int>::iterator it;
    it=arr.begin();
    arr.erase(it);
     cout<<"Contents of vector after deletion: "<<endl;
    for(auto it:arr)
    {
        //for each loop
       
        cout<<it<<" ";
    }
    cout<<endl;
      cout<<"********************"<<endl;
    //clear in Vector.
     
    arr.clear();
    cout<<"Clear in Vector,Array Size: "<<arr.size()<<endl;
     
     cout<<"********************"<<endl;
   
     //4.Accessing elements of Vector
     cout<<"First Element: "<<arr[0]<<endl;
     cout<<"Last Element: "<<arr[1]<<endl;
    
     int index=5;
     cout<<"Element at index: "<<arr[index]<<endl;
    
         cout<<"********************"<<endl;
     //5.Swap contents of Vector
     cout<<"Swap contents in Cpp "<<endl;
     vector<int> swap(5,99);
     vector<int> temp;
     temp=temp_arr;
    // cout<<temp.size()<<endl;
     arr=swap;
     swap=temp;
     
     
     for(auto it:arr)
    {
        //for each loop
       
        cout<<it<<" ";
    }
    cout<<endl;
    
      for(auto it:swap)
    {
        //for each loop
       
        cout<<it<<" ";
    }
    cout<<endl;
     
    return 0;
}
