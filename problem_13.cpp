#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <stdlib.h>
#include <iomanip>

int main() {
  double total = 0.0;
  std::string line;
  std::ifstream input_file ("problem_13.txt");
  if (input_file.is_open()) {
    while (std::getline(input_file, line)) {
      total += atof(line.c_str());
    }
    input_file.close();
  }
  std::ostringstream ss;
  ss << std::setprecision(12);
  ss << total;
  std::cout << ss.str() << std::endl;
}
