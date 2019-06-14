#include<stdio.h>
#include<stdlib.h>

struct DoubleLinkedList{
	
	int mark;
	struct DoubleLinkedList *pre;
	struct DoubleLinkedList *next;
	
};

struct DoubleLinkedList *head=NULL;

void create_Node(int a){

	struct DoubleLinkedList *new_node=NULL;
	
	new_node=malloc(sizeof(struct DoubleLinkedList));
	new_node->pre=NULL;
	new_node->mark=a;
	new_node->next=NULL;
	
	if(head==NULL){
		head=new_node;
	}
	else{		
		struct DoubleLinkedList *current=head;
		while(current->next!=NULL){
			
			current=current->next;
		}
		new_node->pre=current;
		current->next=new_node;
	}	
}
void delete(int a){
	struct DoubleLinkedList *current=head;
	struct DoubleLinkedList *pree;
	struct DoubleLinkedList *next;
	struct DoubleLinkedList *temp;
	while(current!=NULL){
	if((current->mark==a)){
		if(current==head){
			//printf("head");
			temp=current;
			head=current->next;
			head->pre=NULL;
			free(temp);
			break;
		}if(current->next==NULL){
			//printf("last");
			temp=current;
			current=current->pre;
			current->next=NULL;
			free(temp);
			break;
		}else{
			//printf("good");
			temp=current;
			pree=temp->pre;
			next=temp->next;
			pree->next=next;
	        next->pre=pree;
            free(temp);
		}
	}
	current=current->next;
	}	
}

void display(){
	struct DoubleLinkedList *current=head;
	while(current!=NULL){
		printf("%d",current->mark);
		current=current->next;		
	}	
}
void update(int a,int b){
		struct DoubleLinkedList *current=head;
		while(current!=NULL){
			if(current->mark==a){
				
				current->mark=b;
			}
			current=current->next;			
		}		
}

int main(){
	int n,i,e,del,option,old_val,new_val;
	int check=0;
	while(check == 0){
		if(check == 0){
			printf("\n0 For continue :: 1 For break : ");
    		scanf("%d",&check);
			if(check > 0){
				break;
			}
	}
	printf("1 For Insert \n2 For Delete \n3 For Display \n4 For Update\n");
	scanf("%d",&option);
	
	switch(option){
		case 1:{
			printf("Enter the no of node : \n");
    		scanf("%d",&n);
			for(i=n;i>0;i--){
				printf("Enter the no of elements : \n");
				scanf("%d",&e);
				create_Node(e);
			}		
			break;
		}
		case 2:{
				printf("Enter the number u want delete : \n");
				scanf("%d",&del);
				delete(del);
			break;
		}
		case 3:{
			
			display();
			break;
		}
		case 4:{
			printf("Enter the number u want update : \n");
			scanf("%d",&old_val);
			printf("Enter New value : \n");
			scanf("%d",&new_val);
			update(old_val,new_val);
			break;
		}
		default:{
			printf("Enter the correct number");
			break;
		}
	}	
	
 }

	return 0;
}
