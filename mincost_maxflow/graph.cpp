#include "graph.h"



Graph::Graph(int V)
{
	V_ = V;

	for (int i = 0; i < V; i++)
		vertex.push_back(Vertex());
}


Graph::~Graph()
{
}

void Graph::AddEdge(int u, int v, int cost, int capacity)
{
	edge.push_back(Edge(cost, 0, capacity, u, v));
}

