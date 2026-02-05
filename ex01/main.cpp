/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michel <michel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 02:22:00 by michel            #+#    #+#             */
/*   Updated: 2026/02/05 02:25:13 by michel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

void addOne(int &x)
{
    x += 1;
}

template <typename T>
void print(const T &x)
{
    std::cout << x << " ";
}

int main()
{
    int a[] = {1,2,3,4};
    ::iter(a, 4, addOne);
    ::iter(a, 4, print<int>);
    std::cout << "\n";

    const int b[] = {10,20,30};
    ::iter(b, 3, print<int>);
    std::cout << "\n";
}