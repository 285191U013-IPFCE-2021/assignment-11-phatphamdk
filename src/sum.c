#include "sum.h"

#include<stdio.h>
#include<assert.h>

/* Sum integers 1 to n */
int sum (int n)
{
/* pre-condition */
  assert (n >= 1);
/* post-condition */
  if (n > 1)
    return n + sum (n - 1);
  else
    return 1;
}

/* Sum integers 1 to n */
int sumtail (int n, int total)
{
    if (n==1){
      return 1 + total;
    }
    else if(n>1) {
      return sumtail(n-1, total + n);
    }
}

/* Sum integers 1 to n */
int sumwhile (int n)
{
  int count=0;
  int i =0;
  while(i<n){
    i++;
    count = count + i;
  }
  return count;
}

