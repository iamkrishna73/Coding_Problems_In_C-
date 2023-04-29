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
	void deleteKthNode(int pos){
		Node *current = head;
		Node *prev = nullptr;
		if(pos == 0){
			head = head->next;
			delete current;
			return;
		}
		for(int i = 0; i < pos - 1 and current != nullptr; i++){
			prev = current;
			current = current->next;
		}
			if(current != nullptr){
			prev->next = current->next;
			delete current;
		}	
	}
	void printLinkedList(){
		if(head == nullptr){
			cout << "Linkedlist is empty" << endl;
		}
		Node *current = head;
		while(current->next != nullptr){
			cout << current->data << "->";
			current = current->next;
		}
		cout << "Null" << endl;
	}


};

int main(){
	Linkedlist ll = Linkedlist();
	ll.insertAtEnd(21);
	ll.insertAtEnd(5);
	ll.insertAtEnd(8);
	ll.insertAtEnd(12);
	ll.insertAtEnd(15);
	ll.insertAtEnd(52);
	ll.insertAtEnd(13);
	ll.insertAtEnd(11);
	ll.printLinkedList();
	int pos;
	cout << "Enter a position of node to delete: ";
	cin >> pos;
	ll.deleteKthNode(pos);
	ll.printLinkedList();
	return 0;
}