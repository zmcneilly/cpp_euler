#include <iostream>
using namespace std;
int main() {
  int result(0), max(1000), c(0);
  while (++c * 3 < max) {
    int five_result(c * 5);
    if (five_result < max) {
      result += five_result;
    }
    result += c * 3;
  }
  for (int i(15); i < max; i += 15) {
    result -= i;
  }
  cout << "Result: " << result << endl;
}
