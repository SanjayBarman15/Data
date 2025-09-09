//4 Write a C Program to check whether a number is a prime number or not.
#include <stdio.h>
#include <math.h>
int main() {
    int n = 5;
    int isPrime = 1;
    if (n <= 1) {
        printf("%d is not a prime num", n);
    } else {
        int root = sqrt(n);
        for (int i = 2; i <= root; i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime)
            printf("%d is a prime num", n);
        else
            printf("%d is not a prime num", n);
    }
    return 0;
}