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


// =================Practical no 4==============
#include <stdio.h>

int main() {
    int ring, earing, necklace, bangles, nosepin, total;
    float discount, amount;

    // Input for different jewelry items
    printf("Enter amount of ring: ");
    scanf("%d", &ring);
    printf("Enter amount of earing: ");
    scanf("%d", &earing);
    printf("Enter amount of necklace: ");
    scanf("%d", &necklace);
    printf("Enter amount of bangles: ");
    scanf("%d", &bangles);
    printf("Enter amount of nosepin: ");
    scanf("%d", &nosepin);

    // Calculating total amount
    total = ring + earing + necklace + bangles + nosepin;

    // Display receipt
    printf("\n\n\n\n\n\n\n");
    printf("\t\t\t***************\n");
    printf("\t\t\tJewelry Receipt\n");
    printf("\t\t\t***************\n");
    printf("\t\t\tAmount of ring is: %d\n", ring);
    printf("\t\t\tAmount of earing is: %d\n", earing);
    printf("\t\t\tAmount of necklace is: %d\n", necklace);
    printf("\t\t\tAmount of bangles is: %d\n", bangles);
    printf("\t\t\tAmount of nosepin is: %d\n", nosepin);
    printf("\t\t\tTotal amount is: %d\n", total);

    // Apply discount if total is greater than or equal to 1000
    if (total >= 1000) {
        discount = total * 0.05;
        amount = total - discount;
        printf("\t\t\tDiscount is: %.2f\n", discount);
        printf("\t\t\tAmount to pay today is: %.2f\n", amount);
    } else {
        printf("\t\t\tNo discount applicable.\n");
    }

    return 0;
}
// =============Practical no 7=============
#include <stdio.h>

int main() {
    char alpha;
    
    printf("\t*~* Program to check if the character is Numeric, Special, ");
    printf("Upper Case, or Lower Case *~*\n\n");
    printf("\t\tEnter a character: ");
    

    scanf("%c", &alpha);


    if (alpha >= '0' && alpha <= '9') {
        printf("\n\n\t\t%c is a Numeric Character\n", alpha);
    }
    
    else if (alpha >= 'a' && alpha <= 'z') {
        printf("\n\n\t\t%c is a Lower Case letter\n", alpha);
    }
    
    else if (alpha >= 'A' && alpha <= 'Z') {
        printf("\n\n\t\t%c is an Upper Case letter\n", alpha);
    }
 
    else {
        printf("\n\n\t\t%c is a Special Character\n", alpha);
    }

    return 0;
}
     
// ================prctial mo 8=================
#include <stdio.h>

int main() {
    int c;
    float a, b;

    // Menu options
    printf("\t\t\t~*~MENU~*~");
    printf("\n\n\t\t\t1. Add");
    printf("\n\t\t\t2. Subtraction");
    printf("\n\t\t\t3. Multiply");
    printf("\n\t\t\t4. Division");
    printf("\n\t\t\tEnter Menu Option: ");
    scanf("%d", &c);

    // Taking two numbers as input
    printf("\n\t\t\tEnter 1st number: ");
    scanf("%f", &a);
    printf("\n\t\t\tEnter 2nd number: ");
    scanf("%f", &b);

    // Perform operation based on user choice
    switch(c) {
        case 1:
            printf("\n\t\t\tAnswer: %.2f\n", a + b);
            break;
        case 2:
            printf("\n\t\t\tAnswer: %.2f\n", a - b);
            break;
        case 3:
            printf("\n\t\t\tAnswer: %.2f\n", a * b);
            break;
        case 4:
            if (b != 0)
                printf("\n\t\t\tAnswer: %.2f\n", a / b);
            else
                printf("\n\t\t\tError: Division by zero is not allowed.\n");
            break;
        default:
            printf("\n\t\t\tInvalid Menu Option\n\n");
    }

    return 0;
}


// =========practicle no 9 ============
#include <stdio.h>
#include <conio.h>  // To use getche()

int main() {
    char ch;
    
    printf("\t*~* Program That Shows Character Is Vowel Or Consonant *~*");
    printf("\n\t\tEnter The Letter: ");
    
    ch = getche();  // User input for character
    
    // Switch case to check if the character is a vowel
    switch(ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("\n\t\t%c Is A Vowel\n", ch);
            break;
        default:
            printf("\n\t\t%c Is A Consonant\n", ch);
    }

    return 0;
}

// ===================practicle no 10=============
#include <stdio.h>

int main() {
    float t1, t2, t3, t4, t5, t6, t7, avg;

    // Taking temperature inputs
    printf("\nEnter first temperature: ");
    scanf("%f", &t1);
    
    printf("\nEnter second temperature: ");
    scanf("%f", &t2);
    
    printf("\nEnter third temperature: ");
    scanf("%f", &t3);
    
    printf("\nEnter fourth temperature: ");
    scanf("%f", &t4);
    
    printf("\nEnter fifth temperature: ");
    scanf("%f", &t5);
    
    printf("\nEnter sixth temperature: ");
    scanf("%f", &t6);
    
    printf("\nEnter seventh temperature: ");
    scanf("%f", &t7);

    // Calculating the average temperature
    avg = (t1 + t2 + t3 + t4 + t5 + t6 + t7) / 7;

    // Printing the average temperature
    printf("\n\nThe average temperature is: %.2f\n", avg);
  
    return 0;
}

