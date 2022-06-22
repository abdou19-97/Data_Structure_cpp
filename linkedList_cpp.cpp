//linked list 
#include <iostream>
using namespace std;

class Node
{
     public:
	     int data = 0;
	     Node * next;
	  

};

//preappend method using linkedList
void push(Node ** new_head, int new_data)
{
	Node * new_node = new Node(); //allocate new node

	new_node -> data = new_data; //insert data in the new node
	new_node -> next = (*new_head); //make next node as the head

	(*new_head) = new_node; //change the head to be pointed to the new node
}


void prinLinkedLst(Node * n)
{
	while(n != NULL)
	{
		cout<< n -> data << " ";
		n = n->next;
		if(n-> data == 0)
			break;
	}
}

int main(){
	Node * head = NULL;

	head = new Node();

	push(&head, 1);
	push(&head, 2);
        push(&head, 3);
	push(&head, 0);

        prinLinkedLst(head);

	return 0;
}
