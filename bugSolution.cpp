#include <vector>
#include <iostream>
#include <stdexcept>

int main() {
  std::vector<bool> vec(5);
  int index = 10;

  try {
    if (index < 0 || index >= vec.size()) {
      throw std::out_of_range("Index out of bounds");
    }
    bool b = vec[index];
    std::cout << "Value at index " << index << ": " << b << std::endl;
  } catch (const std::out_of_range& e) {
    std::cerr << "Error: " << e.what() << std::endl;
  }
  return 0;
}
//Alternative: Use a different container like std::vector<int> if boolean values aren't crucial for memory optimization.