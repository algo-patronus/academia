Create a guessing game which generates a random number between 1 and 100
when it's started. Then a user types in numbers until the generated number
is guessed. After every unsuccessful try, user is notified whether the entered
number is greater or less than a generated one. After a user guesses correctly
a generated number, print out a number of guesses.

For generating numbers, use:
\#include <stdlib.h> (srand, rand)
\#include <time.h> (time)

srand(time(NULL));
int randomNumber = rand()%100 + 1;
