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
	ll.insertAtEnd(2);
	ll.insertAtEnd(5);
	ll.insertAtEnd(8);
	ll.insertAtEnd(12);
	ll.insertAtEnd(15);
	ll.printLinkedList();
	int pos;
	cout << "enter printLinkedList" << endl;
	cin >> pos;
	ll.insertAtKthPosition(pos, 13);
	return 0;

}