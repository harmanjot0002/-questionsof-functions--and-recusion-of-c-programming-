//Write a function to print n terms of the fibonacci
//sequence.
// 0 , 1 , 1 , 2, 3 , 5 , 8 , 13 , 21 .......n 
// here as we see all the numbers are sum of previous 2 numbers 
// i.e , 0+1=1 ; 1+1=2 ; 2+1=3 ; 3+2=5 and so on ..... 

#include <stdio.h>

int fibonacci(int n);

int main() {
    int n = 6;
    int result = fibonacci(n);
    printf("FIBONACCI OF %d: %d\n", n, result);
    return 0;
}

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }

    int fibNm1 = fibonacci(n - 1);
    int fibNm2 = fibonacci(n - 2);
    int fibo = fibNm1 + fibNm2;
    return fibo;
}