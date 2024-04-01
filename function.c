#include<stdio.h>
int main()
{
    int factorial(int n)
    {
        if(n==0){
            printf("%d", 1);
        }
        else {
            printf("%d", n * factorial(n-1));}
    }
}

