#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// Complete the following function.

int find_nth_term(int n, int a, int b, int c)
{
  if (n == 3)
  {
    return c;
  }
  else
  {
    n--;
    int temp = a;
    a = b;
    b = c;
    c = a + b + temp;
    // printf("\n%d %d", n, c);
    find_nth_term(n, a, b, c);
  }
}

int main()
{
  int n, a, b, c;

  scanf("%d %d %d %d", &n, &a, &b, &c);
  int ans = find_nth_term(n, a, b, c);

  printf("%d", ans);
  return 0;
}