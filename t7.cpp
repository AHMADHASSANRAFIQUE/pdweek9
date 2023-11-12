#include <iostream>
using namespace std;

void dance(string input)
{
    string checkmove[] = {"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado", "Pop", "Lock", "Arabesque"};
    for (int x = 0; x < 4; x++)
    {
        int ckecktoAscii,count;
        ckecktoAscii = input[x] - '0';
        count = (ckecktoAscii + x) % 10;
        cout << checkmove[count];
        if (x != 3)
        {
            cout << ", ";
        }
    }
}

main()
{
    string input;
    cout << "Enter your PIN (4 digits): ";
    cin >> input;
    if (!isdigit(input[3]) || !isdigit(input[2]) || !isdigit(input[1]) || !isdigit(input[0]) || input.length() != 4)
    {
        cout << "Invalid input.";
        return 0;
    }
    dance(input);
}