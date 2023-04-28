#include<stdio.h>
void main()

{
int num,copy,rev=0;
printf("Enter the number to be checked\n");
scanf("%d",&num);
copy=num;

while(copy!=0){
rev=rev+copy%10;
copy=copy/10;

}

printf("The sum of digits is %d\n",rev);
}



