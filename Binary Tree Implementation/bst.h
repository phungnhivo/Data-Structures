#ifndef BST_H_
#define BST_H_

#include <iostream>
using namespace std;


class BST{
    public:
        BST();
        BST(int data);

        void insert(int data);

    private:
        struct TreeNode {
            int val;
            TreeNode *right;
            TreeNode *left;
            TreeNode() : val(0), left(nullptr), right(nullptr) {}
            TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
            TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
        };
        
        TreeNode* root;

};
#endif