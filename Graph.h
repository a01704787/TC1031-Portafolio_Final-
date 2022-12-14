#ifndef _GRAPH_H_
#define _GRAPH_H_

#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <utility>
#include <fstream>
#include "LinkedList.h"
#include "DataMethods.h"


class Graph {
  private:
    int numNodes;
    int numEdges;
    // Lista de adyacencia (vector de listas de pares (vertice, peso))
    std::vector<LinkedList<std::pair<int, int>>> adjList;

    void split(std::string line, std::vector<int> &res);
    void split(std::string line, std::vector<std::string> & res);
    std::string removePort(std::string data);
    void loadGraphList(std::istream &input);
    void printAdjList();
    

  public:
    Graph();
    ~Graph();
    void loadDirWeightedGraph(std::string fileName, std::vector<unsigned int> &vectIPSInt);
    void print();
    void calcGradosAccesos(std::vector<int> &vectGrados, std::vector<int> &vectAccesos);
    std::vector<int> getNodosAccesos(int adjListIndex);

    // void dijkstraAlgorithm(struct Graph* graph, int src, std::vector<std::string> &vectIPS);


};




#endif // __GRAPH_H_