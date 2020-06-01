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

typedef struct ArcNode  //边结点
{
	int adjvex;//该边所指向的顶点位置
	struct ArcNode *next;//指向下一条边的指针
}ArcNode;

typedef struct VNode     //顶点信息
{
	Vextype data;
	ArcNode *firstarc;//指向第一条依附该顶点的边的指针
}VNode,AdjList[Maxlen];

typedef struct//邻接表
 {
	AdjList vertices;
	int vexnum,arcnum;//图的当前顶点和边数 
	int kind;//图的种类（有向图、有向网、无向图、无向网）
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
{//采用邻接表表示法，创建无向图G
	int i=0,j=0,k=0;
	Vextype v1,v2;
	ArcNode *p1,*p2;
	printf("请输入顶点数和边数（用逗号分开）：");
	scanf("%d,%d",&G.vexnum,&G.arcnum);
	for(i=0;i<G.vexnum;++i)
	{
		printf("输入顶点%d的值：",i+1);
		scanf(" %c",&G.vertices[i].data);
		G.vertices[i].firstarc=NULL;
	}
	for(k=0;k<G.arcnum;++k)
	{
		printf("输入第%d条边的起始顶点和终止顶点（用逗号分开）：",k+1);
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

//队列初始化
int initqueue(sqqueue *q)
{
	if(!q) return false;
	q->front=0;
	q->rear=0;
	return true;
}

//入队
int append(sqqueue *q,elemtype x)
{
	if((q->rear+1)%MAXNUM==q->front) return false;
	q->queue[q->rear]=x;
	q->rear=(q->rear+1)%MAXNUM;
	return true;
}

//出队
elemtype Delete(sqqueue *q)
{
	elemtype x;
	if(q->rear==q->front) return false;
	x=q->queue[q->front];
	q->front=(q->front+1)%MAXNUM;
	return x;
}

//判断队列是否为空
int empty(sqqueue *q)
{
	if(q->rear==q->front) return true;
	else return false;
}
void BFS(ALGraph g,int v)
{//图g为邻接表类型，从第v个顶点出发广度优先搜索遍历图G
	sqqueue q;
	int u;
	printf("%3d",v);
	visited[v]=1;
	initqueue(&q);//初始化队列 
	append(&q,v);//v入队 
	while(!empty(&q))//队列非空 
	{
		u=Delete(&q);//队头元素出队 
		ArcNode *w=g.vertices[u].firstarc;//u的第一个邻接点 
		while(w!=NULL)
		{
			if(!visited[w->adjvex])//w为u的尚未访问的邻接点 
			{
				int data;
                data=w->adjvex;
                printf("%3d",w->adjvex);
                visited[w->adjvex]=1;
				append(&q,data);//w入队 
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
	printf("\n创建邻接表表示的图：\n");
    create_ALGraph(G);
    printf("\n\n\n图的邻接链表显示：\n");
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
	printf("从顶点0开始的BFS（非递归算法）：\n");
	BFS(G,0);
	return 0;
}

