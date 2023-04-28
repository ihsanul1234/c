#include<stdio.h>
void main()


{
int num,copy,rev=0;
printf("Enter the number to be checked\n");
scanf("%d",&num);
copy=num;

while(copy!=0){
rev=10*rev+copy%10;
copy=copy/10;

}

if(num==rev){
printf("%d is a palindrome\n",num);}

else{
printf("%d is not a palindrome\n",num);
}}


