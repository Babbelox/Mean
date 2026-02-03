#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "Compiling.h"

//Temporarytoken list
typedef struct Tokens{
    int tokenID;
    char lex[256];
    struct Tokens* next;
} Token;

Token* tokenList = NULL;

//Initialize keywords
typedef enum {
    TOKEN_LET,
    TOKEN_IDENTIFIER,
    
    //Types of variables
    TOKEN_NUMINT,

    //Tokens of variables
    TOKEN_INT,

    //Tokens of symbols
    TOKEN_SEMICOLON,
    TOKEN_PAREN_OPEN,
    TOKEN_PAREN_CLOSE,

    //Tokens of operators
    TOKEN_PLUS,
    TOKEN_FUNCT
} TokenType;


void meanpile(int argc, char* argv[]){
    FILE* fp;
    int i, dim_buff;
    char buffer[256];
    if (argc < 2) {
        printf("Usage: %s <source_file>\n", argv[0]);
        return;
    }

    fp = fopen(argv[1], "r");
    if(fp){
        /* Reading in order to compile the file*/
        printf("Compiling file: %s\n", argv[1]);
        // Functions to process and compile the file would go here
        while(!feof(fp)){
            // The tokenization begins
            for(i=0; buffer[i] = ' ' ||i<strlen(buffer) ; i++) {
                buffer[i] = fgetc(fp);
            }
            // Process the buffer here
            dim_buff = strlen(buffer);
            tokenizer(buffer[0], dim_buff, tokenList);

        }
        fclose(fp);
    }
}



int tokenizer(char* buff, int dim_buff, Token* Token_list){
    
    int temp_dim;

    if (dim_buff==1){
        switch(buff[0]){
            case '(': temp_dim = TOKEN_PAREN_OPEN; break;
            case ')': temp_dim = TOKEN_PAREN_CLOSE; break;
            case ';': temp_dim = TOKEN_SEMICOLON; break;
            default: temp_dim = -1; break;
        }
    }

    add_token(Token_list, temp_dim);
}

