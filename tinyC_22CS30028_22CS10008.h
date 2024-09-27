#ifndef tinyC_22CS30028_22CS10008_H
#define tinyC_22CS30028_22CS10008_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// #include "lex.yy.c"
// #include "y.tab.c"


struct TreeNode {
    char *data;
    struct TreeNode* siblings;
    struct TreeNode* children;
}typedef TreeNode;

void addChild(TreeNode* root, TreeNode* child);
TreeNode* createNode(char* data);
void printTree(TreeNode* root, int level);
void printChildren(TreeNode* head, int level);
void printSpaces(int level);
void printNode(TreeNode* node, int level);
void freeTree(TreeNode* root);



#endif 