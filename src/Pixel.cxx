#include "Pixel.h"
Pixel::Pixel(int _length , int _width ){
    length=_length;
    width=_width;
}
Pixel::~Pixel(){

}
void Pixel::SetSize(int _length , int _width){
    length=_length;
    width=_width;
}
void Pixel::Draw(int style){
    if(style==0){
        a=' ';
    }
    else if(style==1){
        a='*';
    }
    else if(style==2){
        a='#';
    }
    Print();
}
void Pixel::Draw(std::string style){
    if(style=="blank"){
        a=' ';
    }
    else if(style=="cube"){
        a='*';
    }
    else if(style=="wall"){
        a='#';
    }
    Print();
}
void Pixel::Draw(char style){
    a=style;
    Print();
}
void Pixel::Print(){
    for(int i=0;i<length;i++){
        printf("\033[s");
        for(int j=0;j<width;j++){
            putchar(a);
        }
        printf("\033[u\033[1B");
    }
    printf("\033[%dA\033[%dC",length,width);
}