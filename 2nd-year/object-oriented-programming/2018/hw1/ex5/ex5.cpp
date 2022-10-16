#include <iostream>

bool is_capital(char c){
  return c >= 65 && c <= 90;
}

bool is_in_set(char c){
  char set_of_ignored_characters[] = {'.', ',', ':', ';', '-', '?', '!', '\"', '\'', '/', '(', ')', ' '};
  for(int i = 0; i < sizeof(set_of_ignored_characters)/sizeof(set_of_ignored_characters[0]); ++i){
    if(c == set_of_ignored_characters[i])
      return true;
  }
  return false;
}

bool equal_letters(char a, char b){
  // This could be a more elegant way.
  // if(a == b) return true;
  // if(is_capital(a)) a += 32;
  // if(is_capital(b)) b += 32;
  // return a == b;

  if((is_capital(a) && ((is_capital(b) && a == b) || (!is_capital(b) && a == b-32))) ||
     (!is_capital(a) && ((is_capital(b) && a == b+32) || (!is_capital(b) && a == b))))
     return true;
  return false;
}

bool if_palindrome(std::string s) {
  if(s.size() <= 1) return s.size();
  
  for(int i = 0, j = s.size() - 1; i <= j; ++i, --j){
    while(is_in_set(s[i])){
      ++i;
    }
    while(is_in_set(s[j])){
      --j;
    }
    if(i > j) 
      return true;
    
    if(!equal_letters(s[i], s[j]))
        return false;
  }
  return true;
}

int main(void)
{
  std::cout << "Enter a phrase: ";
  std::string s;
  std::getline(std::cin, s);
  std::cout << ((if_palindrome(s)) ? "Palindrome" : "Not palindrome") << std::endl;
  return 0;
}
