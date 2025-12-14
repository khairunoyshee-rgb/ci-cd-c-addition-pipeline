// test_main.c
#include <stdio.h>
#include <stdlib.h> // For exit status

// Function prototype for the addition function defined in addition.c
int addition(int a, int b);

void test_addition_positive() {
    int result = addition(5, 3);
    if (result == 8) {
        printf("Test Case 1 (Positive Numbers) Passed.\n");
    } else {
        printf("Test Case 1 (Positive Numbers) Failed. Expected 8, Got %d\n", result);
        exit(1);
    }
}

void test_addition_zero() {
    int result = addition(10, 0);
    if (result == 10) {
        printf("Test Case 2 (Zero) Passed.\n");
    } else {
        printf("Test Case 2 (Zero) Failed. Expected 10, Got %d\n", result);
        exit(1);
    }
}

void test_addition_negative() {
    int result = addition(-5, 2);
    if (result == -3) {
        printf("Test Case 3 (Negative Numbers) Passed.\n");
    } else {
        printf("Test Case 3 (Negative Numbers) Failed. Expected -3, Got %d\n", result);
        exit(1);
    }
}

int main() {
    printf("--- Running Unit Tests ---\n");
    test_addition_positive();
    test_addition_zero();
    test_addition_negative();
    printf("All Tests Passed Successfully.\n");
    return 0;
}
