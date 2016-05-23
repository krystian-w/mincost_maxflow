#pragma once
struct Edge
{
	int cost, flow, capacity;
	int u, v; // Edge (u,v)
	Edge(int cost, int flow, int capacity, int u, int v);
};

