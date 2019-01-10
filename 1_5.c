#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node * next;
};
void search(int x,struct Node * start,int n1){
	
	struct Node * b =start;
	//printf("%d",b->data);
	int ans[100];int cnt=1;int p,g=0;
	for( p=0;p<100;p++) ans[p]=0;
	while(cnt!=n1+1){
		//printf("%d ",b->data);
		if(b->data==x){			
			ans[g]=cnt;
			g+=1;
		}
		b=b->next;
		cnt+=1;
	}	
	for(p=0;p<g;p++) {
		printf("%d ",ans[p]);
	}
}
void delete(int x,struct Node * start,int n1){
	struct Node *b = start;
	while(cnt!=n1+1){
		if(b->data == x && flag==0){
			flag=1;
		}
		else if(b->data== x && flag == 1){
			
		}
		
		b=b>next;
		cnt+=1;
	}
	
	
}
int main(){
	int n,x;
	scanf("%d %d",&n,&x);
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
	//printf("%d ",t->data);
	
	temp-=1;
	
}
search(x,head,n); 
delete (x,head,n);

}