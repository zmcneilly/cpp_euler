#include <iostream>
#include <math.h>
#include <vector>
#include <primes.h>

const unsigned long long num(600851475143);
const unsigned long long max = ceil(sqrt(num));

int main() {
  std::vector<bool>* primes = find_primes(max);
  unsigned long long i = max;
  while (num % i > 0 || primes->at(i) == 0) {
    if (i < 0) {
      break;
    }
    i--;
  }
  std::cout << i;
}
