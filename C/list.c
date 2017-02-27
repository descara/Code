#include<stdio.h>


/* Define list header and function declarations */

struct LinkedList {
	int data;
	struct LinkedList *next;
};

typedef struct LinkedList *node;

/* Function prototypes */
node createNode();
node insertNode(node head, int value);
void printList();


/* Main function begins here */

void main()
{
	int listsize;
	int input,i=0;
	int data;
	node list;

	printf("Initiating program\n");
	printf("Enter the size of list: ");
	scanf("%d", &input);

	list = createNode();

	while(i!=input)
	{
		printf("Enter the value: ");
		scanf("%d",&data);
		insertNode(list,data); 
		i++;
	}
}

/* Function Implementiations */

node createNode() {
	node temp;
	temp = (node)malloc(sizeof(struct LinkedList));
	temp-> next = NULL;
	return temp;
}

node insertNode(node head, int value)
{
	node temp,p;
	temp = createNode();
	temp->data = value;

	// When List is empty
	if(head == NULL)
	{
		head = temp;
	}
	else {
		p = head; 
		while(p->next != NULL)
		{
			p = p->next;
		}
		p->next = temp;
	}

	return head;
}

void printList()
{
}
