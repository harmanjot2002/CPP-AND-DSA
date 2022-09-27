#include<bits/stdc++.h>
using namespace std;
#define V 7
#define pb push_back

unordered_map<int,vector<int>> adj;

void DFS(int u,vector<int>& disc,vector<int>& low,stack<int>& mystack,vector<bool>& presentInStack)
{
	static int time = 0;
	disc[u] = low[u] = time;
	time+=1;
	mystack.push(u);
	presentInStack[u] = true;

	for(int v: adj[u])
	{
		if(disc[v]==-1)	//If v is not visited
		{
			DFS(v,disc,low,mystack,presentInStack);
			low[u] = min(low[u],low[v]);
		}
		//Differentiate back-edge and cross-edge
		else if(presentInStack[v])	//Back-edge case
			low[u] = min(low[u],disc[v]);
	}

	if(low[u]==disc[u])	//If u is head node of SCC
	{
		cout<<"SCC is: ";
		while(mystack.top()!=u)
		{
			cout<<mystack.top()<<" ";
			presentInStack[mystack.top()] = false;
			mystack.pop();
		}
		cout<<mystack.top()<<"\n";
		presentInStack[mystack.top()] = false;
		mystack.pop();
	}
}

void findSCCs_Tarjan()
{
	vector<int> disc(V,-1),low(V,-1);
	vector<bool> presentInStack(V,false);	//Avoids cross-edge
	stack<int> mystack;

	for(int i=0;i<V;++i)
		if(disc[i]==-1)
			DFS(i,disc,low,mystack,presentInStack);
}

int main()
{
	adj[0].pb(1);
	adj[1].pb(2);
	adj[1].pb(3);
	adj[3].pb(4);
	adj[4].pb(0);
	adj[4].pb(5);
	adj[4].pb(6);
	adj[5].pb(6);
	adj[6].pb(5);

	findSCCs_Tarjan();
	return 0;
}

//TIME COMPLEXITY: O(V+E)