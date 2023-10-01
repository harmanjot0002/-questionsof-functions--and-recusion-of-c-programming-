//convert celsius to fahrenheit

#include <stdio.h> 
float convertTemp (float celsius );
int main ()
{
    float fahrenheit = convertTemp (37);
    printf ("Temperature in fahrenheit is :%f",fahrenheit);
    return 0 ; 
}
float convertTemp(float celsius){
float  fahrenheit = celsius *(9.0/5.0)+32 ;
return fahrenheit; 
}