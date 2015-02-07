#include <iostream>
#include <fstream>
#include <string>

short digits = 13;

int main() {
  std::string line, number;
  std::ifstream input_file ("problem_8.txt");
  long max_result = 0;
  if (input_file.is_open()) {
    while (std::getline(input_file, line)) {
      number += line;
    }
  }
  for (int i=0; i < number.length()-digits; i++) {
    long product = 1;
    for (int j=i; j < i+digits; j++) {
      product *= number.at(j) - '0';
    }
    if (product > max_result) {
      max_result = product;
    }
  }
  std::cout << max_result << std::endl;
}
