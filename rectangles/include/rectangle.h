#ifndef CMAKE_LEARN_RECTANGLE_H
#define CMAKE_LEARN_RECTANGLE_H
class rectangle{
private:
    int x,y;
public:
    rectangle(const int &x,const int &y);

    int getX() const;

    void setX(const int &x);

    int getY() const;

    void setY(const int &y);
};
#endif //CMAKE_LEARN_RECTANGLE_H
