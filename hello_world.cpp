#include <iostream>
#include <string>


int main()
{
    std::string username;
    std::cout << "input your name:";
    getline(std::cin, username);
    std::cout << "Hello world from " << username << std::endl;
    return 0;
}
