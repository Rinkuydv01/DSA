#include <bits/stdc++.h>
using namespace std;

struct node {
    int data;
    node* left;
    node* right;
};

node* insert(int arr[], int size, int index) {
    if (index >= size) {
        return nullptr;
    }
    
    node* root = new node;
    root->data = arr[index];
    root->left = insert(arr, size, 2 * index + 1);
    root->right = insert(arr, size, 2 * index + 2);

    return root;
}

void heapify(node* root) {
    if (root == nullptr) return;

    node* largest = root;

    if (root->left && root->left->data > largest->data) {
        largest = root->left;
    }

    if (root->right && root->right->data > largest->data) {
        largest = root->right;
    }

    if (largest != root) {
        swap(root->data, largest->data);
        heapify(largest);
    }
}

void inorder(node* root) {
    if (root != nullptr) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

void buildMaxHeap(node* root) {
    if (root == nullptr) return;

    if (root->left) buildMaxHeap(root->left);
    if (root->right) buildMaxHeap(root->right);

    heapify(root);
}

int main() {
    node* root = nullptr;

    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: " << endl;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    root = insert(arr, n, 0);

    buildMaxHeap(root);

    cout << "Inorder Traversal of the Max Heap: ";
    inorder(root);
    cout << endl;

    return 0;
}
