#include "main.h"
#include <stdio.h>

void printFizzBuzz(int n) {
    if (n % 3 == 0 && n % 5 != 0) {
        putchar('F');
        putchar('i');
        putchar('z');
        putchar('z');
    } else if (n % 5 == 0 && n % 3 != 0) {
        putchar('B');
        putchar('u');
        putchar('z');
        putchar('z');
    } else if (n % 3 == 0 && n % 5 == 0) {
        putchar('F');
        putchar('i');
        putchar('z');
        putchar('z');
        putchar('B');
        putchar('u');
        putchar('z');
        putchar('z');
    } else {
        /* Print the current number (n) as a sequence of characters */
        int temp = n;
        int num_digits = 0;
        while (temp != 0) {
            temp /= 10;
            num_digits++;
        }
        temp = n;
        char num_chars[num_digits];
        for (int j = num_digits - 1; j >= 0; j--) {
            num_chars[j] = '0' + (temp % 10);
            temp /= 10;
        }
        for (int j = 0; j < num_digits; j++) {
            putchar(num_chars[j]);
        }
    }
}

/**
 * main - prints the numbers from 1 to 100, followed by a new line
 * but for multiples of three prints Fizz instead of the number
 * and for the multiples of five prints Buzz
 * Return: Always 0 (Success)
 */
int main(void) {
    for (int i = 1; i <= 100; i++) {
        printFizzBuzz(i);

        if (i < 100) {
            putchar(' ');
        }
    }
    putchar('\n');

    return (0);
}
