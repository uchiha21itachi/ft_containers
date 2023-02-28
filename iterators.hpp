#ifndef _FT_STACK_HPP_
#define _FT_STACK_HPP_
#include <memory>

namespace ft
{
    template <class Category, class T, class Distance = ptrdiff_t,
    struct iterator {
        typedef T         value_type;
        typedef Distance  difference_type;
        typedef Pointer   pointer;
        typedef Reference reference;
        typedef Category  iterator_category;
    }
}


#endif