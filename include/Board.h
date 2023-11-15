#ifndef BOARD_HH
#define BOARD_HH
class Board
{
public:
    Board(int _length = 30, int _width = 15);
    ~Board();
    void Show();

private:
    int length;
    int width;
};
#endif