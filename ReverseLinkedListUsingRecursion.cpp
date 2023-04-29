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
	Node *reverselinkedlist(Node *prev, Node *current){
		if(current != nullptr){
			reverselinkedlist(current, current->next);
			current->next= prev;
		}
		else{
			head = prev;
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
	ll.reverselinkedlist();
	ll.printLinkedList();
	return 0;
}