#include <vector>

std::vector<bool>* find_primes(unsigned long max) {
  /*
   * Return a vector where vector.at(prime number) = 1 and all other numbers it is 0
   */
  std::vector<bool>* primes = new std::vector<bool>;
  primes->assign(max, true);
  primes->at(0) = false;
  primes->at(1) = false;
  for (unsigned long long x(2); x <= max; x++) {
    for (unsigned long long y(2); x * y < max; y++) {
      primes->at(x * y) = false;
    }
  }
  return primes;
}
