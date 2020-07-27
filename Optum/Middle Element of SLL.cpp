/*
Middle Element of SLL in a single pass
(You can only traverse the list once)
Note : If the list contains even number of elements, then middle element will be n/2 + 1 where n is number of elements in list
Approach : Fast Pointer & Slow Pointer
*/
#include<iostream> 
using namespace std;

// Struct 
struct Node
{
	int data;
	struct Node* next;
};


void printMiddle(struct Node* head)
{
	struct Node* slow = head;
	struct Node* fast = head;

	if (head != NULL)
	{
		while (fast != NULL && fast->next != NULL)
		{
			fast = fast->next->next;
			slow = slow->next;
		}
		cout << "Middle element : " << slow->data<<endl;
	}
}


void push(struct Node** head_ref, int new_data)
{
	struct Node* new_node = new Node;
	new_node->data = new_data;
	new_node->next = (*head_ref);
	(*head_ref) = new_node;
}
 
void printList(struct Node* ptr)
{
	while (ptr != NULL)
	{
		cout << ptr->data << " ";
		ptr = ptr->next;
	}
	cout << endl;
}

int main()
{
	// Start with the empty list 
	struct Node* head = NULL;

	// Inserting 1, 2, 3, 4 and 5 in the linked list using for loop
	for (int i = 5; i > 0; i--)
	{
		push(&head, i);
		
	}
	printList(head);
	printMiddle(head);

	return 0;
}
