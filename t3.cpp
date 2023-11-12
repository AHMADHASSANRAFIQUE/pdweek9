#include<iostream>
using namespace std;
main()
{
    int size;
    cout<<"Enter the size of Array: ";
    cin>>size;
    string input[size];
    for(int x = 0; x < size; x++)
    {
        cout<<"Enter Element "<<x+1<<": ";
        cin>>input[x];
    }
    for(int z=1; z<size; z++)
    {
        if(input[z] != input[z-1])
        {
            cout<<false;
            break;
        }
        else if(input[z] == input[z-1])
        {
            if(size-1 == z)
            {
                cout<<true;
            }
            continue;
        }
    }
}