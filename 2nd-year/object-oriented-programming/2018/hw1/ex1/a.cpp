#include <iostream>

namespace A {
  namespace B {
    int num;
  }
}

namespace AB = A::B;
using namespace AB;
int main(void)
{
  int num = 5;
  std::cout << ::num << std::endl;
  return 0;
}
