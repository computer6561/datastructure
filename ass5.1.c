#include<stdio.h>
#include<stdlib.h>

struct Node {
	int data;
  struct Node *next;
};

struct Node * push(struct Node *head_ref,int new_data ){
	
	struct Node *temp = malloc(sizeof(head_ref));
	  temp->data = new_data;
	  temp->next = NULL;
/*	while(head_ref->next!=NULL){
		head_ref = head_ref->next;
		printf("Addloop\n");
	} */
    head_ref->next = temp;
	
 return temp;

}

void reverse(struct Node *head_ref){
	
}
void printList(struct Node *head){
	//printf("Print: %d\n",head->data);
	while(head->next!=NULL){
		head = head->next;
		printf("%d  ",(head->data));
		
	}
}
int main(){
	int i,j,n;
	int data;
	struct Node *p,*head;
    head = malloc(sizeof(p));
    p = head;
    p->next = NULL;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&data);
	  p= push(p,data);
	}
	printList(head);
	
	return 0;
}
