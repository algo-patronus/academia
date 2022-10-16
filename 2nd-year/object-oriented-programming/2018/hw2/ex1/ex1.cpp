#include <iostream>
#include <cmath>
#include <vector>

// a)
bool is_prime(int n){
  if(n < 1)
    throw std::invalid_argument("A given number is less than 1");
  for(int i = 2; i <= (int)sqrt(n); ++i){
    if(n % i == 0)
      return false;
  }
  return true;
}

// b)
std::vector<int> primes(int n){
  std::vector<int> prime_numbers;
  for(int i = 2, j = 1; j <= n; ++i){
    if(is_prime(i)){
      prime_numbers.push_back(i);
      ++j;
    }
  }
  return prime_numbers;
}

// c)
template <typename Vector>
void print_primes(Vector&& prime_numbers){
  for(int i = 0; i < prime_numbers.size(); ++i){
    std::cout << i+1 << ": " << prime_numbers[i] << std::endl;
  }
}

int main(void)
{
  print_primes(primes(300000));
  return 0;
}
