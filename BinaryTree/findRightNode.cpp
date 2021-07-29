# include<queue>
Node * nextRight(Node *root ,int k){
    if(root == NULL){
        return 0;
    }
    queue<Node *> qn;
    queue<int> ql;
    int level = 0;
    qn.push(root);
    ql.push(level);
    while (qn.size())
    {
        Node *node = qn.front();
        level = ql.front();
        qn.pop();
        ql.pop();
        if(node->data == k){
            if(ql.size() == 0 || ql.front() != level){
                return NULL;
            }
            return qn.front();
        }
        if(node->left != NULL){
            qn.push(node->left);
            ql.push(level+1);
        }
        if(node->right != NULL){
            qn.push(node->right);
            ql.push(level+1);
        }
    }
    return NULL;
}
int findRightSibling(struct Node* root, int key){
  Node *nr = nextRight(root,key);
    if(nr != NULL){
        return nr->data;
    }
    return -1;
}
