/*
 * Display.cpp
 *
 *  Created on: Jun 5, 2020
 *      Author: ameen
 */

#include "Display.h"
#include "gems.h"
#include "circle.h"
#include "triangle.h"
#include "square.h"
#include "roundrect.h"
#include "util.h"
#include "fstream"
Display1::Display1() {
        gem=new gems*[14];
        for(int i=0; i<14; i++){
        gem[i]=new gems[14];
        }
        for(int i=0;i<14; i++){
        for(int j=0; j<14; j++){
        int p=0;
        p=rand()%100;
        gem[i][j].setprob(p);
   
        }
        }
        for(int i=0;i<14; i++){
        for(int j=0; j<14; j++){
        
        cout<<gem[i][j].getprob();
        cout<<"  ";
        }
        cout<<endl;
        }
       // TODO Auto-generated constructor stub

}
void Display1::displaygem(){
        int x=65;
        int y=65;
     
     
        int x1=105;
	int y1=65;
	int x2=85;
	int y2=105;
       
for(int i=0; i<14; i++)
{
      for(int j=0; j<14; j++)
      {
          
          if(gem[i][j].getprob()>=0 && gem[i][j].getprob()<=25)
          {
                gem[i][j].square1(x,y);
                 gem[i][j].setRandS1(1);
                
             x+=50;
	     x1+=50;
	     x2=x1+x;
	     x2=x2/2; 
        
          
          }
                if(gem[i][j].getprob()>=26 && gem[i][j].getprob()<=50)
                 {
                     
                    gem[i][j].triangle1(x,y,x1,y1,x2,y2);
                    gem[i][j].setRandT1(2);
                     x+=50;
	             x1+=50;
	             x2=x1+x;
	             x2=x2/2; 
                     
                 }
                   if(gem[i][j].getprob()>=51 && gem[i][j].getprob()<=75)
                   {
                     //DrawCircle(x+20,y+20,20,colors[DARK_ORANGE]);
                     gem[i][j].circle1(x,y);
                     gem[i][j].setRandC1(3);
                     x+=50;
	             x1+=50;
	             x2=x1+x;
	             x2=x2/2;
	            
                     
                   }
     if(gem[i][j].getprob()>=76 && gem[i][j].getprob()<=100)
     {
        gem[i][j].setRandRC1(4); 
       gem[i][j].roundrect1(x,y);
       
       
      //DrawSquare( x  ,  y ,40,colors[PINK]); 
       x+=50;
       x1+=50;
       x2=x1+x;
       x2=x2/2; 
   
    }
    
 
  
     }
     cout<<endl;
          x=65;
          x1=105;
	  x2=85;
	  y+=50;
	  y1+=50;
	  y2+=50;
           
}




}

