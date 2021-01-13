#ifndef FEODOROV_OOP_LW_3
#define FEODOROV_OOP_LW_3

#include <string>
#include <complex>

using namespace std;

class ComplexNum {
private:
    double re = 0;
    double im = 0;

    double angle() const;
    double mod() const;

public:
    ComplexNum() = default;
    ComplexNum(double re, double im);
    ComplexNum(string& str);
    ~ComplexNum() = default;

    ComplexNum operator + (const ComplexNum&) const;
    friend ComplexNum operator - (const ComplexNum&, const ComplexNum&);
    ComplexNum operator * (const ComplexNum&) const;
    ComplexNum operator / (const ComplexNum&) const;

    explicit operator string() const;

    string toAlgebraic() const;
    string toTrigonometric() const;

    bool operator == (const ComplexNum& rval) const;
    bool operator == (const complex<double>& rval) const;
    bool operator != (const ComplexNum& rval) const;
    ostream& operator << (ostream& os) const;
};


#endif //FEODOROV_OOP_LW_3
