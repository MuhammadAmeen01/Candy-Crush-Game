//============================================================================
// Name        : .cpp
// Author      : Sibt ul Hussain
// Version     :
// Copyright   : (c) Reserved
// Description : Basic 2D game of Centipede...
//============================================================================

#ifndef CENTIPEDE_CPP_
#define CENTIPEDE_CPP_
#include "util.h"
#include <iostream>
#include<string>
#include <vector>
#include "game_board.h"
#include "game_board.cpp"
#include "circle.h"
#include "circle.cpp"
#include "roundrect.h"
#include "roundrect.cpp"
#include "square.h"
#include "square.cpp"
#include "triangle.h"
#include "triangle.cpp"
#include "gems.h"
#include "gems.cpp"
#include "Display.h"
#include "Display.cpp"
//#include "swap.h"
//#include "swap.cpp"
#include<cmath> // for basic math functions such as cos, sin, sqrt
using namespace std;
// seed the random numbers generator by current time (see the documentation of srand for further help)...

/* Function sets canvas size (drawing area) in pixels...
 *  that is what dimensions (x and y) your game will have
 *  Note that the bottom-left coordinate has value (0,0) and top-right coordinate has value (width-1,height-1)
 * */
void SetCanvasSize(int width, int height) {
	glMatrixMode (GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0, width, 0, height, -1, 1); // set the screen size to given width and height.
	glMatrixMode (GL_MODELVIEW);
	glLoadIdentity();
}

Display1 db;


/*
 * Main Canvas drawing function.
 * */

void GameDisplay()/**/{
	// set the background color using function glClearColor.
	// to change the background play with the red, green and blue values below.
	// Note that r, g and b values must be in the range [0,1] where 0 means dim rid and 1 means pure red and so on.

	glClearColor(0/*Red Component*/, 0,	//148.0/255/*Green Component*/,
			0.0/*Blue Component*/, 0 /*Alpha component*/); // Red==Green==Blue==1 --> White Colour
	glClear (GL_COLOR_BUFFER_BIT); //Update the colors
	//Fire Gun
	string sr=to_string(db.getscore());
        string life1=to_string(db.getlife());
	if(db.getcheck1()==0){
	db.menu1();
	
	}
	if(db.getcheck1()==1){
	db.displaygem();
	DrawString(850,800,"TIME BAR",colors[BROWN]);
        db.highscore();
        db.timebar(1000,700);
        db.drawboard2();
	DrawString( 100, 820, "Score=", colors[CHOCOLATE]);
	DrawString( 190, 820, sr, colors[CHOCOLATE]);
	// db.timebar(1000,700);
	
	
	}
	if(db.getcheck1()==2){
	exit(1);
	}
	if(db.getcheck1()==3){
	db.pause1();
	db.setcheck(1);
	glutPostRedisplay();
	
	}
	if(db.getcheck1()==4){
	db.setcheck1(1);
	glutPostRedisplay();
	}
	
	//DrawSquare( 65 , 5 ,40,colors[RED]); 
	//Mushroom
	//DrawSquare( 120 , 15 ,40,colors[GREEN]); 
	//Display Score
	
	//Spider
	//DrawCircle(65+20,65+20,20,colors[RED]);
	//DrawTriangle( 115, 65 , 155, 65 , 135 ,155 , colors[MISTY_ROSE] );
	/*int x=65;
        int y=65;
        int x1=105;
	int y1=65;
	int x2=85;
	int y2=105;
	for(int i=0; i<1; i++){
	for(int j=0; j<14; j++ ){
	DrawTriangle( x, y , x1, y1 , x2 ,y2 , colors[MISTY_ROSE] );
	x+=50;
	x1+=50;
	x2=x1+x;
	x2=x2/2;
	}
	x=65;
	x1=105;
	x2=85;
	y+=50;
	y1+=50;
	y2+=50;
	}*/
        
        
        /*static int count=0;
        if(count>0){
        cout<<"\nhelo";
        db.displaygem();
	
        db.drawboard2();
	DrawString( 100, 820, "Score=", colors[CHOCOLATE]);
	DrawString( 190, 820, sr, colors[CHOCOLATE]);
        }
	 count++;
	 /*DrawTriangle( 65, 105 , 105, 105 , 85 ,155 , colors[MISTY_ROSE] ); 
	 DrawTriangle( 115, 105 , 155, 105 , 135 ,155 , colors[MISTY_ROSE] );
	 DrawTriangle( 165, 105 , 205, 105 , 185 ,155 , colors[MISTY_ROSE] );*/
	// Trianlge Vertices v1(300,50) , v2(500,50) , v3(400,250)
        ////draw board, class gameboard///
        
	//DrawLine(int x1, int y1, int x2, int y2, int lwidth, float *color)
	//DrawLine( 550 , 50 ,  550 , 480 , 10 , colors[MISTY_ROSE] );	
	/*DrawLine( 800, 0 ,  800 , 800 , 50 , colors[MISTY_ROSE] );
	DrawLine( 50, 0 ,  50 , 800 , 50 , colors[MISTY_ROSE] );
	DrawLine( 50, 0 ,  800 , 0 , 50 , colors[MISTY_ROSE] );
	DrawLine( 50, 800 ,  800 , 800, 100 , colors[MISTY_ROSE] );		
	DrawCircle(50,670,10,colors[RED]);
	DrawCircle(70,670,10,colors[RED]);
	DrawCircle(90,670,10,colors[RED]);
	DrawRoundRect(500,200,50,100,colors[DARK_SEA_GREEN],70);
	//DrawRoundRect(100,200,100,50,colors[DARK_OLIVE_GREEN],20);	
	//DrawRoundRect(100,100,50,100,colors[DARK_OLIVE_GREEN],30);
	//DrawRoundRect(200,100,100,50,colors[LIME_GREEN],40);
	//DrawRoundRect(350,100,100,50,colors[LIME_GREEN],20);
	//DrawRoundRect(100,50,50,40,colors[BROWN],30);
	//DrawRoundRect(120,100,50,40,colors[RED],30);*/

	//Torus2d(int x , int y ,float angle, float length,float radius,float width,unsigned int samples,float *color);
	//Torus2d(65,65,15,900,15,15,7,colors[RED]);
  	//DrawRoundRect(65,65,40,40,colors[BROWN],30);
	//DrawRoundRect(115,65,40,40,colors[BROWN],30);
	//DrawRoundRect(65,65,40,40,colors[LIME_GREEN],40);
	glutSwapBuffers(); // do not modify this line..

}

