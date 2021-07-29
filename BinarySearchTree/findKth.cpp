# include<bits/stdc++.h>
int x = 0;
int arr[100];
void makeArray(Node *t1,int k){
    if(t1 != NULL){
        arr[x] = t1->data;
        x++;
        makeArray(t1->left,k);
        makeArray(t1->right,k);
    }
}
int kSmallest(Node* t1, int k){
   makeArray(t1,k);
    sort(arr,arr+x); 
    int y = arr[k-1];
    return y;
}
