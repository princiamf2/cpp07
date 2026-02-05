#ifndef ARRAY_HPP
#define ARRAY_HPP

# include <exception>

template<typename T>
class Array
{
    private:
        T *_data;
        unsigned int _size;
    public:
        Array();
        Array(unsigned int);
        Array(Array const&);
        Array& operator=(Array const&);
        ~Array();

        T& operator[](unsigned int);
        T const& operator[](unsigned int) const;

        unsigned int size() const;
};

#include "Array.tpp"
#endif /* ARRAY_HPP */
