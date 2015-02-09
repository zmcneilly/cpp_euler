#include <iostream>
#include <math.h>

int number_of_factors(long number) {
  int result = 0;
  int max = ceil(sqrt(number));
  for (int i=1; i <= max; i++) {
    if (number % i == 0) {
      result += 2;
    }
  }
  return result;
}

int main() {
  int t_num = 1;
  int count = 2;
  while (number_of_factors(t_num) < 500) {
    t_num += count;
    count++;
  }
  std::cout << t_num << std::endl;
}
