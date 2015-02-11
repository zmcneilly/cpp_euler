#include <iostream>
#include <gmpxx.h>

int main() {
  mpz_class large_int; // C++ wrapper around GMP
  /*
   * Some useful functions are used here
   * mpz_class.get_mpz_t() returns an mpz_t instance of the mpz_class object
   * This function performs a power operation on the mpz_t object passed to it
   */
  mpz_pow_ui(large_int.get_mpz_t(), mpz_class("2").get_mpz_t(), 1000);
  int total = 0;
  // for (var : iterable object) is python equivalent for var in iterable:
  for (char& c : large_int.get_str()) {
    total += (int) c-'0';
  }
  std::cout << total << std::endl;
}

