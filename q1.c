//1. Write a C program to calculate the sum of first n natural numbers using for loop. 
#include<stdio.h>
int main() {
    int n=5;
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    printf("sum of first %d natural numbers is %d",n,sum);
    return 0;
}