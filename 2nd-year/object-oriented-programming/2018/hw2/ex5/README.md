Write an improved version of a function implemented in exercise 4, so that it
takes a predicate function (std::function<bool>(int)> from functional header) as an argument along with the input list of numbers.
A function should invoke predicate over each element of a passed vector, and if
the predicate's result is true, the element shall be on the left side, otherwise
it should be on the right side.

An example of calling partition function:
```
#include <iostream>
#include <functional>
#include <vector>

/* partition implementation */

int main() {
  std::vector<int> nums {15, 20, 25, -10, -75, 100, -255, 430, 200};
  auto result = partition (nums, [](int num) {
                            // predicate
                            return !(num % 2); // a function
                          });
  for (auto num : result) {
    std::cout << num << ' ';
  }
  std::cout << std::endl;
  return 0;
}
```
Possible output: 200 20 430 -10 100 -255 -75 25 15

Test the implementation with the predicate functions below:
[] (int num) { return num > 0; }
Possible output: 15 20 25 200 430 100 -255 -75 -10
[] (int num) { return !(num % 10); }
Possible output: 200 20 430 -10 100 -255 -75 25 15
[] (int num) { return std::abs(num) > 99; }
Possible output: 200 430 -255 100 -75 -10 25 20 15
