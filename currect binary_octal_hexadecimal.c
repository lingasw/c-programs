#include<stdio.h>
#include<string.h>
void fun(int num,int a);
int main()
{
    int num,n;
   // char a[100];
    printf("enter number");
    scanf("%d",&num);
    printf("choose the options\n1)is binary \n 2) is octel\n 3)hexadecimal\n");
    scanf("%d",&n);
    switch(n)
    {

        case 1:
	       	printf("binary numbers is \n");
                fun(num,2);
                break;
        case 2:
		printf("octal numbers is \n");
               fun(num,8);
                break;
        case 3:
		printf("octal numbers is \n");
               fun(num,16);
                break;
    }
}
    void fun(int num,int a)
    {
        char b[20];
        int j,i=0,rem;

        while(num>0)
        {
            rem=num%a;
            num=num/a;
         if(rem>9 && rem<16)
         {

             b[i]=rem-10+'A';
	     i++;
            // printf("%s",b[i]);
         }
         else
         {
             b[i]=rem+'0';
	     i++;
           //  printf("%d",b[i]);
         }
        }
	for(j=i-1;j>=0;j--)
	  printf(" %c ",b[j]);
	printf("\n");

    }
