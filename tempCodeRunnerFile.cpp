//  Ctrl + Alt + N to run the code
#include <iostream>
using namespace std;
int main()
{
    int c3 = 0, c5 = 0;
    for (int i = 1; i <= 50; i++)
    {
        c3++;
        c5++;
        string data = "";
        if (c3 == 3)
        {
            data = "fizz";
            c3 = 0;
        }
        if (c5 == 5)
        {
            data = "buzz";
            c5 = 0;
        }
        if (data == "")
        {
            data = "" + i;
        }
        cout << data << endl;

        //Direct approch
        // if (i % 3 == 0)
        // {
        //     cout << "Fizz";
        // }
        // if (i % 5 == 0)
        // {
        //     cout << "Buzz";
        // }
        // if (i % 3 != 0 && i % 5 != 0)
        // {
        //     cout << i;
        // }
        // cout << endl;
    }
    return 0;
}