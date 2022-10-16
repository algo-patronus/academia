What will be the output from the listed programs?


ANSWER: Variables a and b are integers. The expression a/b gives an integer
as a result, which gets promoted to type double during the assignment 
to the variable d.
a) The output is 4, because the whole part of 100/21 is 4.

b) In the first case, the result of a/b is still an integer.
   The result gets implicitly converted to double before the multiplication
   with 1.
   In the second case, the value of a gets implicitly converted to double
   before the multiplication with 1. and the resulting value's type is double.
   Before the division with the value of b, b's value implicitly converts into
   double, therefore the result is a double, and it isn't floored to 4 anymore.

c) operator ++ in prefix notation gets evaluated first, so the new values of
   a and b are 4 and 6.
   4 + 6 = 10
   10 - 8 = 2
   2 << 3 = 2 * 2^3 = 2^4 = 16
   2^4 >> 1 = 2^3 = 8
   8 != 8 = false = 0

d) Static variable counter will have initial value 3. It gets increased every
   single iteration. The value is accumulated inside the block of for loop
   because the variable is static.
   When the program leaves for loop block, that counter is destroyed, and only
   the one above the for loop (local in a defined scope { } inside of main) and 
   global counter remain.
   The local one will be displayed after the for loop iterations because
   local variable for one scope has a higher priority than a global variable
   for the same scope.
