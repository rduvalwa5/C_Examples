/*
http://stackoverflow.com/questions/2090750/number-of-bits-in-a-data-type
*/

#include <climits>
#include <stddef.h>
#include <stdint.h>
#include <cstdio>

template <typename T>
size_t num_bits()
{
	printf("size T is %d char_bit is %d \n", sizeof (T), (CHAR_BIT));
    return sizeof (T) * (CHAR_BIT);
}

int main()
{
	printf("char : %d\n", num_bits<char>());
    printf("uint8_t : %d\n", num_bits<uint8_t>());
    printf("size_t : %d\n", num_bits<size_t>());
    printf("long long : %d\n", num_bits<long long>());
    printf("void* : %d\n", num_bits<void*>());
    printf("bool : %d\n", num_bits<bool>());
    printf("float : %d\n", num_bits<float>());
    printf("double : %d\n", num_bits<double>());
    printf("long double : %d\n", num_bits<long double>());

    return 0;
}