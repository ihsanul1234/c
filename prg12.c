#include<stdio.h>
void main()


{int i=1,j=0,num;
printf("Enter the number\n");
scanf("%d",&num);

while(i<=num){
if(num%i==0){
j=j+1;
}
i++;}

if(j==2){

printf("%d is a prime number\n",num);
}

else

{printf("%d is a not prime number\n",num);}}

