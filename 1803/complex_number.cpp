#include <iostream>
#include "complex_number.hpp"

int main(void)
{
	using complex = complex_number<double>;
	complex c1(1.0,2.0);
	complex c2(3.0,-4.0);
	
	//Metodi che restituiscono la parte reale, la parte immaginaria e il coniugato
	std::cout << "Parte reale di c1: " << c1.parte_reale() << std::endl;
	std::cout << "Parte immaginaria di c1: " << std::abs(c1.parte_immaginaria()) << std::endl;
	std::cout << "Parte reale di c2: " << c2.parte_reale() << std::endl;
	std::cout << "Parte immaginaria di c2: " << std::abs(c2.parte_immaginaria()) << std::endl;
	std::cout << "Coniugato di c1: " << "z1 = " << c1.coniugato() << std::endl;
	std::cout << "Coniugato di c2: " << "z2 = " << c2.coniugato() << std::endl;
	
	//Funzioni di somma e prodotto
	std::cout << "Somma tra c1 e c2: " << c1 + c2 << std::endl;
	std::cout << "Prodotto tra c1 e c2: " << c1 * c2 << std::endl;
	
	//Chaiamata all'overload dell'operatore + all'interno della classe
	complex c3 = complex(5.0 , 6.0) + 1.0;
	std::cout << "(5+6i) + 1 = " << c3 <<std::endl;
	
	//Chiamata dell'overload dell'operatore + all'esterno della classe
	complex c4 = 2.0 + complex(7.0,8.0);
	std::cout << "2 + (7+8i) = " << c4 << std::endl;
	
	//Chaiamata all'overload dell'operatore * all'interno della classe
	complex c5 = complex(5.0 , 6.0) * 1.0;
	std::cout << "(5+6i) * 1 = " << c5 <<std::endl;
	
	//Chiamata dell'overload dell'operatore * all'esterno della classe
	complex c6 = 2.0 * complex(7.0,8.0);
	std::cout << "2 * (7+8i) = " << c6 << std::endl;
	
	//Non viene violata la commutatività negli operatori + e *
	
	std::cout << "---------------------------------------------------" << std::endl;
	
	using complex_float = complex_number<float>;
	complex_float c1_float(1.0f,2.0f);
	complex_float c2_float(3.0f,-4.0f);
	
	//Metodi che restituiscono la parte reale, la parte immaginaria e il coniugato
	std::cout << "Parte reale di c1_float: " << c1_float.parte_reale() << std::endl;
	std::cout << "Parte immaginaria di c1_float: " << std::abs(c1_float.parte_immaginaria()) << std::endl;
	std::cout << "Parte reale di c2_float: " << c2_float.parte_reale() << std::endl;
	std::cout << "Parte immaginaria di c2_float: " << std::abs(c2_float.parte_immaginaria()) << std::endl;
	std::cout << "Coniugato di c1_float: " << "z1_float = " << c1_float.coniugato() << std::endl;
	std::cout << "Coniugato di c2_float: " << "z2_float = " << c2_float.coniugato() << std::endl;
	
	//Funzioni di somma e prodotto
	std::cout << "Somma tra c1_float e c2_float: " << c1_float + c2_float << std::endl;
	std::cout << "Prodotto tra c1_float e c2_float: " << c1_float * c2_float << std::endl;
	
	//Chaiamata all'overload dell'operatore + all'interno della classe
	complex_float c3_float = complex_float(5.0f,6.0f) + 1.0f;
	std::cout << "(5+6i) + 1 = " << c3_float <<std::endl;
	
	//Chiamata dell'overload dell'operatore + all'esterno della classe
	complex_float c4_float = 2.0f + complex_float(7.0f,8.0f);
	std::cout << "2 + (7+8i) = " << c4_float << std::endl;
	
	//Chaiamata all'overload dell'operatore * all'interno della classe
	complex_float c5_float = complex_float(5.0f,6.0f) * 1.0f;
	std::cout << "(5+6i) * 1 = " << c5_float << std::endl;
	
	//Chiamata dell'overload dell'operatore * all'esterno della classe
	complex_float c6_float = 2.0f * complex_float(7.0f,8.0f);
	std::cout << "2 * (7+8i) = " << c6_float << std::endl;
	
	//Non viene violata la commutatività negli operatori + e *
	
	return 0;
}