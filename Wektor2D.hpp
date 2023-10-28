class Wektor2D
{
public:
    Wektor2D(){}
    Wektor2D(double x, double y){
        X = x;
        Y = y;
    }
    Wektor2D operator+(Wektor2D const& obj){
        Wektor2D res;
        res.X = X + obj.X;
        res.Y = Y + obj.Y;
        return res;
    }
    double operator*(Wektor2D const& obj){
        Wektor2D res;
        res.X = X * obj.X;
        res.Y = Y * obj.Y;
        return res.X + res.Y;
    }
    void setX(double x) {X = x;}
    void setY(double y) {Y = y;}
    double getX() {return X;}
    double getY() {return Y;}
    Wektor2D sum(Wektor2D v1, Wektor2D v2)
    {
        return Wektor2D(v1.getX()+v2.getX(), v2.getY()+v2.getY());
    }
private:
    double X, Y;
};
