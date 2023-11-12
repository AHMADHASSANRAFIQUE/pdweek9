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
    bool count = false;
    for(int z = 0 ; z < size ; z++)
    {
        for(int y = 0; y < 10  ; y++)
        {
            if(input[z][y] ==  '7' && count == false)
            {
                cout<<"Boom!";
                count = true;
                break;
            }
        }
        if(z == size - 1 && count == false)
        {
            cout<<"there is no 7 in the array";
        }
    }
}