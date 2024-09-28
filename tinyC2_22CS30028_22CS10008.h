#ifndef tinyC_22CS30028_22CS10008_H
#define tinyC_22CS30028_22CS10008_H

#include "tinyC2_22CS30028_22CS10008.tab.h"

extern int yyparse();
extern int yylex();


TreeNode* createNode(const char* data);
void addChild(TreeNode* root, TreeNode* child);
void printTree(TreeNode* root, int level);
void printChildren(TreeNode* head, int level);
void printSpaces(int level);
void printNode(TreeNode* node, int level);
void freeTree(TreeNode* root);



#endif 