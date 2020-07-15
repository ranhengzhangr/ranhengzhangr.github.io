#include <stdio.h>

#define PI 3.1415927

int main(void)
{
  double r, v;

  while(scanf("%lf", &r) != EOF)
  {
      v = r * r * r * PI * 4.00 / 3.00;
      printf ("%.3lf\n", v);
  }

  return 0;

}