int Display1::checktiles(){
        int x=65;
        int y=65;
        int c=0;

for(int i=0; i<14; i++)
{
      for(int j=0; j<11; j++)
        {
         
           if(y>=65 || y<=770){
           if(x>=65 && x<770){
          
          if(gem[i][j].getRandS1()==1 &&gem[i][j+1].getRandS1()==1 &&gem[i][j+2].getRandS1()==1){
               cout<<"\nSquare is Matched";
               score++;
           }
           if(gem[i][j].getRandT1()==2 &&gem[i][j+1].getRandT1()==2 &&gem[i][j+2].getRandT1()==2){
                
                cout<<"\nTriangle is Matched";
                 score++;
               }
               if(gem[i][j].getRandC1()==3 &&gem[i][j+1].getRandC1()==3 &&gem[i][j+2].getRandC1()==3){
                cout<<"\nCircle is Matched";
                 score++;
               }
               if(gem[i][j].getRandRC1()==4 &&gem[i][j+1].getRandRC1()==4 &&gem[i][j+2].getRandRC1()==4){
                cout<<"\nRound Rectangle is Matched";
                 score++;
               }
               
              }
              }
            x+=65;         
     
    
  
     }
  cout<<"\nRow is completed\n";
    y+=50;
    x=65;
          
}

cout<<"\ncolumn wise check";
for(int j=0; j<14; j++)
{
      for(int i=0; i<11; i++)
        {
         
           if(x>=65 || x<=770){
           if(y>=65 && y<770){
          
          if(gem[i][j].getRandS1()==1 &&gem[i+1][j].getRandS1()==1 &&gem[i+2][j].getRandS1()==1){
               cout<<"\nSquare is Matched";
                score++;
           }
           if(gem[i][j].getRandT1()==2 &&gem[i+1][j].getRandT1()==2 &&gem[i+2][j].getRandT1()==2){
                
                cout<<"\nTriangle is Matched";
                 score++;
               }
               if(gem[i][j].getRandC1()==3 &&gem[i+1][j].getRandC1()==3 &&gem[i+2][j].getRandC1()==3){
                cout<<"\nCircle is Matched";
                 score++;
               }
               if(gem[i][j].getRandRC1()==4 &&gem[i+1][j].getRandRC1()==4 &&gem[i+2][j].getRandRC1()==4){
                cout<<"\nRound Rectangle is Matched";
                 score++;
               }
               
              }
              }
            y+=65;         
     
    
  
     }
  cout<<"\ncolumn is completed\n";
    x+=50;
    y=65;
          
}
}
bool Display1::swapper(int x, int y){
            
        int temp=0;
        int temp1=0;
       
for(int i=0; i<1; i++)
{
      for(int j=0; j<14; j++)
      {
        if(y==635){
        if(x>=65 && x<150){
      
       temp=gem[i][j].getprob();
        temp1=gem[i][j+1].getprob();
        cout<<"\nfirst index"<<gem[i][j].getprob();
         cout<<"\nsecond index"<<gem[i][j+1].getprob();
        
       gem[i][j].setprob(temp1);
       gem[i][j+1].setprob(temp);
       cout<<"\nfirst index after"<<gem[i][j].getprob();
         cout<<"\nsecond index after"<<gem[i][j+1].getprob();
       // cout<<"\nsecond index"<<gem[i][j].getprob();
        cout<<"\nmatched\n";
        checktiles();
      
        } 
         /*if(x>150 && x<210){
      
       temp=gem[i][j].getprob();
        temp1=gem[i][j+1].getprob();
        cout<<"\nfirst index"<<gem[i][j].getprob();
         cout<<"\nsecond index"<<gem[i][j+1].getprob();
        
       gem[i][j].setprob(temp1);
       gem[i][j+1].setprob(temp);
       cout<<"\nfirst index after"<<gem[i][j].getprob();
         cout<<"\nsecond index after"<<gem[i][j+1].getprob();
       // cout<<"\nsecond index"<<gem[i][j].getprob();
        cout<<"\nmatched\n";
        
        break;
        } 
        if(x>200 && x<310){
      
       temp=gem[i][j].getprob();
        temp1=gem[i][j+1].getprob();
        cout<<"\nfirst index"<<gem[i][j].getprob();
         cout<<"\nsecond index"<<gem[i][j+1].getprob();
        
       gem[i][j].setprob(temp1);
       gem[i][j+1].setprob(temp);
       cout<<"\nfirst index after"<<gem[i][j].getprob();
         cout<<"\nsecond index after"<<gem[i][j+1].getprob();
       // cout<<"\nsecond index"<<gem[i][j].getprob();
        cout<<"\nmatched\n";
        
        break;
        }*/ 
        
        }
        if(x>=65 && x<=770){
       
        x--;
        y--;
        
          }
          
          }
          
          
          cout<<"\nloop has ended\n";
  
               
         



}
}

void Display1:: timebar(int x, int y){


static int x1=x;
DrawLine( 800 , y, x1 , y , 50 , colors[MISTY_ROSE] );
x1=x1-0.000001;
if(x1<800){
g.gameover();
}

}
void Display1::highscore(){
ifstream input("High_Score");
int highscore=0;
input>>highscore;
ofstream output("High_Score");
string sr1=to_string(score);
string hs=to_string(highscore);
if(score<highscore){
DrawString( 250, 820,"High Score", colors[CHOCOLATE]);
DrawString( 400, 820, hs, colors[CHOCOLATE]);
}
else{
DrawString( 250, 820,"High Score", colors[CHOCOLATE]);
DrawString( 400, 820, sr1, colors[CHOCOLATE]);
}
}
Display1::~Display1() {
	// TODO Auto-generated destructor stub
}

Display1::Display1(const Display1 &other) {
	// TODO Auto-generated constructor stub

}


