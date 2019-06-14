#include<stdio.h>
#include<conio.h>
void main()
{

    int n,num[5],k;

    printf("Enter the array elements");
    for(n=0;n<5;n++)
    scanf("%d",&num[n]);
    printf("Enter the num to scearch in the list");
    scanf("%d",&k);
    for(n=0;n<5;n++)
        if(k==num[n])
        break;
    if(n<5)
    {

        printf("the position of the list %d is:%d",k,++n);

    }
    else
        printf("\n number is not found");
    getch();

}
