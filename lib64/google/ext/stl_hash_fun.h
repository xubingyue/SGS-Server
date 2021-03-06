#ifndef _STL_HASH_FUN_H
#define _STL_HASH_FUN_H 1

#include <cstddef>

namespace std_ext
{
	using std::size_t;

	template <class _Key> struct hash { };

	inline size_t __stl_hash_string(const char* __s)
	{
		unsigned long __h = 0; 
		for ( ; *__s; ++__s)
			__h = 5*__h + *__s;

		return size_t(__h);
	}

	template<> struct hash<char*>
	{
		size_t operator()(const char* __s) const { return __stl_hash_string(__s); }
	};

	template<> struct hash<const char*>
	{
		size_t operator()(const char* __s) const { return __stl_hash_string(__s); }
	};

	template<> struct hash<char> {
		size_t operator()(char __x) const { return __x; }
	};
	template<> struct hash<unsigned char> {
		size_t operator()(unsigned char __x) const { return __x; }
	};
	template<> struct hash<signed char> {
		size_t operator()(unsigned char __x) const { return __x; }
	};
	template<> struct hash<short> {
		size_t operator()(short __x) const { return __x; }
	};
	template<> struct hash<unsigned short> {
		size_t operator()(unsigned short __x) const { return __x; }
	};
	template<> struct hash<int> {
		size_t operator()(int __x) const { return __x; }
	};
	template<> struct hash<unsigned int> {
		size_t operator()(unsigned int __x) const { return __x; }
	};
	template<> struct hash<long> {
		size_t operator()(long __x) const { return __x; }
	};
	template<> struct hash<unsigned long> {
		size_t operator()(unsigned long __x) const { return __x; }
	};

} // namespace std_ext
#endif /* _STL_HASH_FUN_H */
