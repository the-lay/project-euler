#include <iostream>
//using good old "on-paper" multiplication

void multiply(int* res, int factor) {
  int carry = 0;
  for (int i = 0; i < 256; i++) {
    int digit = res[i];
    digit *= factor;
    digit += carry;
    res[i] = digit % 10;
    carry = digit / 10;
  }
}

int main() {
  int res[256]={}; //array initializing
  res[0] = 1;

  for (int i = 2; i < 100; i++) { multiply(res, i); } //multiplication of 100!

  int digitSum = 0; //counting digits up
  for (int i = 0; i < 256; i++) { digitSum += res[i]; } //counting digits up

  std::cout << "Sum of digits in 100! is " << digitSum << std::endl;
  return 0;
}
