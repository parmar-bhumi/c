#include<stdio.h>
int main()
{
    int array [2][3][3]={
    {
        (1,2,3),(4,5,6),(7,8,9)
    }
    {
     (11,12,13),(14,15,16),(17,18,19)
    }
    };
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            for(k=0;k<=2;k++)
            {
                printf("\t[%d][%d][%d]=%d",k,i,j,array[k][i][j])
            }
            printf("\n");
        }
        printf("\n");
    }
}
