#include<iostream>
using namespace std;
typedef struct node
{
	int data;
struct node *next;
}LNode,*LinkList;
LinkList Creat()
{
	LinkList H;
	H=(LinkList)malloc(sizeof(LNode));
	if(H)
		H->next=NULL;
	return H;
}
void Destroy(LinkList H)
{
	LinkList p,q;
	p=H;
	while(p)
	{
		q=p;
		p=p->next;
		free(q);
	}
	H=NULL;
}
void Build(LinkList L)
{
	LinkList p;
	int m,i,n;
	cout<<"请输入链表中的数据的个数"<<endl;
	cin>>m;
	p=L;
	cout<<"请依次输入链表中的数据"<<endl;
	for(i=0;i<m;i++)
	{
		cin>>n;
		p->next=Creat();
		p=p->next;
		p->data=n;
	}

}
LinkList Sear(LinkList L,int value)
{
	LinkList p;
	p=L;
	p=p->next;
	while(p)
	{
		if(p->data==value)
			return p;
		else
		{
			p=p->next;
		}
	}
	if(p->next==NULL)
		return NULL;
}
void Show(LinkList L)
{
	LinkList H;
	H=L;
	H=H->next;
	while(H)
	{
		cout<<H->data<<" ";
		H=H->next;
	}
}
void main()
{
	LinkList H;
	H=Creat();
	Build(H);
	Show(H);
	cout<<Sear(H,7)<<endl;;
	Destroy(H);
}
}*/
