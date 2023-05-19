#include<stdio.h>
#include<math.h>

int main()
{
    int a[3][3];
    printf("eneter the the value in matrix\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int b[3][3];
    for(int i=0;i<3;i++)
    for(int j=0;j<3;j++)
    {
        b[i][j]=a[j][i];
    }
    printf("the tranpose of matrix will be\n");
    for(int i=0;i<3;i++)
    {
    for(int j=0;j<3;j++)
    {
        printf("%d\t",b[i][j]);
    }
    printf("\n");
    }
    return 0;
}=1; j<=i; j++)
        {
            printf("*");
        }
 
        printf("\n");
    }
 
    // Prints lower triangular part of the pattern
    for(i=n; i>=1; i--)
    {
        for(j=i; j<n; j++)
        {
            printf(" ");
        }
        
        // Print the name
        if(i == n) 
        {
            for(j=1; j<=(n * 2-len)/2; j++)
            {
                printf("*");
            }   

            printf("%s", name);

            for(j=1; j<(n*2-len)/2; j++)
            {
                printf("*");
            }
        }
        else 
        {
            for(j=1; j<=(i*2)-1; j++)
            {
                printf("*");
            }
        }
 
        printf("\n");
    }
 
    return 0;
}
