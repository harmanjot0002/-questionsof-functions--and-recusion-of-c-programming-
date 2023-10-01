//Write a function to calculate Percentage of a student
//from Marks in Science, Math & Sanskrit.

#include <stdio.h> 
int percentage  (int science , int math , int sanskrit ); 
int main ()
{
    int science = 99 ;
    int math = 98 ; 
    int sanskrit = 100 ; 
    printf (" PERCENTAGE IS : %d",percentage (science , math , sanskrit));
    return 0 ; 

}
int percentage  (int science , int math , int sanskrit ){
return ((science+ math + sanskrit)/3) ;
}