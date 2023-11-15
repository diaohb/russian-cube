#include "Piece.h"
Piece::Piece(){

}
Piece::~Piece(){

}
void Piece::SetPosition(int x,int y){
    pos_x=x;
    pos_y=y;
}
void Piece::SetStyle(int i){
    style= ( enum Style )i;
}
void Piece::Draw(){
    Piece piece;
    
}