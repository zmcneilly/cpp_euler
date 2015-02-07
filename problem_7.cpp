#include <iostream>
#include <vector>
#include <primes.h>

const int max = 1000000;
const int goal = 10001;
std::vector<bool>* find_primes(unsigned long max);
std::vector<bool>* primes = find_primes(max);

int main() {
  int i=0, last=1;
  while (i++ < goal) {
    while (primes->at(++last) != 1);
  }
  std::cout << last << std::endl;
}
