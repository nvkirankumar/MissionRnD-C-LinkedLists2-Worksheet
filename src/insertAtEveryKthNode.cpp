/*
OVERVIEW: Given a single linked list insert a new node at every Kth node with value K.
E.g.: 1->2->3->4->5, k = 2, 1->2->2->3->4->2->5

INPUTS: A linked list and Value of K.

OUTPUT: Insert a new node at every Kth node with value K.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int num;
	struct node *next;
};

typedef struct node * lptr;


struct node * insertAtEveryKthNode(struct node *head, int K) {
	if (head == NULL)
		return NULL;
	lptr t;
	t = head;
	int i = 0;
	for (t = head; t != NULL; t = t->next)
	{
		i++;
		if (i == K)
		{
			lptr nnode;
			nnode = (struct node *)malloc(sizeof(struct node));
			nnode->num = K;
			nnode->next = t->next;
			t->next = nnode;
			i = 0;
			t = nnode;
		}

	}
	return head;


}
