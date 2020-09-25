/*
Калькулятор Дробей (C++) by LinuxSuccubus
*/
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  int chd1, chd2, zd1, zd2, dey;

  cout << "Калькулятор Дробей" << '\n';
  std::cout << "Open-Sourse (ovcourse)" << '\n';
  std::cout << "первая дробь:" << '\n';
  std::cin >> chd1;
  std::cout << "------" << '\n';
  std::cin >> zd1;
  std::cout << "знак действия(умножение = 1)" << '\n';
  std::cout << "           (или деление = 2)" << '\n';
  std::cin >> dey;
  std::cout << "вторая дробь" << '\n';
  std::cin >> chd2;
  std::cout << "------" << '\n';
  std::cin >> zd2;
//calculating
if (dey = 1) {
  int chd3 = chd1 * chd2;
  int zd3 = zd1 * zd2;
  std::cout << "Ответ:" << '\n';
  std::cout << chd3 << '\n';
  std::cout << "-----" << '\n';
  std::cout << zd3 << '\n';
}
if (dey = 2) {
  int chd3 = chd1 * zd2;
  int zd3 = zd1 * chd2;
  std::cout << "Ответ:" << '\n';
  std::cout << chd3 << '\n';
  std::cout << "-----" << '\n';
  std::cout << zd3 << '\n';
}
 if (dey > 2) {
   std::cout << "Знака нет, повторите попытку" << '\n';
 }
  return 0;
}
