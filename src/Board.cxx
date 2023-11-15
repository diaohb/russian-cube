#include "Board.h"
#include <iostream>
Board::Board(int _length, int _width)
{
    length = _length;
    width = _width;
}
Board::~Board()
{
}
void Board::SetSize(int _length, int _width)
{
    length = _length;
    width = _width;
}
void Board::enter(){
    printf("\r\033[%dB",pixel_length);
}
void Board::Show()
{
    printf("\033[2J\033[1;1H");
    pixel.SetSize(pixel_length,pixel_width);
    for (int i_width = 0; i_width < width+2; i_width++)
    {
        pixel.Draw(2);
    }
    enter();
    for (int i_length = 0; i_length < length ; i_length++)
    {
        pixel.Draw(2);
        for (int i_width = 0; i_width < width ; i_width++)
        {
            pixel.Draw(0);
        }
        pixel.Draw(2);
        enter();
    }
    for (int i_width = 0; i_width < width+2; i_width++)
    {
        pixel.Draw(2);
    }
    enter();
}