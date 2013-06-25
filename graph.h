#ifndef _Graph_h
#define _Graph_h
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <map>
#include<set>



#include <fstream>
#include <vector>
#include <string>
using namespace std;



class Graph
{
public:
  
Graph(string xd);
	
	void addnode(string name,float xval,float yval);
	void addarc(string n1,string n2,float dist);
	void printarcs();
private:
	struct nodeT;
struct arcT;
	struct graphT
	{
		vector<nodeT *>nodes;
		vector<arcT * > arcs;
		map<string,nodeT * > nodemap;
	};
	struct nodeT{
		string nodename;
		float x,y;
		vector<arcT * > arcs;
	};
	struct arcT{
		nodeT * start;
		nodeT * finish;
		float distance;
	};
	void arcfinal(nodeT * a,nodeT * b, float len);
	graphT * g;
	//graphT *g=new graphT;
};

//#include "BST.cpp"

#endif

