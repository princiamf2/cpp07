/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michel <michel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 01:42:21 by michel            #+#    #+#             */
/*   Updated: 2026/02/05 02:02:15 by michel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>

int main( void ) 
{
    int a = 2;
    int b = 3;

    std::cout << "before swap\n";
    std::cout << "a = " << a << ", b = " << b << "\n";
    ::swap(a, b);
    std::cout << "after swap\n";
    std::cout << "a = " << a << ", b = " << b << "\n";
    std::cout << "min(a,b) = " << ::min(a, b) << "\n";
    std::cout << "max(a,b) = " << ::max(a, b) << "\n";

    std::string c = "chaine1";
    std::string d = "chaine2";

    std::cout << "\nbefore swap\n";
    std::cout << "c = " << c << ", d = " << d << "\n";
    ::swap(c, d);
    std::cout << "after swap\n";
    std::cout << "c = " << c << ", d = " << d << "\n";
    std::cout << "min(c,d) = " << ::min(c, d) << "\n";
    std::cout << "max(c,d) = " << ::max(c, d) << "\n";

    // Equality test (rule: if equal, return the second)
    int x = 42;
    int y = 42;
    std::cout << "\nEQUALITY TEST\n";
    std::cout << "x = " << x << ", y = " << y << "\n";
    std::cout << "min(x,y) = " << ::min(x, y) << " (must be y)\n";
    std::cout << "max(x,y) = " << ::max(x, y) << " (must be y)\n";
    std::cout << "&min(x,y) == &y ? " << (&::min(x, y) == &y) << "\n";
    std::cout << "&max(x,y) == &y ? " << (&::max(x, y) == &y) << "\n";

    // Const test
    const int ca = 10;
    const int cb = 20;
    std::cout << "\nCONST TEST\n";
    std::cout << "min(ca,cb) = " << ::min(ca, cb) << "\n";
    std::cout << "max(ca,cb) = " << ::max(ca, cb) << "\n";

    return 0;
}