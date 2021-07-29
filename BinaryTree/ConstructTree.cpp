int search(int arr[], int strt, int end, int value)
{
    int i;
    for (i = strt; i <= end; i++) {
        if (arr[i] == value)
            break;
    }
    return i;
}
Node *buildUtil(int in[],int post[],int inStrt,int inEnd,int *pIndex){
	if(inStrt > inEnd){
		return NULL;
	}
	Node *node = newNode(post[*pIndex]);
	(*pIndex)--;
	if(inStrt == inEnd){
		return node;
	}
	int inIndex = search(in ,  inStrt , inEnd , node->data);
	node->right = buildUtil(in, post, inIndex + 1, inEnd, pIndex);
    node->left = buildUtil(in, post, inStrt, inIndex - 1, pIndex);
    return node;
}
Node* buildTree(int in[], int post[], int N){
	int pIndex = N - 1;
	return buildUtil(in , post , 0 , N-1 , &pIndex);
}
