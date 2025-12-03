#include <stdio.h>
#include <stdlib.h>


struct node {
	int age;
	struct node *next;
};


int main(){
	struct node *nodeA, *nodeB, *nodeC;
	struct node *head;

	nodeA = (struct node*) malloc(sizeof(struct node));
	nodeB = (struct node*) malloc(sizeof(struct node));
	nodeC = (struct node*) malloc(sizeof(struct node));

	nodeA->age = 67;
	nodeB->age = 47;
	nodeC->age = 35;

	nodeA->next = nodeB;
	nodeB->next = nodeC;
	nodeC->next = NULL;

	head = nodeA;

	struct node *temp;
	temp = head;

	while(temp->next != NULL)
	{
		printf("%d-->",temp->age);
		temp = temp->next;
	}
	printf("%d-->",temp->age);

	return 0;
}
