// CSC 134
// M7T2
// 05/07/2025
// Shane Jobes

#ifndef RECTANGLE_H
#define RECTANGLE_H


class Rectangle()
{
private:
    double width;
    double length;
public:
    Rectangle(double l, double w)
    {
        length = l;
        width = w;
    }
    void setWidth(double w)
    {
        width = w;
    }

    void setLength(double l);
    {
        length = l;
    }
    
    double getWidth() const;
    {
        return width;
    }
    
    double getLength() const;
    {
        return length;
    }
    
    double getArea() const;
    {
        double area = length * width;

    }
};

#endif