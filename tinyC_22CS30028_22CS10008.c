#include "tinyC_22CS30028_22CS10008.h"


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

TreeNode* createNode(char* data){
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
        printf("  ");
    }
}

void printNode(TreeNode* node, int level){
    printSpaces(level);
    printf("%s\n", node->data);
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
    TreeNode* root = createNode("Root");
    TreeNode* child1 = createNode("Child 1");
    TreeNode* child2 = createNode("Child 2");
    TreeNode* child3 = createNode("Child 3");

    addChild(root, child1);
    addChild(root, child2);
    addChild(child1, child3); // Adding Child 3 to Child 1
    

    printTree(root, 0);  // Print the entire tree

    freeTree(root);      // Free the allocated memory
    return 0;
    
}
