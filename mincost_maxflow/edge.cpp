#include "edge.h"



Edge::Edge(int cost, int flow, int capacity, int u, int v)
{
	this->cost = cost;
	this->flow = flow;
	this->capacity = capacity;
	this->u = u;
	this->v = v;
}


