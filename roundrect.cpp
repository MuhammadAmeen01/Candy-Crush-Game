/*
 * roundrect.cpp
 *
 *  Created on: Jun 5, 2020
 *      Author: ameen
 */

#include "roundrect.h"
#include "util.h"
round_rect::round_rect() {
	// TODO Auto-generated constructor stub
num2=3;
}
int round_rect::draw_round(int x,int y)
        {
        DrawRoundRect(x,y,40,40,colors[DARK_BLUE],30);
        }
round_rect::~round_rect() {
	// TODO Auto-generated destructor stub
}



