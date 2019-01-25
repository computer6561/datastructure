#include<stdio.h>
#include<stdlib.h>
 
/* Link list node */
struct Node
{
    int data;
    struct Node* next;
};
void push(struct Node** head_ref, int new_data);
void reverse(struct Node** head_ref);
void printList(struct Node *head);

void push(struct Node **head_ref,int new_data ){
	struct Node *temp = malloc(sizeof(struct Node *));
	temp->next  =NULL;
	temp->data = new_data;
	
	if(*head_ref==0)
	{
	  
	  *head_ref = temp;
   }
	else{
		 struct Node *p = malloc(sizeof(struct Node *));
		 p = *head_ref;
	    
		while( p->next!=NULL){	 
			p = p->next;
		}
	    	p->next=temp;
	     
	}
	
	
                                                
}
void reverse(struct Node** head_ref){
	int a[100],i=0,j;
	struct Node *p = malloc(sizeof(struct Node *));
		 p = *head_ref;
		while( p->next!=NULL){	
	    	a[i] = p->data;
			i++; 
			p = p->next;
		} 
		a[i]=p->data;
		for(j=i;j>=0;j--)
		 printf("\t%d",a[j]);
}
void printList(struct Node *head){
struct Node *p = malloc(sizeof(struct Node *));
	p = head;
    while( p->next!=NULL){
		printf("\t%d",p->data);
		p = p->next;
	}
	printf("\t%d",p->data);
}
int main()
{
    /* Start with the empty list */
    struct Node* head = NULL;
   	 int a,x,i;
   	 scanf("%d",&a);
   	 for(i=0; i<a; i++){
   	 	scanf("%d",&x);
   	   
   	 	push(&head, x);
   	 	
   	 }	
   
     
     reverse(&head);     
	 	printf("\n");                 
     printList(head);    
     getchar();
}
