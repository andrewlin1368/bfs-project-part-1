#include <iostream>
#include "Graph.h"
using namespace std;

int main()
{
    Graph andrewlingraph;
    andrewlingraph.add_vertex();
    andrewlingraph.add_vertex();
    andrewlingraph.add_vertex();
    andrewlingraph.add_vertex();
    andrewlingraph.add_vertex();
    andrewlingraph.add_edge(0, 2);
    andrewlingraph.add_edge(0, 4);
    andrewlingraph.add_edge(1, 4);
    andrewlingraph.add_edge(2, 0);
    andrewlingraph.add_edge(2, 3);
    andrewlingraph.add_edge(2, 4);
    andrewlingraph.add_edge(3, 2);
    andrewlingraph.add_edge(4, 0);
    andrewlingraph.add_edge(4, 1);
    andrewlingraph.add_edge(4, 2);
    cout << andrewlingraph;
    return 0;
}