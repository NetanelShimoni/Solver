//
// Created by netanel & Or on 27/04/2020.
//

#include "solver.hpp"
#include <iostream>
#include <complex>
#include <math.h>

using namespace std;

namespace solver{
    RealVariable operator*( double a, RealVariable r){
        return RealVariable(r.a*a, r.b*a, r.c*a);
        return r;


//    if(r.sign_x=='x') {
//        if (r.x == 0) {
//            r.x = a;
//        } else {
//            r.x *= a;
//        }
//    } else{
//
//    }
    }
//         RealVariable operator*(RealVariable x,double a){
//             x.a=x.a*a;
//             x.b=x.b*a;
//             x.c=x.c*a;
//             return x;
//         }

//         RealVariable operator*(RealVariable x1,RealVariable x2){
//             RealVariable x3;
//             if(x1.a!=0&&x2.a!=0||x1.a!=0&&x2.b!=0||x1.b!=0&&x2.a!=0)
//                 throw invalid_argument("cant handle with power grater than 2");
//            x3.a=;
//             x3.b=;
//             x3.c;
//             return x3;
//         }

    RealVariable operator+(RealVariable x,double a){
        x.c+=a;
        return x;
    }
    RealVariable operator+(double a,RealVariable x){
        x.c+=a;
        return x;
    }
    RealVariable operator+(RealVariable x1,RealVariable x2){
        RealVariable x3;
        x3.a=x1.a+x2.a;
        x3.b=x1.b+x2.b;
        x3.c=x1.c+x2.c;
        return x3;
    }

//    ostream& operator<<(ostream& os, const RealVariable& r)
//    {
//        if(r.a!=0 && r.b!=0 &&  r.c!=0) {
//            if (r.b>0 && r.c>0) {
//                os << r.a << "x^2" << "+"<<r.b<< "x"<<"+" << r.c;
//                return os;
//            }
//            os << r.a << "x^2" <<r.b<< "x"<< r.c;
//        } else{
//
//        }
//    }
    RealVariable operator-(RealVariable x,double a){
        x.c=x.c-a;
        return x;
    }

    RealVariable operator-(double a,RealVariable x){
        x.c=-x.c+a;
        x.a=-x.a;
        x.b=-x.b;
        return x;
    }

    RealVariable operator-(RealVariable x1,RealVariable x2){
        RealVariable x3 {0,0,0};
        x3.a=x1.a-x2.a;
        x3.b=x1.b-x2.b;
        x3.c=x1.c-x2.c;
        return x3;
    }

    RealVariable operator/(RealVariable x,double n)
    {
        if(n == 0)
            throw invalid_argument("cant divide in zero");
        x.b/=n;
        //x.c/=n;
        return x;
    }

    RealVariable operator/(RealVariable x1,RealVariable x2) {


    }

    double operator==(RealVariable x,double a){
        x.c=-1*x.c;
        a=a+x.c;

        if(x.a==0) {

            return a / x.b;
        }
        if(x.a!=0&& x.b==0){
            if(a<0){
                throw exception();
            }
            a=sqrt(a);
            return a/x.a;


        }
        return x.b/a;

    }


    RealVariable operator== ( RealVariable left,  RealVariable right) {
        return left - right;
    }

//    RealVariable operator== (const double n, RealVariable& right) {
//        return right - n;
//
//    }
//
//    RealVariable operator== (const RealVariable& left,  double n) {
//        return left - n;
//
//    }

    RealVariable operator^(RealVariable r,double n){
        RealVariable ans;
        if(n>2)
            throw invalid_argument("power is not vaild: ");
        if(n==2)
        {
            return RealVariable(1,0,0);
        }
        if(n==1)
        {
            return RealVariable(0,1,0);
        }
        if(n==0)
        {
            return RealVariable(0,0,1);
        }



    }

    double solve(double x) {

        return x;

    }
    double solve(RealVariable r) {
        return ans(r.a,r.b,r.c);

//    if(r.a!=0 && r.c!=0){
//        if(r)
//
//    }


    }
    extern  ostream& operator<<(ostream& os, const complex<float>& yvalue){
        if (yvalue.imag()>0) {
            os << yvalue.real() <<"+" <<yvalue.imag()<<"i" << endl;
            return os;
        }else{
            os <<yvalue.real() <<yvalue.imag()<<"i" << endl;
            return os;

        }
    }
     ComplexVariable operator*(double a,  ComplexVariable c){
        c.com.real(a*c.com.real());
        c.com.imag(a*c.com.imag());
        return c;
    }
     ComplexVariable operator-(ComplexVariable c,double a){
        c.f=-a;
        return c;

    }
     double operator==( ComplexVariable c1,ComplexVariable c2){
        return 1;
    }

    ComplexVariable operator+(ComplexVariable c1,  ComplexVariable c2){
        return c1;

    }
     ComplexVariable operator+(ComplexVariable c1,  std::complex<double> i){

        return c1;
    }

    ComplexVariable operator-(ComplexVariable c1,  ComplexVariable c2){
        return c1;
    }

    ComplexVariable operator/( ComplexVariable c,double a){
        return c;
    }
     ComplexVariable operator+(double a,  ComplexVariable c){
        return c;
    }


    ComplexVariable operator+(ComplexVariable c1,  double a){

        return c1;
    }


    /*    ComplexVariable operator-(double a,double b){


    }*/

    double operator==( ComplexVariable c,double a){
        a=a-c.f;
        return a/c.com.real();


    }
     ComplexVariable operator^( ComplexVariable c,double n){
         ComplexVariable ans;
return ans;
     }





}


double ans(double a,double  b, double c) {
    double x1, x2, discriminant, realPart, imaginaryPart;
    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        x1 = (-b + sqrt(discriminant)) / (2 * a);
        x2 = (-b - sqrt(discriminant)) / (2 * a);
        return x1;
//        cout << "x1 = " << x1 << endl;
//        cout << "x2 = " << x2 << endl;
    } else if (discriminant == 0) {
        x1 = (-b + sqrt(discriminant)) / (2 * a);
        return x1;
//        cout << "x1 = x2 =" << x1 << endl;
//    } else {
//        realPart = -b / (2 * a);
//        imaginaryPart = sqrt(-discriminant) / (2 * a);
//        return
//        cout << "x1 = " << realPart << "+" << imaginaryPart << "i" << endl;
//        cout << "x2 = " << realPart << "-" << imaginaryPart << "i" << endl;
//    }
        return INFINITY;
    }
}