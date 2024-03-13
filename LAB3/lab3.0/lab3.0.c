#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// In the lab document, each task is supposed to be a different code file; 
// however, we have performed all of the tasks in a single code file.

// Display
void displayArguments(int argc, char *argv[]);
//sum
void argumentSum(int argc, char *argv[]);
//factorial
void factorial(int );
// reverse
void reverseString(char *);

int main(int argc, char *argv[]) {
    // Task 1: Simple Argument Display
    displayArguments(argc, argv);
    
    // Task 2: Argument Summation
    argumentSum(argc, argv);
    
    // Task 3: reverseString
    if (argc == 2) {
        reverseString(argv[1]);
    }
    
    // Task 4: factorial
    if (argc == 2) {
        int num = atoi(argv[1]);
        factorial(num);
    }
    
    
    return 0;
}

// Display
void displayArguments(int argc, char *argv[]) {
    printf("Number of arguments: %d\n", argc);
    for (int i = 1; i < argc; i++) {
        printf("Argument %d: %s\n", i, argv[i]);
    }
}


//sum
void argumentSum(int argc, char *argv[]) {
    int sum = 0;
    for (int i = 1; i < argc; i++) {
        sum += atoi(argv[i]);
    }
    printf("Total = %d\n", sum);
}
//factorial
void factorial(int n) {
    int f = 1;
    for(i = 1; i <= n; i++)
        f *= i;
    printf("%d! = %d\n", n, f);
}

// reverse
void reverseString(char *str) {
    int len = strlen(str);
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
}
