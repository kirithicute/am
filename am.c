#include <stdio.h>
 
int main()
 
{
 
  int n1, n2, i, temp, n, rem;
 
  printf("Enter two numbers(intervals): ");
 
  scanf("%d %d", &n1, &n2);
 
  printf("Armstrong numbers between %d an %d are: ", n1, n2);
 
  for(i=n1+1; i<n2; ++i)
 
  {
 
      temp=i;
 
      n=0;
 
      while(temp!=0)
 
      {
 
          rem=(temp%10);
 
          n+=rem*rem*rem;
 
          temp/=10;
 
      }
 
      if(i==n)
 
      {
 
          printf("%d ",i);
 
      }
 
  }
 
  return 0;
 
}
