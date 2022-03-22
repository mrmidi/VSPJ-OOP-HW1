#include "tiny-05.hpp"

namespace pjc {

    complex::complex(double real, double imaginary) :
        m_real(real),
        m_imag(imaginary) {}

    double complex::real() const {
        return m_real;
    }

    void complex::real(double d) {
        m_real = d;
    }

    double complex::imag() const {
        return m_imag;
    }

    void complex::imag(double d) {
        m_imag = d;
    }

    complex complex::operator+(complex const& rhs)
    {
        double real;
        double imag;

        real = this->m_real + rhs.m_real;
        imag = this->m_imag + rhs.m_imag;
        return { real, imag };
    }

    complex complex::operator-(complex const& rhs)
    {
        double real;
        double imag;

        real = this->m_real - rhs.m_real;
        imag = this->m_imag - rhs.m_imag;
        return { real, imag };
    }

    complex complex::operator*(complex const& rhs)
    {
        double real;
        double imag;

        real = (this->m_real * rhs.m_real) - (this->m_imag * rhs.m_imag);
        imag = (this->m_real * rhs.m_imag) + (this->m_imag * rhs.m_real);
        return { real, imag };

    }

    complex complex::operator+(double const& rhs)
    {
        double real;
        double imag;

        real = this->m_real + rhs;
        imag = this->m_imag;
        return { real, imag };
    }

    complex complex::operator-(double const& rhs)
    {
        double real;
        double imag;

        real = this->m_real - rhs;
        imag = this->m_imag;
        return { real, imag };
    }

    complex complex::operator*(double const& rhs)
    {
        double real;
        double imag;

        real = (this->m_real * rhs);
        imag = (this->m_imag * rhs);
        return { real, imag };
    }

    complex operator+(double const& lhs, complex const& rhs)
    {
        double real;
        double imag;

        real = lhs + rhs.m_real;
        imag = rhs.m_imag;
        return { real, imag };
    }

    complex operator-(double const& lhs, complex const& rhs)
    {
        double real;
        double imag;

        real = lhs - rhs.m_real;
        imag = -rhs.m_imag;
        return { real, imag };
    }

    complex operator*(double const& lhs, complex const& rhs)
    {
        double real;
        double imag;

        real = (lhs * rhs.m_real);
        imag = (lhs * rhs.m_imag);
        return { real, imag };
    }

}