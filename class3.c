//1.wap to print first 10 natural no using for loop
/* #include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=10;i++)
    printf("%d ",i);
    return 0;
}  */
//or using while loop
/* #include<stdio.h>
int main()
{
    int i=0;
    while(i<10)
    {
    printf("%d ",i);
    i++;
    }
    
    return 0;
} */
//using do-while loop
/* #include<stdio.h>
int main()
{
    int i=0;
    do
    {
    printf("%d ",i);
    ++i;
    }
    while(i<10);
    return 0;
} */
//2.wap to print first 10 natural no in reverse order without using decrement operator
/* #include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=10;i++)
    printf("\n %d ",11-i);
    return 0;
} */
/* 3.wap to print first 10 natural no in reverse order
#include<stdio.h>
int main()
{
    int i;
    for(i=10;i>0;i--)
    printf("\n %d ",i);
    return 0;
}  */
//4.wap to print first n odd natural no
/* #include<stdio.h>
int main()
{
    int i,n;
    printf("enter a no ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    printf("\n %d ",2*i-1);
    return 0;
} */

//5.wap to print  first n even natural no
/* #include<stdio.h>
int main()
{
    int i,n;
    printf("enter a no ");
    scanf("%d",&n);
    for(i=1;2*i<=2*n;i++)
    printf("\n%d",2*i);
    return 0;
} */
