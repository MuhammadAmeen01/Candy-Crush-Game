/*
 * triangle.cpp
 *
 *  Created on: Jun 5, 2020
 *      Author: ameen
 */

#include "triangle.h"
#include "util.h"
triangle::triangle() {
	// TODO Auto-generated constructor stub
num=1;
}
void triangle:: drawtriangle(int x,int y,int x1, int y1, int x2, int y2){
        DrawTriangle( x, y , x1, y1 , x2 ,y2 , colors[MAROON]);
        }
triangle::~triangle() {
	// TODO Auto-generated destructor stub
}

triangle::triangle(const triangle &other) {
	// TODO Auto-generated constructor stub

}

