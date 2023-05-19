#include<stdio.h>
#include<math.h>

int main()
{
    int n,p;
    scanf("%d",&n);
    scanf("%d",&p);
    int a[n][p];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<p;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=-0;i<n;i++)
    {
        for(int j=0;j<p;j++)
        {
           for(j=0;j<n;j++){
            if(i==j)
            {
                if(i==j && (i+j)==(n-1)){
                    printf(" ");
                }
                printf("%d ",a[i][j]);
                continue;
            }
            else if((i+j)==(n-1))
            {
              printf("%d ",a[i][j]);
            }
           } 
           printf("\n");
        }
    }
    
    return 0;
} // Second inner part of lower half
        for(j=1; j<=(i*2-1); j++)
        {
            printf("%d", i+1);
        }

        // Third inner part of lower half
        for(j=i+1; j<=N; j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}