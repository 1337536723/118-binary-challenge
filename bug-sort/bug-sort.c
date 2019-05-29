#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int cmp(const void *a, const void *b)
{
   return (*(unsigned short *)a - *(unsigned short *)b);
}

void fun()
{
  char a[0x28];
  puts("Welcome to bug sort!");
  puts("Please enter 20 numbers:");
  for (int i = 0; i < 20; ++i) {
    scanf("%hu", &((unsigned short *)a)[i]);
  }
  puts("Here is the result:");
  qsort(a, 24, sizeof(unsigned short), cmp);
  for (int i = 0; i < 20; ++i) {
    printf("%hu ", ((unsigned short *)a)[i]);
  }
  printf("\n");
  puts("Thank you, please enter your name:");
  read(0, a, 0x30);
  return;
}

int main()
{
  setvbuf(stdin, 0, 2, 0);
  setvbuf(stdout, 0, 2, 0);
  fun();
  puts("Here is the shell");
  system("sh");
  return 0;
}
