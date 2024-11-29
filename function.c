#include <stdio.h>

int add3(int a, int b, int c)
{
  int result = a + b + c;
  return result;
}

int main() {
  printf("add3 = %i\n",add3(3,67,42));
}