/* #include<stdio.h>
int main()
{   int i,j;
    for(i=1;i<=5;i++)
    for(j=i+1;j<=4;j++)
        printf("%d",2*j-1);
    return 0;
} */



/* #include<stdio.h>
int main()
{   int i=5,j=1;
    while(i)
    {
        j=i*j;
        i--;
    }
        printf("%d %d",i,j);
    return 0;
}  */




/* #include<stdio.h>
int main()
{   int x=1,y=10;
while(x<y)
{
    x++;
    y--;
}
        printf("%d %d",x,y);
    return 0;
} */




#include<stdio.h>
int main()
{   int i=2,x=36;
while(x>1)
{
while(x%i==0)
{
    x/=i;        //x=x/i;
    printf("%d",i);
}
i++;

}
    return 0;
}


/* #include<stdio.h>
int main()
{   int x=(1,2,3);
while(x)
{
    printf("%d",x);
    x--;
}
    return 0;
}  */



/* #include<stdio.h>
int main()
{   int x;
    x=1,2,3;
while(x)
{
    printf("%d",x);
    x--;
}
    return 0;
}  */




//wap to calculate sum of n odd natural no
/* #include<stdio.h>
int main()
{
    int i,n;
    int s=0;
    printf("enter a no");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    s=s+2*i-1;
    {
        printf("%d",s);
    }

    return 0;
} */



/* #include<stdio.h>
int main()
{
    int x=8;
    for(;x;x>>=1)
    printf("%d ",x);
    return 0;
} */
