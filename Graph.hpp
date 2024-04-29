#ifndef GRAPH_HPP
#define GRAPH_HPP

#include <vector>
#include <iostream>

#include "Algorithms.hpp"

class Graph {
    private:
        int num_vertices;
        std::vector<std::vector<int>> graph;

    public:
        Graph(int num_vertices);
        void loadGraph(const std::vector<std::vector<int>>& matrix);
        void printGraph();
};

#endif