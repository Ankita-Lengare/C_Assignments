/* Write a program to display First 5 prime numbers after a given number.
   Input: 7
   Output: 11 13 17 19 23
*/



#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) return 0; // 0 and 1 are not prime
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0; // Not a prime number
    }
    return 1; // Prime number
}

// Function to find and display the first 5 prime numbers after a given number
void displayNext5Primes(int num) {
    int count = 0;
    num++; // Start searching from the number after the given number
    while (count < 5) {
        if (isPrime(num)) {
            printf("%d ", num);
            count++;
        }
        num++;
    }
    printf("\n");
}

int main() {
    int givenNumber;
    printf("Enter a number: ");
    scanf("%d", &givenNumber);
    printf("Output: ");
    displayNext5Primes(givenNumber);
    return 0;
}
