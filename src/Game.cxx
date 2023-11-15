#include "Game.h"
Game::Game()
{
    board = new Board();
}
Game::~Game()
{
}
int Game::run()
{
    board->Show();
    return 1;
}