

#include <stdio.h>

 

/* Swap function definition */

void swap1(int num1, int num2)

{

    int temp;

 

 

    printf("In Function values before swapping: %d %d\n", num1, num2);

 

    temp = num1;

    num1 = num2;

    num2 = temp;

 

    printf("In Function values after swapping: %d %d\n\n", num1, num2);

}

void swap(int * num1, int * num2)

{

    int temp;

   printf("In Function values before swapping: %d %d\n", *num1, *num2);

     temp  = *num1;

    *num1 = *num2;

    *num2 = temp;

 

    printf("In Function values after swapping: %d %d\n\n", *num1, *num2);

}

 

int main()

{

    int n1, n2;

    printf("By value:\n");

 

    /* Input two integers from user */

    printf("Enter two numbers: ");

    scanf("%d%d", &n1, &n2);

 

    /* Print value of n1 and n2 in before swapping */

    printf("In Main values before swapping: %d %d\n\n", n1, n2);

 

    /* Function call to swap n1 and n2 */

    swap1(n1, n2);

    printf("In Main values after swapping: %d %d", n1, n2);

    printf("\n");

   

    printf("By ref:\n");

    int n3, n4;

 

    printf("Enter two numbers: ");

    scanf("%d%d", &n3, &n4);

 

    printf("In Main values before swapping: %d %d\n\n", n3, n4);

 

    /*

     * &n1 - & evaluate memory address of n1

     * &n2 - & evaluate memory address of n2

     */

    swap(&n3, &n4);

 

    printf("In Main values after swapping: %d %d", n3, n4);

   

 

    return 0;

}