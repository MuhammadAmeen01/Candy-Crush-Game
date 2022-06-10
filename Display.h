/*
 * Display.h
 *
 *  Created on: Jun 5, 2020
 *      Author: ameen
 */

#ifndef DISPLAY_H_
#define DISPLAY_H_
#include <iostream>
using namespace std;
class Display1:public gems,game_board{
gems **gem;
gems g;
int score;
int life;
string name;
public:
	Display1();	
	void displaygem();
	int checktiles();
	void setrandom(int n);
	bool swapper(int x, int y);
	void drawboard2(){
	g.drawboard1();
	}
	int getcheck1(){
	return g.getcheck();
	}
	void setcheck1(int c){
	g.setcheck(c);
	}
	void menu1(){
	g.Menu();
	}
	void pause1(){
	g.pause();
	}
	int getscore(){
	return score;
	}
	int getlife(){
	return life;
	}
	int setscore(int s){
	score=s;
	}
	int setlife(int l){
	life=l;
	}
	string setname(string s){
	name=s;
	}
	string getname(){
	return name;
	}
	void highscore();

	 void timebar(int x, int y);

	
	virtual ~Display1();
	Display1(const Display1 &other);
};

#endif /* DISPLAY_H_ */
