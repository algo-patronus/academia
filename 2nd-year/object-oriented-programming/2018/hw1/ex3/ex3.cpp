#include <iostream>

#define MAX 10

int number_of_digits(int number){
  int i = 0;
  while(number > 0) {
    number /= 10;
    i++;
  }
  return i+1;
}

#define MAXDIGITS (number_of_digits(MAX*MAX))

int main(void)
{
  for (int i = 1; i <= MAX; ++i) {
    for (int j = MAX; j >= 1; --j) {
      std::cout << '\r' << std::string((j-1) * MAXDIGITS, ' ');
      if(j != 1) std::cout <<  std::string(MAXDIGITS - number_of_digits(i*j) - ((j == 2) ? 1 : 0), ' ');
      std::cout << i*j;
    }
    std::cout << std::endl;
  }
  return 0;
}
