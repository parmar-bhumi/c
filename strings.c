#include <stdio.h>
#include <string.h>

int main() {
   char str1[20] = "Hello ";
   char str2[20] = "mca!";
   strcat(str1, str2);
   printf("Concatenated string: %s\n", str1);
   return 0;
}


/*strlen----
char s1 [50];
    printf("enter a string :");
    scanf("%s",s1);
    printf("%d",strlen(s1));

//strcpy----
char s1 [50],s2[20];
    printf("enter a string :");
    scanf("%s",s1);
    printf("%d",strcpy(s1,s2));


//strcmp------
char s1 [50],s2[20];
    printf("enter a string1 :");
    scanf("%s",s1);
    printf("enter a string2 :");
    scanf("%s",s1);
    printf("%d",strcmp(s1,s2));


//strupr------
char s1 [50],s2[20];
    printf("enter a s1 :");
    scanf("%s",s1);
    printf("%s",strupr(s1));

    */
