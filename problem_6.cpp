#include <iostream>

int main() {
  int tot = 0, sqs = 0;
  for (int x=0; x < 101; x++) {
    tot += x;
    sqs += (x*x);
  }
  std::cout << tot * tot - sqs << std::endl;
}
