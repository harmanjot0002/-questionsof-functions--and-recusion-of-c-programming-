#include <stdio.h>

// Function prototype declarations
void printName(const char *Name);

int main() {
    // Call the function to print multiple names
    printName("SUKHDAN SINGH");
    printName("AMRITPAL KAUR");
    printName("KARANJOT SINGH");
    printName("HARMANJOT KAUR");

    
    return 0;
}

// Define a function to print a name
void printName(const char *Name) {
    printf("Hello %s\n", Name);
}