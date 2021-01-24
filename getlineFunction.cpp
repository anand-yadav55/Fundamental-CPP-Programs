// getline() function example using string.h header file
// It is used to get strings with spaces
// syntax
// getline(stream, object, delim character)
// or
// getline(stream, object) -by default delim is '\n' new line character
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string d1, d2;
    cout << "enter string 1 with spaces ";
    getline(cin, d1, '\n');
    cout << "enter string 2 with spaces which will encounter quit ";
    getline(cin, d2, 'b');
    cout << "d1" << d1 << "\nd2" << d2;
    return 0;
}