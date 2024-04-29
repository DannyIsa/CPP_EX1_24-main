#include "Graph.hpp"

class Graph {
    private:
        int num_vertices;
        std::vector<std::vector<int>> graph;

    public:
        Graph(int num_vertices) : num_vertices(num_vertices) {
            graph.resize(num_vertices);
        }

        void loadGraph(const std::vector<std::vector<int>>& matrix) {
            for (int i = 0; i < num_vertices; ++i) {
                for (int j = 0; j < num_vertices; ++j) {
                    if (matrix[i][j] != 0 != 0) {
                        graph[i].push_back(j);
                    }
                }
            }
        }

        void printGraph() {
            for (int i = 0; i < num_vertices; ++i) {
                std::cout << "Neighbors of vertex " << i << ": ";
                for (int j : graph[i]) {
                    std::cout << j << " ";
                }
                std::cout << std::endl;
            }
        }
};