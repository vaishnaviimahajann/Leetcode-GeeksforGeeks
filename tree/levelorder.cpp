
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

Node* buildtree(vector<int>& preorder, int &index) {
    index++;

    if (preorder[index] == -1) {
        return NULL;
    }

    Node* root = new Node(preorder[index]);

    root->left = buildtree(preorder, index);
    root->right = buildtree(preorder, index);

    return root;
}

void preorderTraversal(Node* root) {
    if (root == NULL) {
        return;
    }

    cout << root->data << " ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

void levelorder(Node *root) {
    if (root == NULL) {
        return;
    }

    queue<Node*> q;

    q.push(root);

    while (q.size() > 0) {
        Node* curr = q.front();
        q.pop();

        cout << curr->data << " ";

        if (curr->left != NULL) {
            q.push(curr->left);
        }

        if (curr->right != NULL) {
            q.push(curr->right);
        }
    }

    cout << endl;
}

int main() {
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, 5, -1, -1};

    int index = -1;

    Node* root = buildtree(preorder, index);

    cout << "Preorder Traversal: ";
    preorderTraversal(root);

    cout << endl;

    cout << "Level Order: ";
    levelorder(root);

    return 0;
}
