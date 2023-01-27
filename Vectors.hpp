#ifndef _FT_VECTOR_HPP_
#define _FT_VECTOR_HPP_
#include <memory>

namespace ft
{
	template < class T, class Alloc = std::allocator<T> >
	class vector // generic template    
	{

		//All the typedef declaration
		typedef T                                           value_type;
		typedef Alloc                                       allocator_type;
		typedef typename allocator_type::reference			reference;
		typedef typename allocator_type::const_reference	const_reference;
		typedef typename allocator_type::pointer			pointer;
		typedef typename allocator_type::const_pointer		const_pointer;
		typedef ft::vector_iterator<value_type>             iterator;
		typedef ft::vector_iterator<const value_type>       const_iterator;
		typedef ft::reverse_iterator<iterator>              reverse_iterator
		typedef ft::reverse_iterator<const_iterator>        const_reverese_iterator;
		typedef std::ptrdiff_t                              difference_type;
		typedef std::size_t                                 size_type;

	   public:
	   		explicit vector (const allocator_type &alloc = allocator_type()){

			}

			explicit vector (size_type n, const value_type &val = value_type){

			}

			template <class InputIterator>
			vector (InputIterator first, InputIterator last, const allocator_type &alloc = allocator_type){

			}

			vector (const vector &x){
				
			}
			
			~vector();
	};

}

# endif