#include <stdio.h>

int func(int arg) {
  int *args = &arg;

  printf("%d %d %d\n", args[0], args[1], args[2]);
  return arg + args[0];
}

//renomeado para .h pois só tem funções, será utilizado nos outros dois exercícios 9.7a 9.7b.
