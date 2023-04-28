#include<stdio.h>
void main()

{ int a,b,temp;

printf("Enter the numbers");
scanf("%d%d",&a,&b);
printf("Before swapping %d,%d\n",a,b); 
temp=a;
a=b;
b=temp;
printf("After swapping %d,%d\n",a,b); 
}
