#include "Game.h"
#include <unistd.h>
#include "Piece.h"
Game::Game()
{
    // board = new Board();
}
Game::~Game()
{
}
int Game::run()
{
    board.SetSize(length,width);
    board.Show();
    // while(true){
        // Piece piece;
        // piece.SetPosition(length*pixel_width/2+pixel_width,3*pixel_length);
        // piece.Draw();
        // sleep(time_step);
    // }
    char a=getchar();
    return 1;
}
void Game::Set_time_step(double _time_step){
    time_step=_time_step;
}