#include<iostream>
using namespace std;
main()
{
    int size;
    cout<<"Enter the size of Array: ";
    cin>>size;
    string input[size];
    for(int x = 0 ; x < size ; x++)
    {
    cout<<"Enter Element "<<x+1<<": ";
    cin>>input[x];
    }
    int count = 2;
    for(int z = 1 ; z < size ; z++)
    {
        if(input[z] == input[z-1])
        {
            count = count + 2;
        }
        else
        {
            count = count + 3;
        }
    }
    cout<<"Time to color: "<<count<<" seconds";
}