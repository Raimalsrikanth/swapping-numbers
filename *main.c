#include<stdio.h>
#include<stdlib.h>
int main()
{
  int a,b;
  Printf("Enter the two values to swap\n");
  Scanf("%d%d",&a,&b);
  Printf("before swapping a=%d and b=%d\n",a,b);
  a=a+b;
  b=a-b;
  a=a-b;
  Printf("After swapping a=%d and b=%d",a,b);
  return0;
}
