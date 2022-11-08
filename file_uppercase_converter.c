#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int main(void){
    FILE *readingFile, *writingFile;
    int upperLetter;
    int lowerLetter;


    readingFile = fopen("file.txt", "r");
    if(!readingFile){
        perror("Unable to open reading file");
        fclose(readingFile);
        exit(1);
    }

    writingFile = fopen("result.txt", "w");
    if(!writingFile){
        perror("Unable to open file to write to");
        fclose(writingFile);
        exit(1);
    }
    
    while(!feof(readingFile)){
        lowerLetter = fgetc(readingFile);
        if((char)lowerLetter == ' ' || (char)lowerLetter == '\n' || isupper((char)lowerLetter)){
            fputc(lowerLetter, writingFile);
        }

        else if(islower(lowerLetter) != 0){
            upperLetter = toupper(lowerLetter);
            fputc(upperLetter, writingFile);
        }


    }   

    fclose(writingFile);
    fclose(readingFile);
    writingFile, readingFile = NULL, NULL;

    return 0;
}