//3.Write a C program to print Fibonacci series using for loop. 
#include<stdio.h>
int main() {
    int n1=0,n2=1,n=5;
    printf("%d %d ",n1,n2);
    for(int i=1;i<=n;i++){
        int sum =0;
        sum=n1+n2;
        printf("%d ",sum);
        n1=n2;
        n2=sum;
    }
    return 0;
}