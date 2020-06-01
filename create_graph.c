#include <stdio.h>
#include<stdlib.h>
#include <malloc.h>
#define Vextype char
#define Adjtype int
#define Maxlen 40
typedef struct
{
	Vextype vexs[Maxlen];	//顶点的集合
    Adjtype	arcs[Maxlen][Maxlen];	//边的集合
    int vexnum,arcnum;	//顶点数和边数
    int kind;	//图的种类（有向图、有向网、无向图、无向网）
}Mgraph;
int LocateVex(Mgraph G,Vextype v)
{
	int i;
	for(i=0;i<G.vexnum;++i)
		if(v==G.vexs[i])
			return i;
	return -1;
}

Mgraph create_UDG()
{//采用邻接矩阵表示法，创建无向图G
	Mgraph G;
	Vextype v1,v2;
	int i,j,k;
	printf("请输入顶点数和边数（用逗号分开）：");
	scanf("%d,%d",&G.vexnum,&G.arcnum);	
	for(i=0;i<G.vexnum;++i)
	{
		printf("输入顶点%d的值：",i+1);
		scanf(" %c",&G.vexs[i]);
	}
	for(i=0;i<G.vexnum;++i)
		for(j=0;j<G.vexnum;++j)
			G.arcs[i][j]=0;
	for(k=0;k<G.arcnum;++k)
	{
		printf("输入第%d条边的起始顶点和终止顶点（用逗号分开）：",k+1);
		scanf(" %c,%c",&v1,&v2);

		i=LocateVex(G,v1);
		j=LocateVex(G,v2);

		G.arcs[i][j]=1;
		G.arcs[j][i]=G.arcs[i][j];
	}
	return G;
}

Mgraph create_DN()
{//采用邻接矩阵表示法，创建有向网G
	Mgraph G;
	Vextype v1,v2;
	int i,j,k,weight;
	printf("请输入顶点数和弧数（用逗号分开）：");
	scanf("%d,%d",&G.vexnum,&G.arcnum);
	for(i=0;i<G.vexnum;++i)//初始化邻接矩阵
		for(j=0;j<G.vexnum;++j)
			G.arcs[i][j]=32768;//表示极大值，即无穷
	for(i=0;i<G.vexnum;++i)
	{
		printf("输入顶点%d的值：",i+1);
		scanf(" %c",&G.vexs[i]);
	}
	for(k=0;k<G.arcnum;++k)
	{
		printf("输入第%d条弧的起始顶点和终止顶点及权值（用逗号分开）：",k+1);
		scanf(" %c,%c,%d",&v1,&v2,&weight);

		i=LocateVex(G,v1);
		j=LocateVex(G,v2);

		G.arcs[i][j]=weight;//建立弧
	}
	return G;
}
void main()
{
	Mgraph mg1,mg2;
	int i,j,n1,n2;
	//printf("\n创建邻接矩阵表示的无向图：\n");
	//mg1=create_UDG();
	printf("\n创建邻接矩阵表示的有向网：\n");
	mg2=create_DN();
	/*
	printf("\n\n无向图的邻接矩阵显示：\n");
	n1=mg1.vexnum ;
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n1;j++)
			printf("<%d ,%d> [%d] ",i,j,mg1.arcs [i][j]);
		printf("\n");
	}
	*/
	printf("\n\n有向网的邻接矩阵显示：\n");
	n2=mg2.vexnum ;
	for(i=0;i<n2;i++)
	{
		for(j=0;j<n2;j++)
			printf("<%d ,%d> [%d] ",i,j,mg2.arcs [i][j]);
		printf("\n");
	}	

}