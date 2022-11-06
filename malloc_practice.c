#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main(void){
    char* inputtedString = NULL;
    int stringLimit;

    printf("Enter the size limit of your text string: ");
    scanf("%d", &stringLimit);
    
    fflush(stdin);

    inputtedString = (char*)malloc(stringLimit*sizeof(char));
    if(!inputtedString){
        perror("Failed to allocate memory for text string\n");
        free(inputtedString);
        exit(1);
    }

    printf("Enter text string: ");
    fgets(inputtedString, stringLimit, stdin);

    int i;
    for(i=0; *(inputtedString+i) != NULL; i++);

    inputtedString = (char*)realloc(inputtedString, i*sizeof(char));
    if(!inputtedString){
        perror("Failed to reallocate memory for text string.\n");
        free(inputtedString);
        inputtedString = NULL;
        exit(0);
    }

    printf("Text string: %s\n", inputtedString);

    free(inputtedString);
    inputtedString = NULL;

}

