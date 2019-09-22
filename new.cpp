//BFS
#include <bits/stdc++.h>

using namespace std;

void bfs(int n, vector<int>g[], int source){
    bool visited[n+1];
    int distance[n+1];
    for(int i=1;i<=n;i++) {
        visited[i] = false;
    }

    queue<int>q;
    q.push(source);
    visited[source] = 1;
    distance[source] = 0;

    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(int i=0;i<(int)g[u].size();i++){
            int v=g[u][i];
            if(!visited[v]){
                visited[v] = true;
                q.push(v);
                distance[v] = distance[u] + 1;
            }
        }
    }
    for(int i=1
        ;i<=n;i++){
        cout<<source<<" --> "<<i<<" = "<<distance[i]<<endl;
    }
}
int main(){

    vector<int>g[10000]; //this code can handle maximum 10000 nodes
    int numNodes, numEdges;
    cin>>numNodes>>numEdges;
    for(int i=0;i<numEdges;i++){
        int u, v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    int source;
    cin>>source;
    bfs(numNodes, g, source);

    return 0;
}
//DFS

#include <bits/stdc++.h>

using namespace std;

#define MAXN 100000
#define WHITE 0
#define GREY 1
#define BLACK 2

vector< int > G[MAXN];
int dfsTime = 0;
int color[MAXN];
int d[MAXN];
int f[MAXN];

void DFS(int u) {
	dfsTime = dfsTime + 1;
	d[u] = dfsTime;
	color[u] = GREY;
	for(int i = 0; i<(int)G[u].size(); i++) {
		int v = G[u][i];
		//if color[v] is grey, it is a back edge
		//if color[v] is white, it is a tree edge
		if(color[v] == WHITE) {
			DFS(v);
		}
	}
	color[u] = BLACK;
	dfsTime = dfsTime + 1;
	f[u] = dfsTime;
}
int main(){

	int n, e;
	cin>>n>>e;
	for(int i = 0; i < e; i++) {
		int u, v;
		cin>>u>>v;
		G[u].push_back(v);
	}

	for(int i=1;i<=n;i++){
		if(color[i] == WHITE) {
			DFS(i);
		}
	}

	for(int i = 1; i <=n; i++){
		cout<<i<<" -> "<<d[i]<<" "<<f[i]<<endl;
	}
    return 0;
}

//Dijkstra
#include <bits/stdc++.h>

using namespace std;
#define infinity 1<<30  //2^30
struct node{
    int u;
    int cost;
    node(int _u, int _cost){
        u = _u;
        cost = _cost;
    }
    bool operator < ( const node& p ) const {      return cost > p.cost;   } //Operator overloading

};
void dijstkra(int n, vector<int>g[], vector<int>cost[], int source){

    int distance[n+1];
    for(int i=1;i<=n;i++) {
        distance[i] = infinity;
    }

    priority_queue<node>q;
    q.push(node(source,0));
    distance[source] = 0;

    while(!q.empty()){
        node top = q.top();
        q.pop();
        int u=top.u;

        for(int i=0;i<(int)g[u].size();i++){
            int v=g[u][i];

            //Relaxation
            if(distance[u] + cost[u][i] < distance[v]){
                distance[v] = distance[u] + cost[u][i];
                q.push(node(v, distance[v]));
            }
        }
    }
    for(int i=1;i<=n;i++){
        cout<<source<<" --> "<<i<<" = "<<distance[i]<<endl;
    }
}
int main(){

    vector<int>g[10000], cost[10000]; //this code can handle maximum 10000 nodes
    int numNodes, numEdges;
    cin>>numNodes>>numEdges;
    for(int i=0;i<numEdges;i++){
        int u, v, w;
        cin>>u>>v>>w;
        g[u].push_back(v);
        g[v].push_back(u);
        cost[u].push_back(w);
        cost[v].push_back(w);
    }
    int source;
    cin>>source;
    dijstkra(numNodes, g, cost, source);

    return 0;
}
//Stable Marriage
#include <bits/stdc++.h>

using namespace std;


int main(){

    int engagedTo[1000];
	queue<int>menPrefQ[1000];
	queue<int>freeMenQ;
	map<string, int>mark;
	string numberToString[1000];
	int womenPrefRank[1000][1000];
	memset(womenPrefRank, -1, sizeof womenPrefRank);
	memset(engagedTo, -1, sizeof engagedTo);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++) {
		string u;
		cin>>u;
		int numNodes = i;
		mark[u] = numNodes;
		numberToString[numNodes] = u;
		freeMenQ.push(mark[u]);
	}

	for(int i =1 ;i <= n;i++) {
		string u;
		cin>>u;
		int numNodes = n + i;
		mark[u] = numNodes;
		numberToString[numNodes] = u;
	}

	for(int u = 1 ; u <= n; u++) {
		for(int j = 1 ; j <=n ; j++) {
			string v;
			cin>>v;
			menPrefQ[u].push(mark[v]);
		}
	}

	for(int v = n + 1 ; v <= n + n; v++) {
		for(int j = 1; j <= n; j++){
			string u;
			cin>>u;
			womenPrefRank[v][mark[u]] = n - j + 1;
		}
	}

	while(!freeMenQ.empty()){
		int u = freeMenQ.front();
		freeMenQ.pop();
		int v = menPrefQ[u].front();
		menPrefQ[u].pop();
		if(engagedTo[v] == -1) {
			engagedTo[v] = u;
		} else {
			int w = engagedTo[v];
			if(womenPrefRank[v][u] > womenPrefRank[v][w]) {
				freeMenQ.push(w);
				engagedTo[v] = u;
			} else {
				freeMenQ.push(u);
			}
		}
	}


	for(int i = n + 1; i <= n + n;i++) {
		cout<<numberToString[i]<<" "<<numberToString[engagedTo[i]]<<endl;
	}
    return 0;
}
//Topsort

