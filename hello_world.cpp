#include <iostream>
#include <string>

int
main()
{
  // Ввод имени пользователя
  std::string username;
  std::cout << "input your name:";
  getline(std::cin, username);

  // Вывод результатов
  std::cout << "Hello world from " << username << std::endl;
  return 0;
}
