class Vec
{
public:
    Vec(int s);
    double& operator[](int i);
    int size();
    double sum();
private:
    double* elem;
    int sz;
};