#include<iostream>
using namespace std;
void check(int size,int input[],int n);
main()
{
    int size;
    cout<<"Enter the size of Array: ";
    cin>>size;
    int input[size],n;
    for(int x = 0; x < size; x++)
    {
        cout<<"Enter Element "<<x+1<<": ";
        cin>>input[x];
    }
    cout<<"Enter number of times even-odd transformation need to be done: ";
    cin>>n;
    check(size,input,n);
}

void check(int size,int input[],int n)
{
    int y = size - 1;
    cout<<"[";
    for(int z=0; z<size-1; z++)
    {
        if(input[z] % 2 == 0)
        {
            cout<<input[z]+(n*(-2))<<", ";
        }
        else if(input[z] % 2 != 0)
        {
            cout<<input[z]+(n*(2))<<", ";
        }
    }
    if(input[y] % 2 == 0)
        {
            cout<<input[y]+(n*(-2))<<"]";
        }
        else if(input[y] % 2 != 0)
        {
            cout<<input[y]+(n*(2))<<"]";
        }
}