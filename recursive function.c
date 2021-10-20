#include<stdio.h> 
#include<conio.h>
int sumofdigit(int num);
void main()
{
  int num,sum;
  printf("enter the nuumber:\t");
  scanf("%d",&num);
  sum=sumofdigit(num);
  printf("the sum of digits of %d is: %d",num ,sum);
}
int sumofdigit(int num)
{
  int s,a;
  s=s+(num%10);
  a=num/10;
  if(a>0)
  {
    sumofdigit(a);
   
  }
  return s;
}
