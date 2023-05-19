#include<stdio.h>
#include<math.h>
int main()
{
    int n,s=0,p=1,c;
    scanf("%d\n",&n);
    while(s<=n)
    {
      printf("%d,  ",s);
      c=s+p;
      s=p;
      p=c;

    }
  return 0;  
}   }
        for(j=(i-1)*2-1; j>=1; j-=2)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}