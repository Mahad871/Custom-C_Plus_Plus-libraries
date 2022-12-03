#include <iostream>
#include "ArrayGraphs.h"
#include "graph.h"

using namespace std;

int main() {


	/*ArrayGraph g1(3);

	g1.addEdge(0, 1);
	g1.addEdge(0, 2);
	g1.addEdge(1, 2);

	g1.Print();*/

	Graph g2(5);

	g2.insertEdge(0, 1);
	g2.insertEdge(0, 4);
	g2.insertEdge(1, 0);
	g2.insertEdge(1, 4);
	g2.insertEdge(1, 2);
	g2.insertEdge(1, 3);
	g2.insertEdge(2, 1);
	g2.insertEdge(2, 3);
	g2.insertEdge(3, 1);
	g2.insertEdge(3, 4);
	g2.insertEdge(3, 2);
	g2.insertEdge(4, 3);
	g2.insertEdge(4, 0);
	g2.insertEdge(4, 1);

	g2.showGraphStructure();
	cout << endl;
	g2.BFS(0);

	return 0;
}