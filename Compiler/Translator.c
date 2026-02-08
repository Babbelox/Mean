//This translator translates tokens in assembly code 

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct ASTNode {
    int nodeType;
    char value[256];
    struct ASTNode* left;
    struct ASTNode* right;
} ASTNode;

FILE* translator(ASTNode* root){
    FILE* fp = fopen("gospel.s", "w");
    int i;
    char buffer[256];

    if(fp == NULL){
        printf("Error opening file for writing.\n");
        return NULL;
    }

    for(i=0; i<256; i++){
        bishop(root, buffer);
        fprintf(fp, "%s", buffer);

    }
}


void bishop(ASTNode* node, char* buffer){
    
    switch(node->nodeType){
        case 
    }
}
