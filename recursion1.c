//sum of first n numbers 4:54:00

#include <stdio.h> 
 
  int sum (int n ); // function declaration 

int main (){ 
    printf ("SUM IS :%d",sum(5));

    return 0 ; 
}
// recursive function 
int  sum (int n ){
    if (n==1){ // base case 
        return 1 ; 
    }
    int sumNm1 =sum(n-1); //sum of 1 to n 
    int sumN = sumNm1 + n ; 
    return sumN  ;
}