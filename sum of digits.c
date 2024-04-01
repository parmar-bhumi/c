#include<stdio.h>

int main ()
{
    int num, sum = 0;
    num = 1234;
    while(num!=0){
        sum += num % 10;
        num = num / 10;
    }
    printf(" The Sum is: %d\n",sum);
    return 0;


}
