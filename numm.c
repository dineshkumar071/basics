#include<stdio.h>
int main()
{
 int sum=0,n=0;
  printf("enter the number to be added");
  scanf("%d,&n");
  for(int i=0;i<=n;i++)
  {
   printf("enter th number");
    scanf("%d",&i);
    sum=sum+i;}
    printf("\n sum=%d",sum);
    return 0;
    }