#include <bits/stdc++.h>

using namespace std;


int main(){
    freopen("in", "r", stdin);
    vector<int>g[10000]; //this code can handle maximum 10000 nodes
    int numEdges;
    int numNodes = 0;
    map<string, int>mark;
    cin>>numEdges;
    int indegree[10000] = {0};
    string numberToString[10000];

    for(int i=0;i<numEdges;i++){
        string a, b;
        cin>>a>>b;
        int u, v;

        if(mark.find(a) == mark.end()) { //We found a new node
			numNodes = numNodes + 1;	 //Increment number of nodes
			mark[a] = numNodes;          //Represent the String using an integer
			numberToString[numNodes] = a; //do a reverse mapping too so that we can find the original node name
		}

		if(mark.find(b) == mark.end()) {
			numNodes = numNodes + 1;
			mark[b] = numNodes;
			numberToString[numNodes] = b;
		}

		u = mark[a];	//Get integer representation of the node name
		v = mark[b];

		g[u].push_back(v);
		indegree[v]++; //Keep track of indegree
    }

    queue<int>q; //this will contain all the nodes with indegree 0
    for(int u = 1; u<=numNodes; u++) {
		if (indegree[u] == 0) {
			q.push(u);
		}
	}

	vector<string>order;
	while(!q.empty()) {
		int u = q.front();
		order.push_back(numberToString[u]); //Add to answer
		q.pop();
		for(int i = 0;i<(int)g[u].size(); i++){
			int v = g[u][i];
			indegree[v] --;
			if(indegree[v] == 0) {
				q.push(v); //We found a new node which have indegree 0
			}
		}
	}

	for(int i=0;i<(int)order.size();i++){
		cout<<i+1 <<" > " <<order[i]<<endl;
	}
    return 0;
}
//bellman-ford

#include <bits/stdc++.h>

using namespace std;
#define infinity 1<<28
#define mx 100

