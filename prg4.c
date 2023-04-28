#include<stdio.h>
void main()

{float a,b,c,d,e,f,g,res;
printf("Enter the numbers");
scanf("%f%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f,&g);
res=((a-b/c*d+e)*(f+g));
printf("The required result is %f\n",res);
}
