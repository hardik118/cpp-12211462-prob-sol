#include <iostream>
#include <queue>
#include <vector>

using namespace std;

class t_Node {
public:
    int val;
    t_Node* left;
    t_Node* right;

    t_Node(int value) {
        val = value;
        left = nullptr;
        right = nullptr;
    }
};

int sum_(TreeNode* root, int n) {
    if (root == nullptr)
        return 0;

    queue<t_Node*> nodeQueue;
    nodeQueue.push(root);
    int c_Level = 0;
    int c_Sum = 0;

    while (!nodeQueue.empty()) {
        int nodesAtCurrentLevel = nodeQueue.size();

        for (int i = 0; i < nodesAtCurrentLevel; i++) {
            TreeNode* current = nodeQueue.front();
            nodeQueue.pop();

            if (c_Level == n) {
                c_Sum += current->val;
            }

            if (current->left)
                nodeQueue.push(current->left);

            if (current->right)
                nodeQueue.push(current->right);
        }

        c_Level++;

        if (c_Level > n)
            break;
    }

    return c_Sum;
}

int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    int n = 6;
    int sum = sum_(root,n);

    cout << "Sum will be : " << "%d" << ": " <<n, sum << endl;

    return 0;
}

