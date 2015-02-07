#include <iostream>
#include <primes.h>
#include <vector>

const int max = 2000000;

int main() {
  std::vector<bool>* primes = find_primes(max);
  unsigned long total = 0;
  for (int i=0; i < max; i++) {
    if (primes->at(i) == true) {
      total += i;
    }
  }
  std::cout << total << std::endl;
}