/*This function is called (automatically) whenever any non-printable key (such as up-arrow, down-arraw)
 * is pressed from the keyboard
 *
 * You will have to add the necessary code here when the arrow keys are pressed or any other key is pressed...
 *
 * This function has three argument variable key contains the ASCII of the key pressed, while x and y tells the
 * program coordinates of mouse pointer when key was pressed.
 *
 * */

void NonPrintableKeys(int key, int x, int y) {
	
	/*char s;
	int m=0;
	if(s=='s' || s=='S'){
	m=1;
	}
	if (m==1){
	
	glutPostRedisplay();

	} else */if (key
			== GLUT_KEY_RIGHT /*GLUT_KEY_RIGHT is constant and contains ASCII for right arrow key*/) {

	} else if (key
			== GLUT_KEY_UP/*GLUT_KEY_UP is constant and contains ASCII for up arrow key*/) {
       
	}

	else if (key
			== GLUT_KEY_DOWN/*GLUT_KEY_DOWN is constant and contains ASCII for down arrow key*/) {
         db.checktiles();
          
	}

	/* This function calls the Display function to redo the drawing. Whenever you need to redraw just call
	 * this function*/

	glutPostRedisplay();


}

/*This function is called (automatically) whenever any printable key (such as x,b, enter, etc.)
 * is pressed from the keyboard
 * This function has three argument variable key contains the ASCII of the key pressed, while x and y tells the
 * program coordinates of mouse pointer when key was pressed.
 * */
