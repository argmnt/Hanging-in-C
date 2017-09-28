#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
}nodet;
struct node *head;


void printList() {
   struct node *temp = head;
   printf("\n");
	
   //start from the beginning
   while(temp != NULL) {
      printf("Data %d\n",temp->data);
      temp = temp->next;
   }
   printf("\n");
}

void insertFirst(int data) {
   struct node *temp;
   temp=head;
	while((temp->next) != NULL){
		temp=temp->next;
		printf("%x",temp->next);
	}
	temp->next=(struct node*) malloc(sizeof(struct node));
	temp=temp->next;
   temp->data = data;
   temp->next=NULL;
}


int main(){
	int i =0;
	head=(struct node*) malloc(sizeof(struct node));
	head->data=100;
	head->next=NULL;
	insertFirst(99);

	
	printList();
	return 0;
}
