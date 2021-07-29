
# include<bits/stdc++.h>
int minNode(Node *head){
    Node *last = head;
    int min = INT_MAX;
    while (last != NULL)
    {
        if(last->data < min){
            min = last->data;
        }
        last = last->next;
    }
    return min;
}
int maxNode(Node *head){
    Node *last = head;
    int max = INT_MIN;
    while (last != NULL)
    {
        if(last->data > max){
            max = last->data;
        }
        last = last->next;
    }
    return max;
}
void insertBeg(struct Node** head, int data){
  struct Node* node = (struct Node*) malloc(sizeof(struct Node));
  node->data  = data;     
  node->next = (*head);   
  (*head)    = node;  
}
struct Node * shiftSmallLarge(struct Node *org)
{
  	int x = minNode(org);
    int y = maxNode(org);
    if(org == NULL){
        return org;
    }
  	Node *ptr = NULL;
  	if(org->next == NULL){
        insertBeg(&ptr , x);
        return ptr;
    }
    Node *last = org;
    while (last != NULL)
    {
        if(last->data == x){
            last = last->next;
        }
        else if(last->data == y){
            last = last->next;
        }
        else{
            insertEnd(&ptr , last->data);
            last = last->next;
        }
    }
    insertBeg(&ptr , x);
    insertEnd(&ptr , y);
    return ptr;
}