void bellman(int n, vector<int>g[], vector<int>cost[], int source){
    int distance[n+1];
    for(int i=1;i<=n;i++){
        distance[i] = infinity;
    }
    distance[source] = 0;
    bool neg_cycle = false;

    for(int k=1;k<=n;k++){
        bool updated = false;
        for(int u=1;u<=n;u++){
            for(int i=0;i<(int)g[u].size();i++){
                int v = g[u][i];
                //Relaxation
                if(distance[u] + cost[u][i] < distance[v]){
                    updated = true;
                    distance[v] = distance[u] + cost[u][i];
                }
            }
        }

        if(k==n and updated==true){ //update in the n^th iteration
            neg_cycle = true;
        }
    }
    if(neg_cycle)puts("Negative cycle detected");
    else
    {
        for(int i=1;i<=n;i++){
            cout<<source<<" --> "<<i<<" = "<<distance[i]<<endl;
        }
    }
}

int main(){
    freopen("in", "r", stdin);
    vector<int>g[10000],cost[10000];
    int numNodes, numEdges;
    cin>>numNodes>>numEdges;


    for(int i=0;i<numEdges;i++){
        int u, v, w;
        cin>>u>>v>>w;
        g[u].push_back(v);
        g[v].push_back(u);
        cost[u].push_back(w);
        cost[v].push_back(w);
    }

    int source;
    cin>>source;
    bellman(numNodes, g, cost, source);


    return 0;
}
//floyd
#include <bits/stdc++.h>

using namespace std;
#define infinity 1<<28
#define mx 100

void floyd_warshall(int numNodes, int g[][mx]){
    for(int k=1;k<=numNodes;k++){
        for(int i=1;i<=numNodes;i++){
            for(int j=1;j<=numNodes;j++){
                g[i][j] = min(g[i][j], g[i][k] + g[k][j]);
            }
        }
    }
}

int main(){
    //freopen("in", "r", stdin);
    int numNodes, numEdges;
    cin>>numNodes>>numEdges;
    int g[mx][mx];

    for(int i=1;i<=numNodes;i++){
        for(int j=1;j<=numNodes;j++){
            if(i==j) g[i][j]=0;
            else g[i][j]=infinity;
        }
    }

    for(int i=0;i<numEdges;i++){
        int u, v, w;
        cin>>u>>v>>w;
        g[u][v] = w;
        g[v][u] = w;

    }

    floyd_warshall(numNodes, g);
    for(int i=1;i<=numNodes;i++){
        for(int j=1;j<=numNodes;j++){
            cout<<g[i][j]<<" ";
        }
        puts("");
    }

    return 0;
}
//kruskal


#include <bits/stdc++.h>

using namespace std;
#define infinity 1<<28
#define mx 100000

int parent[mx];
void makeset(int u){
    parent[u] = u;
}
void init_disjoint_set(int numNodes){
    for(int i=1;i<=numNodes;i++) {
        makeset(i);
    }
}

int find_representative(int u){
    if(parent[u]==u) return u;
    return find_representative(parent[u]);
}

int set_union(int u,int v){
    int rep_u = find_representative(u);
    int rep_v = find_representative(v);
    if (rep_u != rep_v) {
        parent[rep_u] = rep_v;
        return true;
    }
    return false; //u, v are already in same component
}

struct edge{
    int u, v, w;
    edge(int _u,int _v, int _w) {
        u = _u;
        v = _v;
        w = _w;
    }
};
bool comp(edge a, edge b){
    return a.w < b.w;
}
int main(){
    //freopen("in", "r", stdin);
    int numNodes, numEdges;
    cin>>numNodes>>numEdges;
    init_disjoint_set(numNodes);

    vector<edge>edges;
    for(int i=0;i<numEdges;i++){
          int u, v, w;
          cin>>u>>v>>w;
          edges.push_back(edge(u, v,w));
    }

    sort(edges.begin(), edges.end(), comp);

    int sum = 0;
    for(int i=0;i<(int)edges.size();i++){
        edge currentEdge = edges[i];
        int ret = set_union(currentEdge.u, currentEdge.v);
        if(ret == true){
            sum = sum + currentEdge.w;
        }
    }

    cout<<sum<<endl;

    return 0;
}

