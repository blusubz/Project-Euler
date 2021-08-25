#include <stdio.h>

int main(void)
{
  // find all multiples of 3 and 5 from 0 - 1000
  int total = 0;

  for (int i = 0; i < 1000; i++)
  {
    if (i % 3 == 0 || i % 5 == 0)
    {
      total += i;
    }
  }
  printf("Total is : %d\n", total);

  return 0;
}
