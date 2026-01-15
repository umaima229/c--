// ===============code no 1 ==========
#include <stdio.h>

int main() {
    float height;
    int age;
    char name[25], gender[2];

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter gender (f/m): ");
    scanf("%s", gender);

    printf("Enter height: ");
    scanf("%f", &height);

    printf("\n\n******** BIO DATA ********\n");
    printf("Name   : %s\n", name);
    printf("Age    : %d\n", age);
    printf("Gender : %s\n", gender);
    printf("Height : %.2f\n", height);

    return 0;
}

// =============code no 2==================

#include <stdio.h>

int main()
{
    char ch = 'K';
    char str[] = "Computer Science";
    int num = 430;
    float fnum = 69.07;

    printf("character = %c\n\n", ch);
    printf("string = %s\n\n", str);
    printf("integer = %d\n\n", num);
    printf("floating = %.2f\n", fnum);

    return 0;
}