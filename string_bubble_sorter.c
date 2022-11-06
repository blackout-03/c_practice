#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>

void main(){

    stringBubbleSorter();

    return;
}


void stringBubbleSorter(){
    char strings[100][100];
    char temp[25];

    int n;
    printf("Enter number of strings: ");
    scanf(" %d", &n);

    printf("Enter %d string(s)\n", n);
    for(int i=0; i<n; i++){
        scanf("%s", strings[i]);
    }

    printf("\nBubble sorted list:\n");

    for(int i=1; i < n; i++){
        for(int j=0; j < n-1; j++){
            
            if(strcmp(strings[j], strings[j+1]) > 0){
                strncpy(temp, strings[j], sizeof(temp) - 1);
                strncpy(strings[j], strings[j+1], sizeof(strings[j]) - 1);
                strncpy(strings[j+1], temp, sizeof(strings[j+1]) - 1);
            }
        
        }
    }


    for(int i=0; i< n; i++){
        printf("%s\n", strings[i]);
    }

    return;

}





