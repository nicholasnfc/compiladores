#include <stdio.h> 

int func() {
  static int x = 12;
  x *= 2;
  return x;
}

int main() {
  printf("%d %d %d\n", func(), func(), func());
  return 0;
}
// incluir stdio.h, por causa do printf.
