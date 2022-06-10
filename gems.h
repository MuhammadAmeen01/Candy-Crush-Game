/*
 * gems.h
 *
 *  Created on: Jun 5, 2020
 *      Author: ameen
 */

#ifndef GEMS_H_
#define GEMS_H_
#include "util.h"
        class gems: public game_board{
        triangle t;
        square s;
        circle c;
        round_rect rc;
        game_board gb;
        int prob;
        int  check;
        public:
        gems();
        void drawshapes();
        void setprob(int p){
        prob=p;
        }
        void triangle1(int x,int y,int x1,int y1,int x2,int y2){
        t.drawtriangle(x,y,x1,y1,x2,y2);
        }
        void square1(int x,int y){
        s.drawsquare(x,y);
        
        }
        void circle1(int x, int y){
        c.drawcircle(x,y); 
        
        }
        void roundrect1(int x,int y){
        rc.draw_round(x,y);
        }
        
        int getprob(){
        return prob;
        }
        void setRandS1(int n){
        s.setrandS(n);
        
        }
        int getRandS1(){
        return s.getrandS();
        }
        void setRandT1(int n){
        t.setrandT(n);
        
        }
        int getRandT1(){
        return t.getrandT();
        }
        void setRandC1(int n){
        c.setrandC(n);
        
        }
        int getRandC1(){
        return c.getrandC();
        }
        void setRandRC1(int n){
        rc.setrandRC(n);
        
        }
        int getRandRC1(){
        return rc.getrandRC();
        }
        void drawboard1(){
        gb.drawboard();
        
        }
        int getcheck(){
        return check;
        }
        void setcheck(int c){
        check=c;
        }
        void Menu(){
        

	glClearColor(0/*Red Component*/, 0,	//148.0/255/*Green Component*/,
			1.0/*Blue Component*/, 0 /*Alpha component*/); // Red==Green==Blue==1 --> White Colour
	glClear (GL_COLOR_BUFFER_BIT); //Update the colors

	// calling some functions from util.cpp file to help students

	


	
	DrawString(100,650,"                 CANDY CRUSH                           ",colors[WHITE]);
	DrawString(100,550,"                 Press (s) to Start NEW Game           ",colors[WHITE]);
	DrawString(100,450,"                 PRESS(P) to PAUSE                     ",colors[WHITE]);
	DrawString(100,350,"                 PRESS (T) to CHECK HIGHEST SCORE      ",colors[WHITE]);
	DrawString(100,250,"                 Press (B)To Enter Player Name           ",colors[WHITE]);
	
	
	
}  
       void pause(){
        
	glClearColor(0/*Red Component*/, 1,	//148.0/255/*Green Component*/,
			0.0/*Blue Component*/, 0 /*Alpha component*/); // Red==Green==Blue==1 --> White Colour
	glClear (GL_COLOR_BUFFER_BIT); //Update the colors

	// calling some functions from util.cpp file to help students

	


	
	DrawString(100,650,"                 CANDY CRUSH                           ",colors[WHITE]);
	DrawString(100,550,"                 Press (s) to Start NEW Game           ",colors[WHITE]);
	DrawString(100,450,"                 PRESS(C) to Continue                     ",colors[WHITE]);
	
	
       
       }
 void gameover(){

glClearColor(0/*Red Component*/, 1,	//148.0/255/*Green Component*/,
			0.0/*Blue Component*/, 0 /*Alpha component*/); // Red==Green==Blue==1 --> White Colour
	glClear (GL_COLOR_BUFFER_BIT); //Update the colors

	// calling some functions from util.cpp file to help students

	DrawString(100,650,"                 GAMEOVER                           ",colors[WHITE]);
	DrawString(100,550,"                 PRESS (E) To Exit                           ",colors[WHITE]);
	
		glutPostRedisplay();
}
	

   
      
        ~gems();
        
        
        };

#endif /* GEMS_H_ */
