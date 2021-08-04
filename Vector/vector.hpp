/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 15:28:24 by sgath             #+#    #+#             */
/*   Updated: 2021/08/04 19:06:13 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_HPP
#define VECTOR_HPP

#include <iostream>
#include <string>
#include <limits>
#include <algorithm>

namespace ft
{
    template < typename T >
    class vector;
    
    template < typename T >
    class IteratorV
    {
    private:
        typedef IteratorV< T >  IV;
        
    public:
        typedef T               value_type;
        typedef T               * pointer;
        typedef T               & reference;
        typedef size_t          value_size;
        
        
        //Iterators:
        begin

        end

        rbegin

        rend
    
    };
    
    template < typename T >
    class vector
    {
    private:
        /* data */
    public:
        typedef T             value_type;
        typedef T             * pointer;
        typedef const T       * constPointer;
        typedef T             & reference;
        typedef const T       & constReference;
        typedef size_t        value_size;
        
        

    
        vector();        
        vector(size_t n);
        vector(size_n, typename T);
        vector(const vector &copy);
    
        ~vector();

        vector &operator=(const vector &value);
        

        //Capacity:
        size

        max_size

        resize

        capacity

        empty

        eserve

        //Element access:
        operator[]

        at

        front

        back

        //Modifiers:
        assign

        push_back

        pop_back

        insert

        erase

        swap

        clear
        
        //Allocator:
        get_allocator

        //Non-member function overloads:
        relational operators

        swap


    };
   
}

#endif
