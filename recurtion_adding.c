#include <stdio.h>
int fun(int );
int main()
{
    int a=10;
    printf("=%d",fun(a));
    return 0;
}
int fun(int a)
{
    //int b;
    if(a==0)
      return 1;
    else if(a==1)
    {
     printf("%d",a);
    }
    else
     printf("%d+",a);
     
    return (a+fun(a-1));

}
