#include<stdio.h>
void main()


{ int num,i=0,j=1;

printf("Enter the number till which the sum has to be found\n");
scanf("%d",&num);

do{i=i+j;
j=j+1;}

while(j<=num);

printf("The sum of first %d natural numbers is %d\n",num,i);
}


