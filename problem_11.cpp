#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>

const short max = 4;

int main() {
  int grid [20][20];
  std::string line;
  std::ifstream input_file ("problem_11.txt");
  int row = -1;
  int max_product = 0;
  if (input_file.is_open()) {
    while ( std::getline(input_file, line)) {
      row++;
      for (int col=0; col < 20; col++) {
        grid[row][col] = atoi(line.substr(0, 2).c_str());
        line.erase(0,3);
      }
    }
    input_file.close();
  }
  for (int row=0; row < 20; row++) {
    for (int col=0; col < 20; col++) {
      int product = 1;
      // Right
      for (int position = 0; position < 4 && col+position < 20; position++) {
        product *= grid[row][col+position];
      }
      if (product > max_product) { max_product = product; }
      product = 1;
      // Diagonal R2L
      for (int position = 0; position < 4 && col-position > 0 && row+position < 20; position++) {
        product *= grid[row+position][col-position];
      }
      if (product > max_product) { max_product = product; }
      product = 1;
      // Diagonal L2R
      for (int position = 0; position < 4 && col+position < 20 && row+position < 20; position++) {
        product *= grid[row+position][col+position];
      }
      if (product > max_product) { max_product = product; }
      product = 1;
      // Down
      for (int position = 0; position < 4 && row+position < 20; position++) {
        product *= grid[row+position][col];
      }
      if (product > max_product) { max_product = product; }
    }
  }
  std::cout << max_product << std::endl;
}
