#include <iostream>
#include <algorithm>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

int fun(Node* root){
    if(root==NULL){
        return 0;
    }
    int left=fun(root->left);
    int right=fun(root->right);
    int height=max(left,right)+1;
    return height;
}

int main() {
    Node* root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    // Because Node* root is needed when you are declaring the function, not when you are calling it
    int height=fun(root) ;   
    cout <<"Height of tree : " << height;

    return 0;
}