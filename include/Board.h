#ifndef BOARD_HH
#define BOARD_HH
#include "Pixel.h"
class Board
{
public:
    Board(int _length = 20, int _width = 10);
    ~Board();
    void Show();
    void SetSize(int _length, int _width);

private:
    int length;
    int width;
    int pixel_length=1;
    int pixel_width=3;
    Pixel pixel;
    void enter();
};
#endif