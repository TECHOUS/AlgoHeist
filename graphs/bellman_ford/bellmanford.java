import java.util.ArrayList;  
import java.util.List;  
class Graph   
{  
//vertices of the graph  
private int V;    
//edges in the graph  
private List<Edge> edges;   
//creating a constructor of the Graph class and generating getters and setters  
public Graph(int v)   
{  
V = v;  
edges = new ArrayList<Edge>();  
}  
public int getV()   
{  
return V;  
}  
public void setV(int v)   
{  
V = v;  
}  
public List<Edge> getEdges()   
{  
return edges;  
}  
public void setEdges(List<Edge> edges)   
{  
this.edges = edges;  
}  
public void addEdge(int u, int v, int w)   
{  
Edge e = new Edge(u, v, w);  
edges.add(e);  
}  
}  
class Edge   
{  
//it is the source vertex      
private int u;   
//it is the destination vertex  
private int v;   
//it denotes the weight on edge
private int w;   
//generating getters and setters  
public int getU()   
{  
return u;  
}  
public void setU(int u)   
{  
this.u = u;  
}  
public int getV()   
{  
return v;  
}  
public void setV(int v)   
{  
this.v = v;  
}  
public int getW()   
{  
return w;  
}  
public void setW(int w)   
{  
this.w = w;  
}  
//creating constructor of the Edge class  
public Edge(int u, int v, int w)   
{  
this.u = u;  
this.v = v;  
this.w = w;  
}  
}  
public class bellmanford  
{  
public static void main(String args[])   
{  
Graph g = createGraph();  
int distance[] = new int[g.getV()];  
boolean hasNegativeCycle = getShortestPaths(g, 1, distance);  
if(!hasNegativeCycle)   
{  
System.out.println("Vertex \t: Distance");      
for(int i = 1; i < distance.length; i++)  
System.out.println("\t"+i + " " + "\t\t"+(distance[i] == Integer.MAX_VALUE ? "-" : distance[i]));  
}   
else   
{  
System.out.println("Negative cycle exists in the graph, no solution found!!!");  
}  
}  
private static Graph createGraph()   
{  
int v = 7;  
//creating a graph having 7 vertices  
Graph g = new Graph(v);  
//adding edges to the graph  
g.addEdge(1, 2, 4);  
g.addEdge(1, 4, 9);  
g.addEdge(2, 3, -1);  
g.addEdge(3, 6, 3);  
g.addEdge(4, 3, 2);  
g.addEdge(4, 5, -5);  
g.addEdge(5, 6, 0);       
//returns graph  
return g;  
}  
//Bellman-Ford logic  
public static boolean getShortestPaths(Graph g, int source, int[] distance)   
{  
int V = g.getV();  
//initializing distances from source to other vertices  
for(int i = 1; i < V; i++)   
{  
distance[i] = Integer.MAX_VALUE;  
}  
//source vertex initialize to 0  
distance[source] = 0;  
//relaxing edges  
for(int i = 1; i < V; i++)   
{  
//iterate over edges      
for(Edge e: g.getEdges())   
{  
int u = e.getU(), v = e.getV(), w = e.getW();  
if(distance[u] != Integer.MAX_VALUE && distance[v] > distance[u] + w)   
{  
//calculates distance      
distance[v] = distance[u] + w;  
}  
}  
}  
//checks if there exist negative cycles in graph G  
for(Edge e: g.getEdges())   
{  
int u = e.getU(), v = e.getV(), w = e.getW();  
if(distance[u] != Integer.MAX_VALUE && distance[v] > distance[u] + w)   
{  
return true;  
}  
}  
return false;  
}  
}