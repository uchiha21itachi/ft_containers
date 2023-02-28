#ifndef _FT_VECTOR_HPP_
#define _FT_VECTOR_HPP_
#include <memory>

namespace ft
{
	template < class T, class Alloc = std::allocator<T> >
	class vector // generic template    
	{

		public:
			//All the typedef declaration
			typedef T                                           value_type;
			typedef Alloc                                       allocator_type;
			typedef typename allocator_type::reference			reference;
			typedef typename allocator_type::const_reference	const_reference;
			typedef typename allocator_type::pointer			pointer;
			typedef typename allocator_type::const_pointer		const_pointer;
			typedef std::vector_iterator<value_type>             iterator;
			typedef std::vector_iterator<const value_type>       const_iterator;
			// typedef std::reverse_iterator<iterator>              reverse_iterator;
			// typedef std::reverse_iterator<const_iterator>        const_reverese_iterator;
			typedef std::ptrdiff_t                              difference_type;
			typedef std::size_t                                 size_type;

		private:

			allocator_type 	_alloc;
			pointer			_head;
			size_type		_size;
			size_type		_capacity;
	

	   public:
	   		//Empty container constructor
	   		explicit vector (const allocator_type &alloc = allocator_type())
			{
				std::cout << "ft_vector default construcor called" << std::endl;
				_alloc = alloc;
				_size = 0;
				_capacity = 0;
				_head = NULL;
			}

			//Fill constructor
			explicit vector (size_type n, const value_type &val = value_type(),
			const allocator_type &alloc = allocator_type())
			{
				std::cout << "ft_vector default construcor called. val - " << val << " n -" << n  << std::endl;
				_alloc = alloc;
				_head = NULL;
				//Need exception here for - if( n > max_size()) return error 
				if (n > _alloc.max_size())
				{
					throw std::length_error("Size of the requested vector is larger than possible max_size()");
				}
				if (n)
					_head = _alloc.allocate(n, 0);
				_size = n;
				_capacity = n;
				for (size_t i = 0; i < n; i++) {
					_alloc.construct(_head + i, val);
				}
			}

			// //Range Constructor
			// template <class InputIterator>
			// vector (InputIterator first, InputIterator last, const allocator_type &alloc = allocator_type){

			// }

			//Copy Constructor
			vector (const vector &x)
			{
				std::cout << "ft_vector copy constructor.." << std::endl;
				_alloc = allocator_type(x._alloc);
				_head = NULL;
				_size = x._size;
				_capacity = x._capacity;

				if (x._size)
				{
					_head = _alloc.allocate(_size, 0);
					std::uninitialized_copy(x._head, x._head + x._size, _head);
				}
			}

			

			//Iterators
			iterator 
			
			~vector() {
				std::cout << "ft_vector destructor called" << std::endl;
				if(_size)
					_alloc.deallocate(_head, _size);
			};
	};

}

# endif