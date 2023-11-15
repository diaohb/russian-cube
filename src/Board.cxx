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
void Board::Show()
{
    for (int i_width = 0; i_width < width; i_width++)
    {
        std::cout << "#";
    }
    std::cout << std::endl;
    for (int i_length = 1; i_length < length - 1; i_length++)
    {
        std::cout << "#";
        for (int i_width = 1; i_width < width - 1; i_width++)
        {
            std::cout << " ";
        }
        std::cout << "#" << std::endl;
    }
    for (int i_width = 0; i_width < width; i_width++)
    {
        std::cout << "#";
    }
    std::cout << std::endl;
}