// ===============practicle no 1 ==========
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

// =============practicle no 2==================

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
// =============practicle no 15==================

#include <stdio.h>

int main()
{
    int col, row;

    for(row = 1; row < 12; row++)
    {
        for(col = 1; col < 12; col++)
        {
            if((row + col) % 2 == 0)
                printf("*");  
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
// =================practicle no 3============= 
#include<stdio.h>
#include<math.h>

int main()
{
    int a, b, r;
    float s, t;

    printf("*~* Calculating Area Of Triangle & Volume Of Sphere *~*\n");

    printf("\nEnter Altitude Of Triangle: ");
    scanf("%d", &a);

    printf("Enter Base Of Triangle: ");
    scanf("%d", &b);

    printf("Enter Radius Of Sphere: ");
    scanf("%d", &r);

    t = (1.0/2.0) * (a * b);
    s = (4.0/3.0) * 3.14 * pow(r, 3);

    printf("\n*~* Results *~*");
    printf("\nAltitude of triangle : %d", a);
    printf("\nBase of triangle     : %d", b);
    printf("\nRadius of sphere     : %d", r);

    if (t < s)
    {
        printf("\nArea of triangle = %.2f", t);
        printf("\nVolume of sphere = %.2f", s);
    }
    else
    {
        printf("\nVolume of sphere = %.2f", s);
        printf("\nArea of triangle = %.2f", t);
    }

    return 0;
}



// ==================practicle 6 ===============
#include <stdio.h>

int main()
{
    int eng, comp, sindhi, pak, chem;
    int total;
    float percentage;
    char grade;

    printf("\n\t*** Marks Of A Student ***\n");

    printf("\nEnter English Marks: ");
    scanf("%d", &eng);

    printf("Enter Computer Marks: ");
    scanf("%d", &comp);

    printf("Enter Sindhi Marks: ");
    scanf("%d", &sindhi);

    printf("Enter Chemistry Marks: ");
    scanf("%d", &chem);

    printf("Enter Pak Studies Marks: ");
    scanf("%d", &pak);

    total = eng + comp + sindhi + chem + pak;
    percentage = (total * 100.0) / 500;

    printf("\n\t*** Marksheet Of A Student ***\n");
    printf("\nEnglish      : %d", eng);
    printf("\nComputer     : %d", comp);
    printf("\nSindhi       : %d", sindhi);
    printf("\nChemistry    : %d", chem);
    printf("\nPak Studies  : %d", pak);

    printf("\n\nTotal Marks : %d / 500", total);
    printf("\nPercentage  : %.2f %%", percentage);

    if (percentage >= 80)
        grade = 'A';
    else if (percentage >= 70)
        grade = 'B';
    else if (percentage >= 60)
        grade = 'C';
    else if (percentage >= 40)
        grade = 'D';
    else
        grade = 'F';

    printf("\nGrade        : %c", grade);

    if (percentage >= 40)
        printf("\nResult       : PASS");
    else
        printf("\nResult       : FAIL");

    return 0;
}
// ============practicle 5=============
#include <stdio.h>

int main()
{
    int age1, age2;

    printf("\t\t*~* Program that tells who is elder among two persons *~*\n\n");

    printf("\t\tEnter your age: ");
    scanf("%d", &age1);

    printf("\t\tEnter friend's age: ");
    scanf("%d", &age2);

    printf("\n\t\tYour age      : %d", age1);
    printf("\n\t\tFriend's age  : %d\n", age2);

    if (age1 > age2)
        printf("\n\t\t*~* You are elder *~*\n");
    else if (age2 > age1)
        printf("\n\t\t*~* Your friend is elder *~*\n");
    else
        printf("\n\t\t*~* Both are of same age *~*\n");

    return 0;
}

// =========================practicle no 11===================
#include <stdio.h>

int main() {
    printf("\n\n\t*** ASCII CODE *** \n\n");

    for (int i = 0; i <= 225; i++)
        printf("%d = %c\t", i, i);  // tab for spacing

    printf("\n");
    return 0;
}

// yesterday practicle no 4 ,7,8,9,10