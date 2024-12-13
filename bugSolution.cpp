#include <iostream>
#include <vector>

int main() {
  std::vector<std::vector<int>> vec(10, std::vector<int>(10, 0));

  for (int i = 0; i < 10; ++i) {
    for (int j = 0; j < 10; ++j) {
      vec[i][j] = i * 10 + j;
    }
  }

  for (int i = 0; i < 10; ++i) {
    for (int j = 0; j < 10; ++j) {
      std::cout << vec[i][j] << " ";
    }
    std::cout << std::endl;
  }

  std::vector<int> v;
  for (int x : vec[5]) {
    v.push_back(x);
  }

  for (int i = 0; i < v.size(); ++i) {
    std::cout << v[i] << " ";
  }
  std::cout << std::endl;

  v[5] = 1000;

  for (int i = 0; i < 10; ++i) {
    for (int j = 0; j < 10; ++j) {
      std::cout << vec[i][j] << " ";
    }
    std::cout << std::endl;
  }

  return 0;
}