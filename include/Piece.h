#ifndef PIECE_HH
#define PIECE_HH
#include "Pixel.h"
enum Style{
    i=1,o,t,s,z,l,j
};
class Piece
{
public:
    Piece();
    ~Piece();
    void SetPosition(int x,int y);
    void SetStyle(int i);
    // void SetStyle(enum s);
    void Draw();
    void Clear(){};
    void Down(){};
    void Left(){};
    void Right(){};
    void RotateRight(){};
    void RotateLeft(){};
private:
    int pos_x;
    int pos_y;
    Style style;
};
#endif