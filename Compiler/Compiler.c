#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "Compiling.h"


void meanpile(int argc, char* argv[]){
    FILE* fp;
    if (argc < 2) {
        printf("Usage: %s <source_file>\n", argv[0]);
        return;
    }

    fp = fopen(argv[1], "r");
    if(fp){
        /* Reading in order to compile the file*/
        printf("Compiling file: %s\n", argv[1]);
        // Functions to process and compile the file would go here
        char buffer[256];
        while(fgetc(fp)){
            // The tokenization begins
            
        }
        fclose(fp);
    }
}
