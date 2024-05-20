#include <stdio.h>
#include <stdlib.h>

// when printing we must use %d\n for int and f and c for float and letter when printing
// when creating variables we must use (int/float/char)


int main()
{
// defining the variables that i need

int num1;
int num2;
int option;
int addResult;



// statements to introduce the user to the calculator
    printf("Welcome to the calculator\n");

    printf("Please enter the first number: ");
// here i take user input, (& links the memory address)
    scanf("%d", &num1);

    printf("Please enter the second number: ");
// here i take the second number
    scanf("%d", &num2);
// ask the user for which one they want
    printf("Please select an option: (Add(1)/Subtract(2)/Multiply(3)/Divide(4))\n");

    scanf("%d", &option);

if (option == 1) {
addResult = num1 + num2;
printf("%d", addResult);
}

    return 0;
}


