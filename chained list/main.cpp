#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

struct Node {
	int dat;
	Node *next;
};

//头插
Node *inshead(int elem[], int n) {
	Node *head = new Node{0, nullptr};
	for(int i=0; i<n; i++) {
		Node *data = new Node{elem[i], head->next};
		head->next = data;
	}
	return head;
}

//尾插
Node *instail(int elem[], int n) {
	Node *head = new Node{0, nullptr};
	Node *tail = head;
	for(int i=0; i<n; i++) {
		Node *data = new Node{elem[i], nullptr};
		tail->next = data;
		tail = data;
	}
	return head;
}

//输出
void show(Node *head) {
	Node *p = head->next;
	while(p != nullptr) {
		printf("%d\t", p->dat);
		p = p->next;
	}
	printf("\n");
}


//找最大
int findmax(Node *head) {
	Node *p = head->next;
	int t = head->next->dat;
	while(p) {
		if(p->dat > t) t=p->dat;
		p = p->next;
	}
	return t;
}

//删除
void del(Node *head, int mink, int maxk) {
	Node *p = head;
	int t;
	while(p && p->next) {
		t = p->next->dat;
		if(t>mink && t<maxk ) {
			p->next = p->next->next;
		}else p = p->next;
	}
}

int element[] = {10, 20, 30, 40, 50};

int main(int argc, char** argv) {
	
	Node* p = inshead(element, 5);
	printf("head:\n");
	show(p);
	printf("\n");
	
	p = instail(element, 5);
	printf("tail:\n");
	show(p);
	printf("\n");
	
	printf("max:\n");
	cout<<findmax(p)<<endl;
	printf("\n");
	
	p = instail(element, 5);
	del(p, 15, 45);
	printf("after delete:\n");
	show(p);
	printf("\n");
	
	return 0;
}
