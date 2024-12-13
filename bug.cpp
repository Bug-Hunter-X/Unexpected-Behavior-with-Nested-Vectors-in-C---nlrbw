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

std::vector<int> v = vec[5];

for (int i = 0; i < v.size(); ++i) {
  std::cout << v[i] << " ";
}

vec[5][5] = 1000;

for (int i = 0; i < 10; ++i) {
  for (int j = 0; j < 10; ++j) {
    std::cout << vec[i][j] << " ";
  }
  std::cout << std::endl;
}