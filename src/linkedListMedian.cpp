/*
OVERVIEW: Given a single sorted linked list find the median element of the single linked list.
Median is the middle element.
E.g.: 1->2->3->4->5, output is 3.

INPUTS: A sorted linked list.

OUTPUT: Return median of the linked list elements.

ERROR CASES: Return -1 for error cases.

NOTES: If length is even, return average of middle pair of numbers.
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

typedef struct node *lptr;

int linkedListMedian(struct node *head) {

	if (head==NULL)
	return -1;

	lptr t;
	t = head;
	int i = 0,j=0;
	while (t->next != NULL)
	{
		i++;
		t = t->next;
	}
	i++;
	if (i == 1)
		return head->num;
	t = head;

	while (j != i / 2 - 1)
	{
		t = t->next;
		j++;
	}
	if (i % 2 == 1)
		return (t->next)->num;
	else
		return ((t->num) + (t->next)->num) / 2;
}
