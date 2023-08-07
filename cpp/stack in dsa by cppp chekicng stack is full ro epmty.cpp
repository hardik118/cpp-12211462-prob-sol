#include<stdio.h>
#include<stdlib.h> 

struct stack
{
	int size;
	int top;
	int *arr;	
};
void  isempty(struct  stack *ptr )
{
	if(ptr->top==-1)
	{
	printf("stack is empty");
	}
		
	}
void  isfull(struct stack *ptr)
{
	if(ptr->top==ptr->size-1)
	{
		printf("stkc is full");
	}
}

int main(){

	struct stack *s= (struct stack *)malloc(sizeof(struct stack));
	s->size =6;
	s->top=-1;
	s->arr= (int*)malloc(s->size*sizeof(int));
	s->arr[0]=4;
	s->top++;

	isempty(s);
	isfull(s);
	return 0;
	
}

