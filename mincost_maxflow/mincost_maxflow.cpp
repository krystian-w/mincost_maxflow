#include <iostream>
#include "graph.h"

int main()
{
	int V = 5;
	Graph G(V);

	// Create flow network
	G.AddEdge(0, 1, 3, 15);
	G.AddEdge(0, 3, 8, 20);
	G.AddEdge(1, 2, 5, 20);
	G.AddEdge(1, 3, 4, 15);
	G.AddEdge(2, 4, 5, 14);
	G.AddEdge(3, 2, 8, 12);
	G.AddEdge(3, 4, 3, 17);

	int s = 0;	// source
	int t = 4;	// sink
	return 0;
}
