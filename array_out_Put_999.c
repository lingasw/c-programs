#include <stdio.h>

int main()
{ 
    int i=0,j,count=0,f=0;
    int b[3];
    int a[6]={5,6,3,7,2,4};
    for(i=0;i<6;i++)
    {
        for(j=i;j<6;j++)
        {
           if((a[i]+a[j])==9)
           {
            printf("the two numbers are = %d,%d",a[i],a[j]);
            b[f]=a[i]+a[j];
               f++;
            count+=1;
           }
        }
    }
    i=0;
    while(count>i)
    {
        printf("%d ",b[i]);
        i++;
    }
    return 0;
}
