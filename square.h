/*
 * square.h
 *
 *  Created on: Jun 5, 2020
 *      Author: ameen
 */

#ifndef SQUARE_H_
#define SQUARE_H_

class square
        {
        int num1;
        public:
        
        square();
        void drawsquare(int x,int y);
        ~square();
       
        
        int getrandS(){
        return num1;
        }
        void setrandS(int n){
        num1=n;
        }
        
        };
#endif /* SQUARE_H_ */
