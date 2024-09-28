#include "tinyC2_22CS30028_22CS10008.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void addChild(TreeNode* root, TreeNode* child){
    if(root->children == NULL){
        root->children = child;
    }else{
        TreeNode* temp = root->children;
        while(temp->siblings != NULL){
            temp = temp->siblings;
        }
        temp->siblings = child;
    }
}

TreeNode* createNode(const char* data){
    TreeNode* node = (TreeNode*)malloc(sizeof(TreeNode));
    node->data = strdup(data);
    node->siblings = NULL;
    node->children = NULL;
    return node;
}

void printTree(TreeNode* root, int level){
    if(root == NULL){
        return;
    }
    printNode(root, level);
    printChildren(root->children, level+1);
    printTree(root->siblings, level);
}

void printSpaces(int level){
    for(int i=0; i<level; i++){
        printf("      ");
    }
}

void printNode(TreeNode* node, int level){
    if(strcmp(node->data, "ε")){
        printSpaces(level);
        printf("-->%s\n", node->data);
    }
}

void printChildren(TreeNode* head, int level){
    TreeNode* temp = head;
    while(temp != NULL){
        printNode(temp, level);
        printChildren(temp->children, level+1);
        temp = temp->siblings;
    }
}

void freeTree(TreeNode* root){
    if(root == NULL){
        return;
    }
    freeTree(root->children);
    freeTree(root->siblings);
    free(root);
}

int main() {
    yyparse();
    return 0;
}
