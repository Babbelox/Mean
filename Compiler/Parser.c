//This is the parser of the compiler

#include <stdio.h>
#include <string.h>

typedef struct Tokens{
    int tokenID;
    char lex[256];
    struct Tokens* next;
} Token;

typedef struct ASTNode {
    int nodeType;
    char value[256];
    struct ASTNode* left;
    struct ASTNode* right;
} ASTNode;

ASTNode* WATCHING(Token* tokenList) {
    ASTNode* root = NULL;
    Token* current = tokenList;

}