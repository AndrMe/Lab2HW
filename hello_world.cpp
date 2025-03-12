#include <iostream>
#include <string>

using namespace std;

int main()
{
    string username;
    cout << "input your name:";
    getline(cin, username);
    cout << "Hello world from " << username << endl;
    return 0;
}
