#include<stdio.h>
void main(){
int n,i,j;
printf("Enter the number");
scanf("%d",&n);
if(n<3)
printf("%d",n);
if(n<5 && n>=3)
{
i=n%3+n/3;
printf("%d",i);
}
if(n>=5)
{
j=n%5+n/5;
printf("%d",j);
}
}
