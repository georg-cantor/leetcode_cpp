//
// Created by 秦栋梁 on 2020/5/19.
//

#ifndef LEETCODE_CPP_COMPLEX_HPP
#define LEETCODE_CPP_COMPLEX_HPP

class Complex {
public:
    Complex (double r = 0, double i = 0) : re (r), im (i) {}
    //Complex& operator += (const Complex&);
    double real () const { return re; }
    void real (double r) { re = r; }
    double imag () const { return im; }

private:
    double re, im;
};

#endif //LEETCODE_CPP_COMPLEX_HPP
