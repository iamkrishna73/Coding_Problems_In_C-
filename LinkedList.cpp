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
	void deleteKthNode(int k) {
			if(!head) return;

	}
	void deleteGivenNode(int target){
		if(head->data == target) {
		   auto temp = head;
		   head = head->next;
		   temp->next = nullptr;
		   delete temp;
		   return;
		}
		auto iter = head;
		while(iter and iter->next->data != target) {
			iter = iter->next;
		}
		if(iter and iter->next){
			auto temp = iter->next;
		iter->next = iter->next->next;
		temp->next = nullptr;
		delete temp;
		}
	}
};

int main(){
	Linkedlist ll = Linkedlist();
	ll.insertAtEnd(2);
	ll.insertAtEnd(4);
	ll.insertAtEnd(5);
	ll.insertAtEnd(6);
	ll.insertAtEnd(7);
	ll.insertAtEnd(3000);
	ll.deleteGivenNode(2);
	cout << ll.countNodes() << endl;
	ll.deleteGivenNode(2);
	ll.printLinkedList();

}

// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// void solve(){
//     int n, w, sum = 0; 
//     cin >> n >> w;
//     vector <int> a(n);
//     for(auto &v: a) cin >> v;
    
//     sort(a.rbegin(), a.rend());
 
//     int i;

//     for( i = 0; i < n; i++) {
//         sum += a[i];
//         if(sum >= w) break;
//     }
//    cout << max(0, n - 1 - i) << endl;
  
// }

// int main() {
//     int t;
//     cin >> t;
//     while(t--){
//         solve();
//     }
// 	return 0;
// }
