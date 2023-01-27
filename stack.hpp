#ifndef _FT_STACK_HPP_
#define _FT_STACK_HPP_
#include <memory>

namespace ft
{
	template < class T, class Alloc = std::allocator<T> >
	class stack // generic template    
	{
        public :
            typedef T               value_type;
            typedef Container       container_type;
            typedef size_t          size_type;

    };

}

# endif