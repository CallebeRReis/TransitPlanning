class City
{
private:
    uint n_hab = 0; 
    double x = 0.0;
    double y = 0.0;
public:
    City()=default;
    City(uint n_hab_,double x_, double y_): n_hab(n_hab_), x(x_), y(y_){};
    City(const City& other)
    {
        n_hab = other.n_hab;
        x = other.x;
        x = other.y;
    }
    City(City&& other)
    {
        n_hab = other.n_hab;
        x = other.x;
        x = other.y;
        
        other.n_hab = 0;
        other.x = 0.0;
        other.y = 0.0;
    }
    ~City()
    {
        n_hab = 0;
        x = 0.0;
        y = 0.0;
    }
    void print()
    {
        std::cout<< n_hab <<" " << x <<" " << y <<std::endl; 
    }
};