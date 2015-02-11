#include <iostream>
#include <gmpxx.h>

int main() {
  mpz_class large_int;
  mpz_pow_ui(large_int.get_mpz_t(), mpz_class("2").get_mpz_t(), 1000);
  int total = 0;
  for (char& c : large_int.get_str()) {
    total += (int) c-'0';
  }
  std::cout << total << std::endl;
}

