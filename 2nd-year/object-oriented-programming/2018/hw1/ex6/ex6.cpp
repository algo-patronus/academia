#include <iostream>
#include <cmath>

int main(void)
{
  std::cout << "Enter the first number: ";
  int a;
  std::cin >> a;
  std::cout << "Enter the second number: ";
  int b;
  std::cin >> b;
  std::cout << "Enter the operation (+, -, *, /, ^): ";
  char operation;
  std::cin >> operation;
  switch(operation){
    case '+':
      std::cout << a+b << std::endl;
      break;
    case '-':
      std::cout << a-b << std::endl;
      break;
    case '*':
      std::cout << a*b << std::endl;
      break;
    case '/':
      std::cout << a/b << std::endl;
      break;
    case '^':
      std::cout << pow(a,b) << std::endl;
      break;
    default:
      std::cout << "Wrong operation" << std::endl;
  }
  return 0;
}
