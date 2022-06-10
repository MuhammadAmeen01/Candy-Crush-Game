#ifndef CIRCLE_H_
#define CIRCLE_H_

class circle {
int num3;
public:
	circle();
	void drawcircle(int x,int y){
        DrawCircle(x+20,y+20,20,colors[DARK_ORANGE]);
        }
        int getrandC(){
        return num3;
        }
        void setrandC(int n){
        num3=n;
        }
	virtual ~circle();
};

#endif /* CIRCLE_H_ */
