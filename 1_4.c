#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node *next;

};
int main(){
	int n,k;
	scanf("%d %d",&n,&k);
	if(k>n || k<=0){printf("Not possible");exit(0);}
	int temp=n;
	struct Node * head=NULL;
	struct Node * c =head;
	
	while(temp!=0){
	
	struct Node * t =malloc(sizeof(struct Node));
	if(temp==n){
	head=t;
	c=head;
}else{
		c->next=t;
		c=c->next;

}
	int g;
	scanf("%d",&g);	
	t->data = g;
	
	temp-=1;
	
}
	//printf("%d ",head->data);
	struct Node * a =head;
	//printf("%d ",(a->next)->next->data);
	int cnt=1;
	while(cnt!=n-k+1){
	
	a=a->next;
	cnt+=1;
} 	
	printf("%d",a->data);
}