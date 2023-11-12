#include <iostream>
using namespace std;

bool check(string newinput);
string longsegment(string input[], int size);

main()
{
    int size;
    cout << "Enter the number of words: ";
    cin >> size;
    cout << "Enter the words, one by one: " << endl;
    string input[size];
    for (int x = 0; x < size; x++)
    {
        cin >> input[x];
    }
    cout << "Longest 7-segment word: " << longsegment(input, size);
}

bool check(string newinput)
{
    for (int i = 0; i < newinput.length(); i++)
    {
        if (newinput[i] == 'k' || newinput[i] == 'm' || newinput[i] == 'x' ||
         newinput[i] == 'v' || newinput[i] == 'w')
            return false;

    }
    return true;
}
string longsegment(string input[], int size)
{
    string newst = "";
    for (int j = 0; j < size; j++)
    {
        if (input[j].length() >= size && input[j].length() > newst.length() && check(input[j]))
            newst = input[j];
    }
    return newst;
}