#ifndef GAME_BOARD_H_
#define GAME_BOARD_H_

class game_board{
        public:
        game_board();
        game_board(int x1,int y1, int color1);
        void drawboard();
	
	virtual ~game_board();
};

#endif /* GAME_BOARD_H_ */
