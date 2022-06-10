/*
 * triangle.h
 *
 *  Created on: Jun 5, 2020
 *      Author: ameen
 */

#ifndef TRIANGLE_H_
#define TRIANGLE_H_

class triangle
{
        int num;
        public:
        
        triangle();
        void drawtriangle(int x,int y,int x1, int y1, int x2, int y2);
        int getrandT(){
        return num;
        }
        void setrandT(int n){
        num=n;
        }
	triangle(const triangle &other);
	~triangle();
};

#endif /* TRIANGLE_H_ */
