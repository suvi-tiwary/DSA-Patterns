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

// int height(Node *root){
//     if(root==NULL){
//         return 0;
//     }
//     int leftH=height(root->left);
//     int rightH=height(root->right);
//     int height=max(leftH,rightH)+1;
//     return height;
// }

// int Diameter(Node *root){
//     if(root==NULL){
//         return 0;
//     }
//     int leftDiamter=Diameter(root->left);
//     int rightDiamter=Diameter(root->right);
//     int currentDiamter=height(root->left)+height(root->right);
//     int diameter = max({leftDiamter,rightDiamter,currentDiamter});
//     return diameter;
// }


// Otimized version 

// Diameter is basically - leftHeight+rightHeight 
// then why different function use it in a height function take a global variable and calculate Diamter for every node 

int res=0;
int Diameter(Node * root){
    if(root==NULL){
        return 0;
    }
    int left=Diameter(root->left);
    int right=Diameter(root->right);
    int diameter =left+right;
    res= max(diameter,res);
    return max(left,right)+1;
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


