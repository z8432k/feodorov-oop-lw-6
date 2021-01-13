#include <ComplexNum.h>

#include <string>
#include <sstream>
#include <cmath>

using namespace std;

ComplexNum::ComplexNum(double r, double i) {
    this->re = r;
    this->im = i;
}

ComplexNum::ComplexNum(string& str) {
    stringstream in(str);

    char op;

    in >> re >> op >> im;

    if (op == '-') {
        im *= -1;
    }
}

ComplexNum ComplexNum::operator+(const ComplexNum& rval) const {
    ComplexNum tmp;

    tmp.re = re + rval.re;
    tmp.im = im + rval.im;

    return tmp;
}

ComplexNum operator-(const ComplexNum& lval, const ComplexNum& rval) {
    ComplexNum tmp;

    tmp.re = lval.re - rval.re;
    tmp.im = lval.im - rval.im;

    return tmp;
}


ComplexNum ComplexNum::operator*(const ComplexNum& rval) const {
    ComplexNum tmp;

    tmp.re = re * rval.re - im * rval.im;
    tmp.im = re * rval.im + rval.re * im;

    return tmp;
}

ComplexNum ComplexNum::operator/(const ComplexNum& rval) const {
    ComplexNum tmp;

    tmp.re = (re * rval.re + im * rval.im) / (rval.re * rval.re + rval.im * rval.im);
    tmp.im = (rval.re * im - re * rval.im) / (rval.re * rval.re + rval.im * rval.im);

    return tmp;
}

ComplexNum::operator string() const {
    string str;

    str.append(to_string(re));
    str.append(im < 0 ? "-" : "+");
    str.append(to_string(im));
    str.append("i");

    return str;
}

string ComplexNum::toAlgebraic() const {
    double r = 0, i = 0;
    double module = mod();
    double fi = angle();

    r = module * sin(fi);
    i = module * cos(fi);

    string out = to_string(r);

    out.append(im < 0 ? "-" : "+");
    out.append("i" + to_string(i));

    return out;
}

string ComplexNum::toTrigonometric() const {

    string out;

    out.append(to_string(this->mod()));
    out.append("*e^*i");
    out.append(to_string(this->angle()));


    return out;
}

double ComplexNum::angle() const {
    return atan(im / re) * (180 / M_PI);
}

double ComplexNum::mod() const {
    return sqrt(re * re + im * im);
}

bool ComplexNum::operator==(const ComplexNum &rval) const {
    return this->re == rval.re && this->im == rval.im;
}

bool ComplexNum::operator!=(const ComplexNum &rval) const {
    return !(*this == rval);
}

ostream &ComplexNum::operator<<(ostream &os) const {
    return os << static_cast<string>(*this);
}

bool ComplexNum::operator==(const complex<double> &rval) const {
    return this->re == rval.real() && this->im == rval.imag();
}
