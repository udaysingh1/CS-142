#include <iostream>
using namespace std;
	
class node {
	public:
	int val;
	node*next;
	node(int valnew) {
		val = valnew;
		next = NULL; } };

class LL {
	public:
	node*head;
	LL () {
			head = NULL ; }

void insert (int val1) {
		node*n1=new node(val1);
		n1-> next = head;
		head = n1;
		}

void display() {
		node*current = head;
		while (current != NULL) {
		cout << current -> val << "->" ;		
		current =current -> next; } 
		}

void delet() {
			node*temp=head;
			head= head-> next;
			delete temp;
			}





};						 

int main () {
		LL l1;
		for (int i=0; i<10; i++) {
		l1.insert (i); }
		
		l1.delet();
		l1.display();
return 0; } 
