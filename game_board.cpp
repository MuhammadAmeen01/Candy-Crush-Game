#include "game_board.h"
#include "util.h"
game_board::game_board(){
        
        }
game_board::game_board(int x1,int y1, int color1){
        
        }
 void game_board::drawboard(){
        //DrawLine(int x1, int y1, int x2, int y2, int lwidth, float *color)
        //right most line
        DrawLine( 770, 50 ,  770 , 770 , 50 , colors[MISTY_ROSE] );
	//left most line
	DrawLine( 50, 50,  50 , 770 , 50 , colors[MISTY_ROSE] );
	//most lower line
	DrawLine( 50, 50 ,  770 , 50, 50 , colors[MISTY_ROSE] );
	//most upper line
	DrawLine( 50, 770 ,  770 , 770, 50 , colors[MISTY_ROSE] );
	
	
        }

game_board::~game_board() {
	// TODO Auto-generated destructor stub
}


