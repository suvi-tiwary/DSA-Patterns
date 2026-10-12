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

int preorder(Node*root){
    if(root==NULL){
        return;
    }
    cout << root->data << " ";
    int left=preorder(root->left);
    int right=preorder(root->right);
}

int main() {
    Node* root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    in

    return 0;
}