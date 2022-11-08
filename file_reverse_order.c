#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int main(void){
    FILE *fp;
    long int position;
    long endOfFile=0;
    int letter;

    fp = fopen("file.txt", "r");
    if(!fp){
        perror("Unable to open file to read from");
        fclose(fp);
        exit(1);
    }

    while(!fseek(fp, endOfFile, SEEK_END)){
        printf("%c", fgetc(fp));
        endOfFile--;
    }

    fclose(fp);
    fp = NULL;

    return 0;
}