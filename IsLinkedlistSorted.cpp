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
	void islinkedlistSorted(){
		int tempvalue = -32768;
		Node *curr_node = head;
		while(curr_node->next != nullptr){
			if(curr_node->data < tempvalue){
				cout << "Linkedlist is not sorted" <<endl;
				return;
			}
			tempvalue = curr_node->data;
			curr_node = curr_node->next;
		}
		cout <<"Linkedlist is Sorted" <<endl;
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
		cout << "Null" << endl;
	}
};

int main(){
	Linkedlist ll = Linkedlist();
	ll.insertAtEnd(2);
	ll.insertAtEnd(4);
	ll.insertAtEnd(8);
	ll.insertAtEnd(6);
	ll.insertAtEnd(7);
	ll.insertAtEnd(8 );
	ll.printLinkedList();
	ll.islinkedlistSorted();

	return 0;
}

