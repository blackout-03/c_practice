#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int countCharsInString(char string[]);
void concatStrings(const char str1[], const char str2[]);
void checkIfEqual(const char str1[], const char str2[]);

void main(){

    int requestedFunction;
    printf("1 = String Character Counter\n2 = String Concatenator\n3 = String Equality Checker: ");
    scanf(" %d", &requestedFunction);

    switch(requestedFunction){
        case 1:
            char inputtedString[100];
            printf("Enter anything with a total length of less than 100 characters: ");
            scanf(" %s", &inputtedString);
            printf("Characters in string = %d\n", countCharsInString(inputtedString));
            exit(0);

        case 2:
            char string1[100];
            char string2[100];
            
            printf("Enter string 1, with total length of less than 100 characters: ");
            scanf(" %s", &string1);

            printf("Enter string 2, with total length of less than 100 characters: ");
            scanf(" %s", &string2);

            printf("Result: ");
            concatStrings(string1, string2);
            exit(0);

        case 3:
            char equalString1[100];
            char equalString2[100];
            
            printf("Enter string 1, with total length of less than 100 characters: ");
            scanf(" %s", &equalString1);

            printf("Enter string 2, with total length of less than 100 characters: ");
            scanf(" %s", &equalString2);

            printf("Result: ");
            checkIfEqual(equalString1, equalString2);
            exit(0);

    }

    return;
}


int countCharsInString(char string[]){
    int i;
    for(i=0; string[i] != '\0'; i++);

    return i;
}

void concatStrings(const char str1[], const char str2[]){
    char result[200];

    int i=0;
    while(str1[i] != '\0'){
        result[i] = str1[i];
        i++;
    }

    int j=0;
    while(str2[j] != '\0'){
        result[i+j] = str2[j];
        j++;
    }

    int k=0;
    while(result[k] != '\0'){
        printf("%c", result[k]);
        k++;
    }

    return;
}

void checkIfEqual(const char str1[], const char str2[]){
    int isEqual=1;

    if(sizeof(str1) != sizeof(str2)){
        isEqual = 0;
    }
    
    for(int i=0; str1[i] !='\0'; i++){
        if(str1[i] != str2[i]){
            isEqual = 0;
            break;
        }
    }

    if(isEqual == 1){
        printf("Equal");
    }

    else{
        printf("Not Equal");
    }

}
