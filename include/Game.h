#ifndef GAME_HH
#define GAME_HH
#include "Board.h"
class Game
{
public:
    Game();
    ~Game();
    int run();

private:
    Board *board;
};
#endif