void PrintableKeys(unsigned char key, int x, int y) {
	if (key == 27/* Escape key ASCII*/) {
		exit(1); // exit the program when escape key is pressed.
	}

	if (key == 'b' || key == 'B') //Key for placing the bomb
			{
		//do something if b is pressed
		cout << "b pressed" << endl;

	}
	
	int m=0;
	int p=0;
	int e=0;
	int c=0;
	int i=0;
	int b=0;
	if(key=='s' || key=='S'){
	m=1;
	}
	
	if (m==1){
	db.setcheck1(m);
	glutPostRedisplay();

	}
	
	if(key=='e'|| key=='E'){
	e=2;
	}
	if(e==2){
	db.setcheck1(e);
	glutPostRedisplay();
	}
	if(key=='P'|| key=='p'){
	p=3;
	}
	if(p==3){
	db.setcheck1(p);
	glutPostRedisplay();
	}
	if(key=='c'|| key=='C'){
	c=4;
	}
	if(c==4){
	db.setcheck1(c);
	glutPostRedisplay();
	}
	if(key=='t'|| key=='T'){
	i=5;
	}
	if(i==5){
	db.setcheck1(i);
	glutPostRedisplay();
	}
	if(key=='h'|| key=='H'){
	i=6;
	}
	if(i==6){
	
	db.setcheck1(i);
	glutPostRedisplay();
	}
	
	
	glutPostRedisplay();
}

/*
 * This function is called after every 1000.0/FPS milliseconds
 * (FPS is defined on in the beginning).
 * You can use this function to animate objects and control the
 * speed of different moving objects by varying the constant FPS.
 *
 * */
void Timer(int m) {

	// implement your functionality here
          
	// once again we tell the library to call our Timer function after next 1000/FPS
	glutTimerFunc(800.0, Timer, 0);
}

/*This function is called (automatically) whenever your mouse moves witin inside the game window
 *
 * You will have to add the necessary code here for finding the direction of shooting
 *
 * This function has two arguments: x & y that tells the coordinate of current position of move mouse
 *
 * */
void MousePressedAndMoved(int x, int y) {
	

	db.swapper(x,y);
	//db.checktiles();
	glutPostRedisplay();
	
cout <<x << " " << y << endl;
	
	
	//glutPostRedisplay();
}
void MouseMoved(int x, int y) {
	//cout << x << " " << y << endl;
	
}

/*This function is called (automatically) whenever your mouse button is clicked witin inside the game window
 *
 * You will have to add the necessary code here for shooting, etc.
 *
 * This function has four arguments: button (Left, Middle or Right), state (button is pressed or released),
 * x & y that tells the coordinate of current position of move mouse
 *
 * */
void MouseClicked(int button, int state, int x, int y) {

	if (button == GLUT_LEFT_BUTTON) // dealing only with left button
			{
		cout << GLUT_DOWN << " " << GLUT_UP << endl;

	} else if (button == GLUT_RIGHT_BUTTON) // dealing with right button
			{
			cout<<"Right Button Pressed"<<endl;

	}
	//glutPostRedisplay();
}

/*
 * our gateway main function
 * */
int main(int argc, char*argv[]) {

	int width = 1020, height = 840; // i have set my window size to be 800 x 600

	InitRandomizer(); // seed the random number generator...
	glutInit(&argc, argv); // initialize the graphics library...
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA); // we will be using color display mode
	glutInitWindowPosition(50, 50); // set the initial position of our window
	glutInitWindowSize(width, height); // set the size of our window
	glutCreateWindow("OOP Project"); // set the title of our game window
	SetCanvasSize(width, height);// set the number of pixels...

	// Register your functions to the library,
	// you are telling the library names of function to call for different tasks.
	//glutDisplayFunc(display); // tell library which function to call for drawing Canvas.

	glutDisplayFunc(GameDisplay); // tell library which function to call for drawing Canvas.
	glutSpecialFunc(NonPrintableKeys); // tell library which function to call for non-printable ASCII characters
	glutKeyboardFunc(PrintableKeys); // tell library which function to call for printable ASCII characters
	// This function tells the library to call our Timer function after 1000.0/FPS milliseconds...
	glutTimerFunc(1000.0, Timer, 0);

	glutMouseFunc(MouseClicked);
	glutPassiveMotionFunc(MouseMoved); // Mouse
	glutMotionFunc(MousePressedAndMoved); // Mouse

	// now handle the control to library and it will call our registered functions when
	// it deems necessary...
	glutMainLoop();
	
	return 1;
}
#endif /* AsteroidS_CPP_ */
