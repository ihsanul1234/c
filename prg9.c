#include<stdio.h>
void main()

{ int a,b,option,res;

printf("Enter the numbers\n");
scanf("%d%d",&a,&b);
printf("The options are:\n 1-sum\n 2-difference\n 3-product\n 4-division\n");
scanf("%d",&option);
switch(option)
{
case 1:
res=a+b;
printf("The sum is %d\n",res);
break;
case 2:
res=a-b;
printf("The difference is %d\n",res);
break;
case 3: 
res=a*b;
printf("The product is %d\n",res);
break;
case 4:
res=a/b;
printf("%d / %d is %d \n",a,b,res);
break;
default:
printf("Error\n");
break;
}}
