#ifndef GAME_HH
#define GAME_HH
#include "Board.h"
class Game
{
public:
    Game();
    ~Game();
    int run();
    void Set_time_step(double _time_step);
private:
    Board board;
    int length=20;
    int width=10;
    int pixel_width=2;
    int pixel_length=1;
    double time_step=1;
};
#endif