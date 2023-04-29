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
	void insertat(int data){
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
	// void insertAtKthPosition(int pos, int data){
	// 	Node *p,*t;
	// 	Node *newNode = new Node(data);
	// 	if(pos == 0){
	// 		t = newNode;
	// 		t->next = head;
	// 		head = t;
	// 	}
	// 	else if(pos > 0){
	// 		p = head;
	// 		for(int i = 0; i < pos - 1 && p; i++){
	// 			p = p->next;
	// 		}
	// 		if(p){
	// 		t = newNode;
	// 		t->next = p->next;
	// 		p->next = t;
	// 		}
	// 	}
	// }
	void insertAtKthPosition(int pos, int data){
		Node *current = head;
		Node *newNode = new Node(data);
		if(pos == 0){
			newNode->next = head;
			head = newNode;
		}
		// if(current) // current != nullptr
		// if(!current) // current == nullptr;
		else if(pos > 0){
			for(int i = 0; i < pos - 1 and current != nullptr; i++){
				current = current->next;
			}
			if(current != nullptr){
				newNode->next = current->next;
				current->next = newNode;
			}
		}
	}
	void printLinkedList(){
		if(head == nullptr){
			cout << "Linkedlist is empty!" << endl;
		}
		Node *current = head;
		while(current->next != nullptr){
			cout << current->data << "->";
			current = current->next;
		}
		cout <<"Null"<<endl;
	}
};

int main(){
	Linkedlist ll = Linkedlist();
	ll.insertat(4);
	ll.insertat(8);
	ll.insertat(10);
	ll.insertat(12);
	ll.insertat(14);
	ll.insertat(16);
	ll.printLinkedList();
	cout << "Linkedlist is before kth positon" << endl;
	int pos, var;
	cin >> pos >> var;
	ll.insertAtKthPosition(pos, var);
	ll.printLinkedList();
	return 0;
}