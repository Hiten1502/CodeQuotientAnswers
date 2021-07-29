int height(Node *root){
    if(root == NULL){
        return 0;
    }
    else{
        int left_height = height(root->left);
        int right_height = height(root->right);
        return max(left_height,right_height)+1;
    }
}
void printGivenLevel(struct Node* root, int level)
{
    if (root == NULL)
        return;
    if (level == 1)
        printf("%d ", root->data);
    else if (level > 1)
    {
        printGivenLevel(root->left, level-1);
        printGivenLevel(root->right, level-1);
    }
}
void printOdd(struct Node* root)
{
	 int h = height(root);
	for (int i = 1; i <= h; i+=2)
	{
		printGivenLevel(root,i);
	}
}
