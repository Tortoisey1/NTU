#include <string>
#include <iostream>

using namespace std;
class Polygon
{
private:
protected:
    string name;
    float width;
    float height;
    KindofPolygon polytype;

public:
    enum KindofPolygon
    {
        POLY_PLAIN,
        POLY_RECT,
        POLY_TRIANG
    };

    KindofPolygon getPolytype()
    {
        return this.polytype;
    }

    void setPolytype(KindofPolygon value)
    {
        this.polytype = value;
    }

    string getName()
    {
        return this.name;
    }

    float calArea()
    {
        return 0;
    }

    void printWidthHeight()
    {
        cout << "Width = " << this.width << " Height = " << this.height << endl;
    }
}


class Rectangle:: public Polygon{
    
}