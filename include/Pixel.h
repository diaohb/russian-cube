#ifndef PIXEL_HH
#define PIXEL_HH
#include <string>
class Pixel
{
public:
    Pixel(int _length = 1, int _width = 2);
    ~Pixel();
    void Draw(int style);
    void Draw(std::string style);
    void Draw(char style);
    void SetSize(int _length, int _width);

private:
    int length;
    int width;
    char a;
    void Print();
};
#endif