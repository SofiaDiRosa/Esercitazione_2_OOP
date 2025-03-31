#pragma once

#include <iostream>
#include <cmath>
#include <concepts> //per i numeri di tipo float

template<typename T>
class complex_number
{
	T real; //parte reale
	T imaginary; //parte immaginaria
	
public:
	//costruttore di default
	complex_number() : real(0), imaginary (0)
	{}
	
	//costruttore user-defined
	complex_number(T a, T b) : real(a), imaginary(b)
	{}
	
	//parte reale
	T parte_reale(void) const {
		return real;
	}
	
	//parte immaginaria
	T parte_immaginaria(void) const {
		return imaginary;
	}
	
	//coniugato
	complex_number coniugato(void) const {
		return complex_number(real, -imaginary);
	}
	
	
	//overload di +=
	complex_number& operator+=(const complex_number& other) {
		T a = real;
		T b = imaginary;
		T c = other.real;
		T d = other.imaginary;
		real = a + c;
		imaginary = b + d;
		return *this;
	}
	
	//overload di +
	complex_number operator+(const complex_number& other) const {
		complex_number complex = *this;
		complex += other;
		return complex;
	}
	
	// overload di += tra un complex_number e un T come funzione membro
	complex_number& operator+=(const T& other) {
		real += other;
		return *this;
	}
	
	//overload di + tra un complex_number e un T come funzione membro
	complex_number operator+(const T& other) const {
		complex_number complex = *this;
		complex += other;
		return complex;
	}
	
	//overload di *=
	complex_number& operator*=(const complex_number& other) {
		T a = real;
		T b = imaginary;
		T c = other.real;
		T d = other.imaginary;
		real = a*c + (-b*d);
		imaginary = a*d + b*c;
		return *this;
	}
	
	//overload di *
	complex_number operator*(const complex_number& other) const {
		complex_number complex = *this;
		complex *= other;
		return complex;
	}
	
	//overload di *= tra un complex_number e un T come funzione membro
	complex_number& operator*=(const T& other) {
		real *= other;
		imaginary *= other;
		return *this;
	}
	
	//overload di * tra un complex_number e un T come funzione membro
	complex_number operator*(const T& other) const {
		complex_number complex = *this;
		complex *= other;
		return complex;
	}
};


//operatore di somma di un numero di tipo T a sinistra e un complex_number<T> a destra
template<typename T>
complex_number<T>
operator+(const T& t, const complex_number<T>& z) {
	return z + t;
}

//operatore di prodotto di un numero di tipo T a sinistra e un complex_number<T> a destra
template<typename T>
complex_number<T>
operator*(const T& t, const complex_number<T> z) {
	return z*t;
}


//overload di <<
template<typename T>
std::ostream& operator<<(std::ostream& os, const complex_number<T>& z) {
	if(z.parte_immaginaria() > 0 || z.parte_immaginaria() == 0) {
		os << z.parte_reale() << "+" << z.parte_immaginaria() << "i";
	}
	else {
		os << z.parte_reale() << "-" << std::abs(z.parte_immaginaria()) << "i";
	}
	
	return os;
}

//tipo float
template<class T>
concept floating_point = std::is_floating_point_v<T>;