#include <stdio.h>

#define STKSIZ 20000
long stack[STKSIZ], *sp = stack;
typedef void (*F)(void);

F *ip;
void interp()
{
  F codigo[] = { &&Integer, (F)3, &&Integer, (F)5, &&Add,  &&Exit }; //operador de cast estava errado.

#define NEXT goto **ip++
  ip = codigo;
  NEXT;
  Integer: *sp++ = (long long)*ip++; NEXT; //máquinas/compilador 64 bits. Alterei de long, para long long.
  Add: sp--; sp[-1] += sp[0]; NEXT;
  Exit: printf("%d\n", sp[-1]); return;
}// DirectThreading é um modelo de threading

