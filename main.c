// Author: Krish Choudhary ksc5496@psu.edu

#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int digit_sum(int n)
{
  if(n == 0)
  {
    return 0;
  }
  else 
  {
    return n%10 + digit_sum(n/10);
  }
}

int main(void)
{
  char*s = readline("Enter an int: ");
  int num = atof(s);
  int sum = digit_sum(num);
  printf("sum of digits of %s is %d.\n",s,sum);
  return 0;
}