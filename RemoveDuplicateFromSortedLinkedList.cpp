#include <iostream>
using namespace std;
class Linkedlist{
	struct Node{
		int data;
		Node *next;
		Node(int d){
			data = d;
			next = nullptr;
		}
	};
	Node *head;
public:
	Linkedlist(){
		head = nullptr;
	}
	void insertAtEnd(int data){
		Node *newNode = new Node(data);
		if(head == nullptr){
			head = newNode;
			return;
		}
		Node *current = head;
		while(current->next != nullptr){
			current = current->next;
		}
		current->next = newNode;
	}
	void removeduplicate(){
		Node *current = head;
		Node *nextnode = current->next;
		while(current->next != nullptr){
			if(current->data != nextnode->data){
				current = nextnode;
				nextnode = nextnode->next;
			}
			else {
				current->next = nextnode->next;
				delete nextnode;
				nextnode = current->next;
			}
		}
	}
	void printLinkedList(){
		if(head == nullptr){
			cout << "list is empty" << endl;
			return;
		}
		Node *current = head;
		while(current != nullptr){
			cout << current->data << "->";
			current = current->next;
		}
		cout << "null" << endl;	
	}
};

int main(){
	Linkedlist ll = Linkedlist();
	ll.insertAtEnd(2);
   	ll.insertAtEnd(4);
	ll.insertAtEnd(4);
	ll.insertAtEnd(6);
	ll.insertAtEnd(7);
	ll.insertAtEnd(3000);
	ll.printLinkedList();
	ll.removeduplicate();
	ll.printLinkedList();
	return 0;
}