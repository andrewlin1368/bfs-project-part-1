# Movies, Actors, and their Connections

## Introduction
In this project you will build a variation of the Hollywood Graph in which vertices are actors
and edges connect actors that have appeared in a movie together. You will build a graph
with movies and actors as vertices and edges connecting each movie to its actors. For
example:

![Kevin Bacon Graph](https://introcs.cs.princeton.edu/java/45graph/images/movie-performer.png)

You will use the graph to query paths between a pair of actors or between a pair of
movies, or an actor and a movie, to see how they are connected (if at all). This
functionality will allow you to play the Six Degrees of Kevin Bacon Game, which was
popular on college campuses about a decade ago. The game is based on the ideas of six
degrees of separation and the small-world experiment.

Six degrees of separation [https://en.wikipedia.org/wiki/Six_degrees_of_separation] is the idea
that all living things and everything else in the world are six or fewer steps away from each
other so that a chain of "a friend of a friend" statements can be made to connect any two
people in a maximum of six steps.

The small-world experiment [https://en.wikipedia.org/wiki/Small-world_experiment] comprised
several experiments conducted by Stanley Milgram and other researchers examining the
average path length for social networks of people in the United States. The research was
groundbreaking in that it suggested that human society is a small-world-type network
characterized by short path-lengths.

The goal of the Six Degrees of Kevin Bacon Game is to try to find the fewest number of
connections to link any other actor with Kevin Bacon. It was discovered that you could
connect Kevin Bacon with just about any other actor in 6 steps or so.

## Quick Recap of Concepts (1)

This section is a quick recap of the concepts that you need to know for this project. If you
don’t understand something or can’t answer the questions and exercises, you should
review the textbook/material provided for this topic.

Definition. A graph is a set of vertices/nodes and a collection of edges that connect
some pairs of vertices.

The edges in a graph can be directed or undirected. For this assignment we will focus on
undirected graphs.

![graph](https://sites.google.com/a/cs.christuniversity.in/discrete-mathematics-lectures/_/rsrc/1409480658489/graphs/directed-and-undirected-graph/dir.png)

### Graph Representation

The most commonly used representations of graphs are Adjacency Matrix and Adjacency List.

![Graph representations](https://notes.shichao.io/clrs/figure_22.2.png)

### Programming Exercise, Part 1: Creating and displaying a simple graph

We will start with an implementation of a graph that defines the fundamental graph
operations we will need.

Graph() //Constructor. Creates a graph object.

void add_vertex() //Adds a vertex to the graph (index automatically assigned)

void add_edge(int source, int target) //Adds an edge connecting source to target

int V( ) const //Returns the number of vertices

int E( ) const //Returns the number of edges

set int neighbors(int v) const //Returns a set containing the vertices adjacent to v (the neighbors of v)

bool contains(int v) const; //Checks whether vertex v is in the graph

//OVERLOADED OUTPUT OPERATOR

friend std::ostream& operator<< (std::ostream &out, const Graph &g);

Download the starter code for this part of the project and take a look at it so that you
understand how the graph is being represented and handled.

### TASK 1. 
Create a client program (GraphClient.cpp) with a main function where you will
create and display the graph in the following figure:

You will need to import “Graph.h” (the starter code you downloaded). You can use the
following skeleton for your client and write your code in the main function:

#include iostream

#include "Graph.h"

using namespace std;

int main() {

//your code here

}

The name of your graph object must be a single word consisting of your name followed by
the suffix “graph”. For example, my graph name should be drzavalagraph and I would use
the following instruction to declare my graph object:

Graph drzavalagraph;

Use the add_vertex and add_edge functions on the graph object as needed to construct
the graph in the figure above.

After you have added the vertices and edges, you should display the graph to screen. You
might have noticed that the output operator has been overloaded, so you can simply
output a graph to screen using the output operator:

cout << drzavalagraph;

### TASK 2. 

Modify the implementation of the overloaded output operator (Graph.cxx file) so
that the information about the graph is sent to the output stream. [For a reminder about
overloading the output operator: http://www.learncpp.com/cpp-tutorial/93-overloading-the-io-operators].
For simplicity, you do not need to display a visual graph. Instead, do a textual display. For
example:

Graph Summary: 5 vertices, 5 edges

0 --> 2 4

1 --> 4

2 --> 0 3 4

3 --> 2

4 --> 0 1 2

You will need to iterate through the vector of vertices (edges variable in the Graph class)
and for each vertex, iterate through the set of adjacent vertices or neighbors. [For a
reminder about vectors and sets: http://www.cplusplus.com/reference/stl/]
