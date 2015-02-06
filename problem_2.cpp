#include <iostream>
using namespace std;

int is_odd(int num) {
  return num & 1;
}

long fib(int n) {
  long a(0), b(1), i(0);
  while (i < n) {
    b = a + b;
    a = b - a;
    i += 1;
  }
  return b;
}

int main() {
  long total(0), max(4000000);
  long res(0);
  for (int x(1); res <= max; x++) {
    if (is_odd(res) == 0){
      total += res;
    }
    res = fib(x);
  }
  cout << total;
}
