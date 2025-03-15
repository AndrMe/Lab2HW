#include <iostream>
#include <string>


int main()
{
    // getiing user name
    std::string username;
    std::cout << "input your name:";
    getline(std::cin, username);

    // printing result
    std::cout << "Hello world from " << username << std::endl;
    return 0;
}
