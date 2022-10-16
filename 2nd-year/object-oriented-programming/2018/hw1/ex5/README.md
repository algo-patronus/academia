Write a program that checks if the entered phrase is a palindrome.
A phrase may contain empty spaces or interpunction symbols { . , : ; - ? ! " ' / ( ) }
which need to be ignored. A phrase is a palindrome if it contains an identical sequence
of characters from the both sides. (Letters A and a are treated the same).

Palindrome examples:
Are we not pure? "No sir!" Panama's moody Noriega brags. "It is garbage!"

Irony dooms a man; a prisoner up to new era.

A new order began, a more Roman age bred Rowena.

Anne, I vote more cars race Rome to Vienna.

For entering more than one word, use std::getline. Usage example:

std::cout << "Type something: ";
std::string s;
std::getline(std::cin, s); // s now holds all words you typed before pressing Enter
