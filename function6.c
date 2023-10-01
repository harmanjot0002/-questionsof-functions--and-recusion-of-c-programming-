//Write functions to calculate area of a square, a circle
//& a rectangle.

#include <stdio.h> 
#include <math.h>  
int squareArea (int side ); 
float circleArea (float radius ); 
float rectangleArea (float a, float b ); 

int main (){ 
    //float a = 2.0; 
    //float b = 4.0 ; 
    //printf ("AREA IS : %f",rectangleArea(a,b));
   
    
    float radius =5.0 ; 
    printf ("AREA IS : %f",circleArea(radius) );

    //float side = 6.0 ; 
    //printf ("AREA IS : %d",squareArea(side ));



   return 0 ; 
} 
int  squarArea (int  side){
   return side * side ; 
}
float circleArea (float radius ){
   return 3.14 * radius * radius ; 
}
float rectangleArea (float a ,float b ){
   return  a * b ; 
}