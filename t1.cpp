#include<iostream>
using namespace std;
main()
{
    string input;
    cout<<"Enter a String: ";
    cin>>input;
    int length = input.length();
    if(length % 2 == 0)
    {
        cout<<true;
    }
    else
    {
        cout<<false;
    }
}