#include <stdio.h>

int func(int arg) {
  int *args = &arg;

  printf("%d %d %d\n", args[0], args[1], args[2]);
  return arg + args[0];
}

//renomeado para .h pois s� tem fun��es, ser� utilizado nos outros dois exerc�cios 9.7a 9.7b.
