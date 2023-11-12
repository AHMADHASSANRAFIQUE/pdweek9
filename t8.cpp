#include <iostream>
#include <string>
using namespace std;

string brokenwords(string rightword, string type);

main()
{
    string rightword;
    string type;
    cout << "Enter the correct phrase: ";
    getline(cin,rightword);
    cout << "Enter what you actually typed: ";
    getline(cin,type);
    string words = brokenwords(rightword, type);
    cout<<"Broken keys: "<<words;
}

string brokenwords(string rightword, string type)
{
    string num = "", num1 = "";
    for (int x = 0; x < rightword.length(); x++)
    {
        if (type[x] != rightword[x] && num1.find(rightword[x]) == string::npos)
        {
            num = num + rightword[x];
            num1 = num1 + rightword[x];
        }
    }
    return num;
}