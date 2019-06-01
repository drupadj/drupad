/*

How to set a bit in the number ‘num’ : ( num | 1 << pos )

How to unset/clear a bit at n’th position in the number ‘num’ : ( num & ~(1 << pos) )

Toggling a bit at nth position : ( num ^ (1 << pos) )

Checking if bit at nth position is set or unset: ( num & 1 << pos )

Stripping off the lowest set bit : X = X & (X-1) 

Stripping on the first unset bit : n = n | (n+1)

Getting lowest set bit of a number: num & (-num);

Clear all bits from LSB to ith bit : mask = ~((1 << i+1 ) - 1); x &= mask;

Clearing all bits from MSB to i-th bit : mask = (1 << i) - 1; x &= mask;

Divide by 2 : x >>= 1;

Multiplying by 2 : x <<= 1;

Binary number : num >> i & 1;

Short form of finding bitwise shift : Res = num * ( 2 ^ shift)

*/


