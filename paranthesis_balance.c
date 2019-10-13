#include <stdio.h>
#include<stdlib.h>
typedef struct stack1
{
	char ch;
	struct stack1 * next;
}stack;
stack * push(stack * root,char ch)
{
	stack* temp=malloc(sizeof(stack));
	temp->ch=ch;
	if(root==NULL)
	{
		root=temp;
		temp->next=NULL;
		return(root);
	}
	temp->next=root;
	root=temp;
	return(root);
}
int peek(stack * root)
{
	if(root!=NULL)
		return(root->ch);
}
stack * pop(stack * root)
{	
	if(root==NULL)
		return(root);
	root=root->next;
	return(root);
}
void main()
{
	char * a=malloc(256);
	printf("Enter the string:");
	fgets(a,255,stdin);
	char * b=a;
	int x=0;
	char ele=*(b+0);
	stack * root=malloc(sizeof(stack));
	while(ele!='\0')
	{
		if(ele=='[' || ele==']' || ele=='(' || ele==')' || ele=='{' || ele=='}')
		{
			root=push(root,ele);
			x++;
		}
		ele=*(b++);
	}
	int sq1=0;
	int sq2=0;
	int c1=0;
	int c2=0;
	int cb1=0;
	int cb2=0;
	int p=0;
	while(p<=x)
	{
		char as=root->ch;
		//printf("%c",as);
		if(as=='[')
			sq1++;
		else if(as==']')
			sq2++;
		else if(as=='{')
			c1++;
		else if(as=='}')
			c2++;
		else if(as=='(')
			cb1++;
		else if(as==')')
			cb2++;
		root=pop(root);
		p++;
	}
	if(sq1==sq2 && c1==c2 && cb1==cb2)
		printf("Balanced ");
	else
		printf("Not Balanced ");
}