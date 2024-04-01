#include <stdio.h>

int main() {
    int num, originalNum, reversedNum = 0, remainder;
    printf("Enter a number: ");
    scanf("%d", &num);
    originalNum = num;
    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }
    if (originalNum == reversedNum) {
        printf("%d is a palindrome.\n", originalNum);
    } else {
        printf("%d is not a palindrome.\n", originalNum);
    }

    return 0;
}



/*natural numbers
 int i,n;
printf("");
scanf("");
i=1;
while(i<=n){
printf("%d",i);i++;}

//table:=====
int number;
    printf("enter table:");
    scanf("%d",&number);
    printf("multiplication of table %d:\n",number);
    for(int i=1;i<=10;i++){
        printf("%d x %d =%d\n",number,i,number *i);
    }
    return 0;

//sum of even numbers:====
    #include <stdio.h>
int main() {
    int n,i,sum;
    printf("enter a num:");
    scanf("%d",&n);
    i=2;
    sum=0;
    do{
        sum+=i;
        i +=2;
    }while(i<=n);
    printf("sum of even numbers 1 to %d is:%d\n",n,sum);

}



    */
