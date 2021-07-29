struct Node *copyList(struct Node *org)
{
	 Node *ptr = NULL;
    while (org != NULL)
    {
      insertEnd(&ptr , org->data);
      org = org->next;
    }
    return ptr;
}
