#include <stdio.h> //N�o havia referencia a biblioteca stdio.h para utilizar a fun��o printf.
//TokenThread usa listas de �ndices de 8 ou 12 bits em uma tabela de ponteiros
#define STKSIZ 20000
long stack[STKSIZ], *sp = stack;
#define INTEGER 1
#define ADD     2
#define EXIT    3

typedef int F;
F *ip;
#define NEXT break
void interp()
{
  F codigo[] = { INTEGER, 3, INTEGER, 5, ADD, EXIT };
  
  ip = codigo;
  for (;;)
    switch (*ip++) {
      case INTEGER: *sp++ = (long)*ip++; NEXT;
      case ADD: sp--; sp[-1] += sp[0]; NEXT;
      case EXIT: printf("%d\n", sp[-1]); return;
    }
}

