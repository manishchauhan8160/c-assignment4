#include<stdio.h>
int main()
{
int i=1,x=5,y;
printf("Table of 5 :\n");
do{
y=x*i;
printf("%d*%d=%d\n",x,i,y);
i++;
}while(i<=10);
}
