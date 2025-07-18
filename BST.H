#ifndef BINARY_SEARCH_TREE_H
#define BINARY_SEARCH_TREE_H
#include <bits/stdc++.h>
using namespace std;
struct TreeNode {
    int data;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int val) {
        data = val;
        left = right = NULL;
    }
};
struct BinarySearchTree {
    TreeNode *root = NULL;
    // Insert functions
    TreeNode* ADD(int val, TreeNode *node) {
        if (node == NULL) return new TreeNode(val);
        if (val < node->data)
            node->left = ADD(val, node->left);
        else
            node->right = ADD(val, node->right);
        return node;
    }
    void Insert(int val) {
        root = ADD(val, root);
    }
    // Inorder traversal
    void PrintInorder(TreeNode *node){
        if (node==NULL) return;
        PrintInorder(node->left);
        cout<<node->data<<" ";
        PrintInorder(node->right);
    }
    void Inorder(){
        PrintInorder(root);
        cout<<endl;
    }
    //to find the minimum value of tree
    TreeNode* FindMin(TreeNode *node) {
        while (node && node->left) node = node->left;
        return node;
    }
    // Search
    bool SEARCH(TreeNode *node,int key){
        if (node==NULL) return false;
        if (key==node->data) return true;
        if (key<node->data)
            return SEARCH(node->left,key);
        else
            return SEARCH(node->right,key);
    }
    bool Search(int key) {
        return SEARCH(root,key);
    }
    // Delete
    TreeNode* DELETE(TreeNode *node, int key) {
        if (node==NULL) return NULL;
        if (key<node->data)
            node->left=DELETE(node->left, key);
        else if (key>node->data)
            node->right=DELETE(node->right,key);
        else {
            // Node with one child or no child
            if(node->left==NULL){
                TreeNode *temp=node->right;
                delete node;
                return temp;
            }
            else if (node->right==NULL){
                TreeNode *temp=node->left;
                delete node;
                return temp;
            }
            // Node with two children
            TreeNode *temp=FindMin(node->right);
            node->data=temp->data;
            node->right=DELETE(node->right,temp->data);
        }
        return node;
    }
    void Delete(int key) {
        root=DELETE(root, key);
    }
};
#endif
