#include <stdio.h>

int main()
{
    int i,j,k,n;
    printf("Input: ");
    scanf("%d",&n);
    for(i=5;i>0;i--)
    {
        int tmp=i,tmp1=n;
        for(k=n-i;k>=1;k--){
            printf("%d",tmp1);
            tmp1--;
            
        }
        for(j=i;j>=1;j--)
        {
            printf("%d",tmp);
        }
        printf("\n");
    }
    return 0;
}
