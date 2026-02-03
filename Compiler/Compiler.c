#include <stdlib.h>
#include <stdio.h>
#include <string.h>


void meanpile(int argc, char* argv[]){
    FILE* fp;
    if (argc < 2) {
        printf("Usage: %s <source_file>\n", argv[0]);
        return;
    }

    fp = fopen(argv[1], "r");
    if(fp){
        /* Reading in order to compile the file*/
        
    }
}
