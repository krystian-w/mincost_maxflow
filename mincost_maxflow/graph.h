#pragma once
#include <vector>
#include "vertex.h"
#include "edge.h"


class Graph
{
	int V_; // number of vertex
	std::vector<Vertex> vertex;
	std::vector<Edge> edge;

public:
	Graph(int V);
	~Graph();

	void AddEdge(int u, int v, int cost, int capacity);
};

