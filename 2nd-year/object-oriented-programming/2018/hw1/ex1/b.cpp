#include <iostream>

namespace A {
  int x = 1;
}

namespace B {
  int x = 2;
}

using namespace A;
using namespace B;
int main(void)
{
  std::cout << x << std::endl;
  return 0;
}
