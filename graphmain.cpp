#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include "Graph.h"

#include<map>
#include<set>

#include <fstream>
#include <vector>
#include <string>
using namespace std;
string a,m,n;
float b,c,l;

int main()
{
  Graph danny("danish");

	
	ifstream in;
	string s="Stanfordnodes.txt";
	in.open(s.c_str());
	if(in.fail()) cout<<"wew"<<endl;
	while(!in.fail())
	{
		
	//	getline(in,a);
		in>>a>>b>>c;
		//cout<<a<<b<<c<<endl;
	danny.addnode(a,b,c);
	}
	in.close();
	
	ifstream inn;
	string q="Stanfordarcs.txt";
	inn.open(q.c_str());
	if(inn.fail()) cout<<"wew"<<endl;
	while(!inn.fail())
	{
		//cout<<"sdsddse"<<endl;
	//	getline(in,a);
		inn>>m>>n>>l;
		//cout<<m<<n<<l<<endl;
	danny.addarc(m,n,l);
	}

	danny.printarcs();
	int yu;
	cout<<"thsfisend"<<endl;
	cin>>yu;

	return 1;
}
