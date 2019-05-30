#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void fun()
{
  system("sh");
}

int main()
{
  setvbuf(stdin, 0, 2, 0);
  setvbuf(stdout, 0, 2, 0);
  char a[0x20];
  read(0, a, 0x29);
  return 0;
}
