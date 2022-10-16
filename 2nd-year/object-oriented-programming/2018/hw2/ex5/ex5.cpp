#include <iostream>
#include <functional>
#include <vector>

std::vector<int> partition(const std::vector<int>& v, std::function<bool(int)> predicate){
  std::vector<int> out(v.size());
  for (int i = 0, k = 0, j = v.size() - 1; i < v.size(); ++i) {
    if(predicate(v[i]))
      out[k++] = v[i];
    else
      out[j--] = v[i];
  }
  return out;
}

int main(void)
{
  std::vector<int> v{15, 20, 25, -10, -75, 100, -255, 430, 200};
  auto result1 = partition(v, [](int num) { return !(num % 2); });
  auto result2 = partition(v, [](int num) { return num > 0; });
  auto result3 = partition(v, [](int num) { return !(num % 10); });
  auto result4 = partition(v, [](int num) { return std::abs(num) > 99; });

  for (auto num : result1) {
    std::cout << num << ' ';
  }
  std::cout << std::endl;
  for (auto num : result2) {
    std::cout << num << ' ';
  }
  std::cout << std::endl;
  for (auto num : result3) {
    std::cout << num << ' ';
  }
  std::cout << std::endl;
  for (auto num : result4) {
    std::cout << num << ' ';
  }
  std::cout << std::endl;
  return 0;
}
