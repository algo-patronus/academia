#include <iostream>
#include <cstdlib>
#include <ctime>

int main(void)
{
  srand(time(NULL));
  int random_number = rand() % 100 + 1;
  int number_of_tries = 0;
  int guess = 0;
  while(guess != random_number){
    std::cout << "Guess a number 1-100: ";
    std::cin >> guess;
    std::cin.ignore();
    ++number_of_tries;
    if(guess > random_number) 
      std::cout << "Entered number is greater than the generated one." << std::endl;
    else if(guess < random_number)
      std::cout << "Entered number is less than the generated one." << std::endl;
    std::cout << std::endl;
  }
  std::cout << "You managed to guess a number in " << number_of_tries << " tries." << std::endl;
  return 0;
}
