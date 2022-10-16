#include <iostream>
#include <vector>

std::vector<int> even_odd(const std::vector<int>& v){
  std::vector<int> out(v.size());
  for(int i = 0, k = 0, j = v.size()-1; i < v.size(); ++i){
    if(v[i] % 2 == 0)
      out[k++] = v[i];
    else
      out[j--] = v[i]; 
  }
  return out;
}

int main(void)
{
  std::vector<int> vec {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  std::vector<int> v = even_odd(vec);
  for (auto i : v) {
    std::cout << i << std::endl;
  }
  return 0;
}
