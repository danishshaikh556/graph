//#ifdef _graph_h
#include "Graph.h"


Graph::Graph(string xd)
{
g=new graphT;


}

void Graph::addnode(string name,float xval,float yval)
{
  //if(!nodemap[name])

	nodeT *t=new nodeT;
	t->nodename=name;
	t->x=xval;
	t->y=yval;
	
	
	g->nodes.push_back(t);
	
	g->nodemap[name]=t;
	
}

void Graph::addarc(string n1,string n2,float dist)
{   // cout<<"fssfsfsf"<<endl;
	nodeT *t1=g->nodemap[n1];
	//cout<<t1->nodename<<endl;
	nodeT *t2=g->nodemap[n2];

	arcfinal(t1,t2,dist);
	arcfinal(t2,t1,dist);

}

void Graph::arcfinal(nodeT * a,nodeT * b, float len)
{
	arcT * d=new arcT;
	d->start=a;
	d->finish=b;
	d->distance=len;

	g->arcs.push_back(d);
	a->arcs.push_back(d);
}

void Graph::printarcs()
{  for (int i=0;i<g->arcs.size();i++)
{
	cout<<g->arcs[i]->start->nodename<<"-----"<<g->arcs[i]->finish->nodename<<endl;
}
}

//#endif
