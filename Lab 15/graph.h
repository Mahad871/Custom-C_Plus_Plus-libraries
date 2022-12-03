#pragma once
#include <iostream>
#include <queue>
#include "Slinkedlist.h"

using namespace std;


class Graph
{
public:
	int maxNoOfVertices;

	SLinkedList<int>* adjList = NULL;

	Graph(int maxVertices)
	{
		maxNoOfVertices = maxVertices;
		adjList = new SLinkedList <int>[maxNoOfVertices];

	}

	void insertEdge(int src, int dest) {


		adjList[src].insert(dest);


	}

	void showGraphStructure() {

		for (int i = 0; i < maxNoOfVertices; i++)
		{
			cout << i << " = ";
			adjList[i].print();

		}


	}

	void BFS(int startNode) {

		bool* isVisited = new bool [maxNoOfVertices] {false};
		queue<int> q;
		q.push(startNode);
		Node<int>* temp;
		isVisited[startNode] = true;
		cout << "Breadth First Search: ";
		while (!q.empty())
		{
			int current = q.front();
			cout << current << " ";
			q.pop();
			temp = adjList[current].head;
			while (temp)
			{
				if (!isVisited[temp->data]) {
					q.push(temp->data);
					isVisited[temp->data] = true;
				}
				temp = temp->next;

			}



		}


	}


};


