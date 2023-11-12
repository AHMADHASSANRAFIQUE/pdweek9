#include<iostream>
using namespace std;
main()
{
    string input1,input2;
    cout<<"Enter the first string: ";
    cin>>input1;
    cout<<"Enter the second string: ";
    cin>>input2;
    int count=0;
    for(int x = 0; x < input1.length(); x++)
    {
        for(int z = 0; z < input2.length(); z++)
        {
            if(input1[x+count]==input2[z])
            {
                count++;
            }
        }
    }
    cout<<"Number of common characters: "<<count;
}