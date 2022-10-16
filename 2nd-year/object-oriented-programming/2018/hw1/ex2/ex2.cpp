#include <iostream>

int counter = 5;

int main(void)
{
  int a = 100, b = 21;
  {
    // a)
    std::cout << "a) ";
    double d = a/b;
    std::cout << d << std::endl;
  }
  {
    // b) first case
    std::cout << "b) First case: ";
    double d = a/b*1.;
    std::cout << d << std::endl;
  }
  {
    // b) second case
    std::cout << "b) Second case: ";
    double d = a*1./b;
    std::cout << d << std::endl;
  }
  {
    // c)
    std::cout << "c) ";
    int a = 3, b = 5;
    double d = ++a + ++b - 8 << 3 >> 1 != 8;
    std::cout << d << std::endl;
  }
  {
    // d)
    std::cout << "d)" << std::endl;
    int counter = 10;
    for(int i = 0; i < 5; ++i) {
      static int counter = 3;
      counter += i;
      std::cout << counter << std::endl;
    }
    std::cout << counter << std::endl;
  }
  return 0;
}

