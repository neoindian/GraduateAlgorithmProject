/*
 * GraphCreate.H
 *
 *  Created on: 03-Nov-2014
 *      Author: nishant
 */

#ifndef GRAPHCREATE_H_
#define GRAPHCREATE_H_

#include <iostream>
#include <stdlib.h>

#define VERTICES 5000
using namespace std;

class Graph
{
public:
	Graph(int vDeg,int numOfVertices);
	~Graph();
	void createRandomGraph(int vDegree);

private:
   int * graphPointer_;
   int vDegree_;
   int numOfVertices_;
};


#endif /* GRAPHCREATE_H_ */
