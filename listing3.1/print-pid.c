#include <stdio.h>
#include <unistd.h>
int main ()
{
  printf ("El id del proceso es: %d\n", (int) getpid ());
  printf ("EL padre del proceso es: %d\n", (int) getppid ());
  return 0;
}
