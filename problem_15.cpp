#include <iostream>
#include <iomanip>

inline double * Factorial(int x) {
  double f = (x == 1 ? x : *Factorial(x-1));
  f *= x;
  double *result = &f;
  return result;
}

double nCr(int n, int r) {
  double term_1 = *Factorial(n);
  double term_2 = *Factorial(n-r);
  double term_3 = *Factorial(r);
  return static_cast<double>((term_1)/(term_2 * term_3));
}

int main() {
  const int row = 20, col = 20;
  double result = nCr(row+col, col);
  std::cout << std::setprecision(12) << result << std::endl;
}
