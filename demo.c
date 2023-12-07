#include <stdio.h>
#include<string.h>
int main() {
    char name[100]; //for string always use a char array
    printf("Enter your name: ");
    //scanf("%s", &name);
    gets(name); //use gets for string value input
    fflush(stdin); //use this function to avoid input buffer

    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    fflush(stdin);//use this function to avoid input buffer

    //for string the format specifier is %s
    if (age >= 18) {
        printf("Congratulations, %s, you are eligible to vote\n", name);
    } else {
        printf("Sorry, %s, you are not eligible to vote\n", name);
    }

    return 0;
}
