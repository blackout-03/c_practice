#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void reverseString(const char string[]);
void bubbleSortArray();


void main(){
    
    char inputtedString[100];
    printf("Enter any string with total length of less than 100 characters, without spaces: ");
    scanf(" %s", &inputtedString);
    reverseString(inputtedString);
    

    return;
}


void reverseString(const char string[]){ //use of strlen() required
    char reversed[strlen(string)];

    for(int i=0; string[i] != '\0'; i++){
        reversed[i] = string[(strlen(string)-1)-i];
    }

    printf("%s", reversed);
    return;
}
