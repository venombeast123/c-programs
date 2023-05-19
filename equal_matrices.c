#include<stdio.h>
#include<math.h>

int main()
{
    int n, i = 2, c = 0;
    scanf("%d", &n);
    while (i <= n)
    {
        if (n % i == 0)
        {
            c = c + 1;
        }
        i++;
    }
    if (c == 1)
    {
        printf("no. is prime");
    }
    else
    {
        printf("no. is not prime");
    }
}for(int i=0;i<x;i++){
    for(int j=0;j<y;j++){
    scanf("%d",&b);}}
    int f=0;
    for(int i=0;i<x;i++){
    for(int j=0;j<y;j++){
    if(a[i][j]==b[i][j]){
    f=f+1;}}
    }
    if(f==x*y)
    printf("two matrices are equal\n");
    else
    printf("two matrices are not equal\n");
    return 0;

}