#include<stdio.h>
int prime(int f);
int main()
{
    int a;
    printf("Enter the number to be checked\n");
    scanf("%d",&a);
    prime(a);
    return 0;
    
}
int prime(int f)
{
   int i=2,c=0;
   while(i<=f)
   {
    if(f%i==0)
    {
        c=c+1;
            
            }
            i++;
   }
   if(c==1)
   printf("no. is prime");
   else
   printf("no. is not prime");
   return f;
}h(a>0)
    {
        case 1:printf("no. is positive");
        break;
        case 0:switch(a<0)
        {
            case 1:printf("no. is negative");
            break;
            case 0:printf("no. is zero");
        }
    }
}
    
   