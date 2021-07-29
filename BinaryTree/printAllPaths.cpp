void printArray(int ints[], int len)
{
	int i;
	for (i = 0; i < len; i++)
	{
		cout << ints[i] << " ";
	}
}
int x = 0;
void printPathsRecur(Node* node, int path[], int pathLen)
{
	if (node == NULL) return;
	path[pathLen] = node->data;
	pathLen++;
	if (node->left == NULL && node->right == NULL)
	{
      	x++;
		printArray(path, pathLen);
        cout<<(pathLen-1)<<endl;
	}
	else
	{
		printPathsRecur(node->left, path, pathLen);
		printPathsRecur(node->right, path, pathLen);
	}
}
void printAllPaths(Node* root) {
  	int path[1000];
	printPathsRecur(root, path, 0);
  if(root != NULL){
    cout<<x;
  }
}
