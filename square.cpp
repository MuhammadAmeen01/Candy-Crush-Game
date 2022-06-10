/*
 * square.cpp
 *
 *  Created on: Jun 5, 2020
 *      Author: ameen
 */

#include "square.h"
#include "util.h"
square::square() {
num1=2;	// TODO Auto-generated constructor stub

}
 void square::drawsquare(int x,int y)
         {
             DrawSquare( x  ,  y ,40,colors[CHART_REUSE]); 
         }
square::~square() {
	// TODO Auto-generated destructor stub
}


