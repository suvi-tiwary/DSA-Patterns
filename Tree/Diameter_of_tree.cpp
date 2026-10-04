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

int height(Node *root){
    if(root==NULL){
        return 0;
    }
    int leftH=height(root->left);
    int rightH=height(root->right);
    int height=max(leftH,rightH)+1;
    return height;
}

int Diameter(Node *root){
    if(root==NULL){
        return 0;
    }
    int leftDiamter=Diameter(root->left);
    int rightDiamter=Diameter(root->right);
    int currentDiamter=height(root->left)+height(root->right);
    int diameter = max({leftDiamter,rightDiamter,currentDiamter});
    return diameter;
}

int main() {
    Node* root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout << "Diamter of tree : " << Diameter(root);

    

    return 0;
}


// Otimized version 


