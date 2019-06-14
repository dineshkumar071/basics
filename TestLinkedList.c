#include<stdio.h>
#include<stdlib.h>

struct LinkedList{	
	int mark;
	struct LinkedList *next;	
};

struct LinkedList *head;

void create_node(int a){
	struct LinkedList *new_node = NULL;
	new_node = (struct LinkedList*)malloc(sizeof(struct LinkedList));
	new_node->mark = a;
	new_node->next = NULL;
	
	if(head == NULL){
		head = new_node;
	}else{
		struct LinkedList *current=head;
		while(current->next!=NULL){
			current=current->next;
		}
		current->next=new_node;
	}
}

void display(){
	struct LinkedList *current=head;
	while(current!=NULL){		
		printf("%d \n",current->mark);
		current=current->next;		
	}
}

void update(int a,int b){
	struct LinkedList *current=head;
	while(current!=NULL){
		if(current->mark==a){				
			current->mark=b;
		}
		current=current->next;			
	}
}

void delete(int a){
	struct LinkedList *current=head;
	struct LinkedList *cal=head;
	struct LinkedList *temp;
	struct LinkedList *pre;
	
	while(current!=NULL){
		if(current->mark==a){
			temp=current;
			break;
		}
		current=current->next;	
	}	
	while(cal!=NULL){
		if(cal->next==temp){
			pre = cal;
			break;	
		}
 		cal = cal->next;		
 	}
 	pre->next = temp->next;
	free(temp);
}

int main(){
	int n,i,e,d,aa,dd,dd1;
	int choise=0;
	while(choise == 0){
		printf("0 for continue :\n 1 for break: \n");
		scanf("%d",&choise);
		if(choise == 1)
			break;
				
		printf("\n 1 for Insert \n 2 for delete \n 3 for display \n 4 for update \n Enter no :");
		scanf("%d",&aa);
		switch(aa){
			case 1:{
				printf("Enter the no of node  :\n");
				scanf("%d",&n);
				for(i=n;i>0;i--){
					printf("Enter the no of elements :\n");
					scanf("%d",&e);
					create_node(e);
				}		
				break;
			}
			case 2:{
					printf("Enter the number u want delete :\n");
					scanf("%d",&d);
					delete(d);
				break;
			}
			case 3:{
				display();
				break;
			}
			case 4:{
				printf("Enter the number u want update :\n");
				scanf("%d",&dd);
				printf("New value : \n");
				scanf("%d",&dd1);
				update(dd,dd1);
				break;
			}
			default:{
				printf("Enter the correct number :");
				break;
			}
		}	
	}
	return 0;
}
