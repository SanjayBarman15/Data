//Write a C program to print odd and even Numbers separately from 1 to N.
#include <stdio.h> 

int main() {
    int n= 5;
    for (int i = 1; i<=n;i++){
        if ( i % 2 == 0){
            printf("%d id even\n",i);
        }else{
            printf("%d id odd\n",i);
        }
    }
    return 0;
}