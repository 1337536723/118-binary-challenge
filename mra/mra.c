#include <stdio.h>

void flag()
{
  int secret[12] = {2067280177, 0, 1601008180, 0, 928986417, 0, 1717515112, 0, 1920284533};
  for (int i = 0; i < 12; i += 2) {
    printf("%s", (char *)&secret[i]);
  }
  printf("3}\n");
}

int main()
{
  flag();
}
