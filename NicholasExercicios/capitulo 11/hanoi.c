#include <stdio.h>

int movetower(int height, int frompin, int topin, int usingpin)  //alterei de void pra int, pra poder retornar os valores na funçao main
{
  if (height > 0) {
    movetower(height - 1, frompin, usingpin, topin);
    printf("move from %d to %d\n", frompin, topin);
    movetower(height - 1, usingpin, topin, frompin);
  }
}

int main(int argc, char *argv[]) {
  return movetower(argc > 1 ? atoi(argv[1]) : 3, 1, 3, 2);
}

// Quebra de cabeça - Torre de hanói.
