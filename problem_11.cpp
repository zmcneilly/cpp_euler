#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>

const short max = 4;

int main() {
  int grid [20][20];
  std::string line;
  std::ifstream input_file ("problem_10.txt");
  int row = -1;
  if (input_file.is_open()) {
    while ( std::getline(input_file, line)) {
      row++;
      for (int col=0; col < 20; col++) {
        grid[row][col] = atoi(line.substr(0, 2).c_str());
        line.erase(0,3);
      }
      std::cout << grid[row] << std::endl;
    }
    input_file.close();
  }
}
