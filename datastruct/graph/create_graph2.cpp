#include <stdio.h>
#include<stdlib.h>
#include <malloc.h>

#define Vextype char
#define Maxlen 40
int visited[Maxlen];

#define MAXNUM 100
#define elemtype int
typedef struct
{
	elemtype queue[MAXNUM];
	int front;
	int rear;
}sqqueue;

typedef struct ArcNode  //�߽��
{
	int adjvex;//�ñ���ָ��Ķ���λ��
	struct ArcNode *next;//ָ����һ���ߵ�ָ��
}ArcNode;

typedef struct VNode     //������Ϣ
{
	Vextype data;
	ArcNode *firstarc;//ָ���һ�������ö���ıߵ�ָ��
}VNode,AdjList[Maxlen];

typedef struct//�ڽӱ�
 {
	AdjList vertices;
	int vexnum,arcnum;//ͼ�ĵ�ǰ����ͱ��� 
	int kind;//ͼ�����ࣨ����ͼ��������������ͼ����������
}ALGraph;

int LocateVex(ALGraph G,Vextype v)
{
	int i;
	for(i=0;i<G.vexnum;++i)
		if(v==G.vertices[i].data)
			return i;
	return -1;
}

void create_ALGraph(ALGraph &G)
{//�����ڽӱ��ʾ������������ͼG
	int i=0,j=0,k=0;
	Vextype v1,v2;
	ArcNode *p1,*p2;
	printf("�����붥�����ͱ������ö��ŷֿ�����");
	scanf("%d,%d",&G.vexnum,&G.arcnum);
	for(i=0;i<G.vexnum;++i)
	{
		printf("���붥��%d��ֵ��",i+1);
		scanf(" %c",&G.vertices[i].data);
		G.vertices[i].firstarc=NULL;
	}
	for(k=0;k<G.arcnum;++k)
	{
		printf("�����%d���ߵ���ʼ�������ֹ���㣨�ö��ŷֿ�����",k+1);
		scanf(" %c,%c",&v1,&v2);

		i=LocateVex(G,v1);
		j=LocateVex(G,v2);

		p1=(ArcNode *)malloc(sizeof(ArcNode));
		p1->adjvex=j;
		p1->next=G.vertices[i].firstarc;
		G.vertices[i].firstarc=p1;

		p2=(ArcNode *)malloc(sizeof(ArcNode));
		p2->adjvex=i;
		p2->next=G.vertices[j].firstarc;
		G.vertices[j].firstarc=p2;
	}

} 

//���г�ʼ��
int initqueue(sqqueue *q)
{
	if(!q) return false;
	q->front=0;
	q->rear=0;
	return true;
}

//���
int append(sqqueue *q,elemtype x)
{
	if((q->rear+1)%MAXNUM==q->front) return false;
	q->queue[q->rear]=x;
	q->rear=(q->rear+1)%MAXNUM;
	return true;
}

//����
elemtype Delete(sqqueue *q)
{
	elemtype x;
	if(q->rear==q->front) return false;
	x=q->queue[q->front];
	q->front=(q->front+1)%MAXNUM;
	return x;
}

//�ж϶����Ƿ�Ϊ��
int empty(sqqueue *q)
{
	if(q->rear==q->front) return true;
	else return false;
}
void BFS(ALGraph g,int v)
{//ͼgΪ�ڽӱ����ͣ��ӵ�v������������������������ͼG
	sqqueue q;
	int u;
	printf("%3d",v);
	visited[v]=1;
	initqueue(&q);//��ʼ������ 
	append(&q,v);//v��� 
	while(!empty(&q))//���зǿ� 
	{
		u=Delete(&q);//��ͷԪ�س��� 
		ArcNode *w=g.vertices[u].firstarc;//u�ĵ�һ���ڽӵ� 
		while(w!=NULL)
		{
			if(!visited[w->adjvex])//wΪu����δ���ʵ��ڽӵ� 
			{
				int data;
                data=w->adjvex;
                printf("%3d",w->adjvex);
                visited[w->adjvex]=1;
				append(&q,data);//w��� 
            }
            w = w->next;
        }
	}
}

int main()
{
	ALGraph G;
	int i;
	ArcNode *p;
	printf("\n�����ڽӱ��ʾ��ͼ��\n");
    create_ALGraph(G);
    printf("\n\n\nͼ���ڽ�������ʾ��\n");
	for(i=0;i<G.vexnum;i++)
	{
		printf("<%d> %c ",i,G.vertices[i].data );
		p=G.vertices[i].firstarc ;
		while(p!=NULL)
		{
			printf("-> %d",p->adjvex );
			p=p->next ;
		}
		printf("->NULL \n");
	}
	printf("�Ӷ���0��ʼ��BFS���ǵݹ��㷨����\n");
	BFS(G,0);
	return 0;
}

