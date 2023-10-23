#include <iostream>
#include <queue>
#include <vector>

using namespace std;

class Treenode {
public:
    int val;
    Treenode* left;
    Treenode* right;

    Treenode(int value) {
        val = value;
        left = NULL;
        right = NULL;
    }
};

int sum_(Treenode* root, int n) {
    if (root == NULL)
        return 0;

    queue<Treenode*> n_Queue;
    n_Queue.push(root);
    int c_Level = 0;
    int c_Sum = 0;

    while (!n_Queue.empty()) {
        int Level_nodes = n_Queue.size();

        for (int i = 0; i < Level_nodes; i++) {
            Treenode* current = n_Queue.front();
            n_Queue.pop();

            if (c_Level == n) {
                c_Sum += current->val;
            }

            if (current->left)
                n_Queue.push(current->left);

            if (current->right)
                n_Queue.push(current->right);
        }

        c_Level++;

        if (c_Level > n)
            break;
    }

    return c_Sum;
}

int main() {
    Treenode* root = new Treenode(1);
    root->left = new Treenode(2);
    root->right = new Treenode(3);
    root->left->left = new Treenode(4);
    root->left->right = new Treenode(5);

    int n = 2;
    int sum = sum_(root, n);

    cout << "Sum is " << ": " << sum<< endl;

    return 0;
}


