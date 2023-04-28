#include<stdio.h>
void main()


{int k,i=1,j=0,num=1,limit;
printf("Enter the limit\n");
scanf("%d",&limit);
for(k=1;k<=limit;k++){
while(i<=k){
if(k%i==0){
j=j+1;
}
i++;}

if(j==2){printf("%d",k);}}

}



