#include <iostream>
#include <math.h>
#include <bitset>

const unsigned long long num(600851475143);
const unsigned long long max = ceil(sqrt(num));

std::bitset<num>* find_primes() {
  std::bitset<num>* primes = new std::bitset<num>;
  primes->set();
  primes->reset(0);
  primes->reset(1);
  for (unsigned long long x(2); x <= max; x++) {
    for (unsigned long long y(2); x * y < num; y++) {
      primes->reset(x * y);
    }
  }
  return primes;
}

int main() {
  std::bitset<num>* primes = new std::bitset<num>; 
  primes = find_primes();
  unsigned long long i = max;
  while (num % i > 0 || primes[i] == 0) {
    if (i < 0) {
      break;
    }
    i--;
  }
  std::cout << i;
}
