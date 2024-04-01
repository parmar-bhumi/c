#include<stdio.h>
int main()
{
    int i,n,flag =0;
    printf("enter a number");
    scanf("%d",&n);
    if(n==1){
        flag=1;
    }
    for(i=2;i<n;i++){
        if(n%i==0){
            flag = 1;
            break;
        }
    }
    if(flag==0){
        printf("%d is prime num",n);}
    else{
        printf("%d is not a pnumber",n);
    }
    return 0;
}



/*int num1,num2;
    num1=20;
    num2=10;
    if(num1>num2){
        printf("the number is big %d",i);
    }else{
        printf("the number is small %d",i);
    }
    return 0;

    int year;
    printf("enter a year");
    scanf("%d",&year);
    if(year  % 400 ==0){
        printf("%d is leap year",year);
    }else{
    printf("%d is not a leap year",year);}

    */




