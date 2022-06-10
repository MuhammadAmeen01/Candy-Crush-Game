/*
 * roundrect.h
 *
 *  Created on: Jun 5, 2020
 *      Author: ameen
 */

#ifndef ROUNDRECT_H_
#define ROUNDRECT_H_

class round_rect {
int num2;
public:
	round_rect();
	
	
	
      
        int draw_round(int x,int y);
        int getrandRC(){
        return num2;
        }
        void setrandRC(int n){
        num2=n;
        }
       virtual ~round_rect();
};

#endif /* ROUNDRECT_H_ */
