//BitSet in C++
#include<bits/stdc++.h>
using namespace std;


int main()
{
    //Bit Representation Using BitSet in C++
    int n;
    cout<<"Enter the Number:\n";
    cin>>n;
    bitset<32> bit_set(n);
    cout<<"\nBit Representation of the Number(32 bit):\n";
    cout<<bit_set<<endl;
    int number_of_ones=bit_set.count();
    cout<<"Total Count of 1's in the Bit Representation is:\n"<<number_of_ones<<endl;
    cout<<"Total Count of 0's in the Bit Representation is:\n"<<bit_set.size()-number_of_ones<<endl;
    
    //Update the bit .
    int pos=0;
    cout<<"Enter the position to reset the bit:\n";
    cin>>pos;
    bit_set.reset(pos);
    cout<<"\nAfter Resetting the bit at the given Number is as followed:\n";
    cout<<"\n\nBit Representation of the Number(32 bit):\n";
    cout<<bit_set<<endl;
    
}