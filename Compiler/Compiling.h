#include <stdlib.h>
#include <stdio.h>

//For now i include the struct, but in the future I'll make it work with void pointers
typedef struct Token {
    int tokenID;
    char lex[256];
    struct Token* next;
} Token;


void comparer(char* line) {
    
}

Token* add_token(Token* head, int tokenID){
    Token* new_token, *new_head;

    new_token = (Token*)malloc(sizeof(Token));
    new_token->tokenID = tokenID;
    for(new_head = head; new_head->next != NULL; new_head = new_head->next);
    new_head->next = new_token;

    if(tokenID==-1){
        comparer(new_token->lex);
    }

    else
        free(new_token->lex);

    return head;

}