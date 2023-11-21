#include<iostream>

int main()
{
    /*int a=0b101;
    int b=0b10110;
    b<<=4;
    int c=a|b;
    std::cout<<std::bitset<9>(c)<<std::endl;
    */
    int a=1101;
    int b=a^a;
    std::cout<<a<<" "<<b<<std::endl;
}
//output:101100101
/*
unsigned integers
<<-bit shift left-double the num(multiply by 2^n)
>>-bit shift right-halves the num(mutiply by 2^-n)

a=10;
b=a<<4;
//a*2^4=10*2^4=160

5>>1; 
divide by 2 forget the decimal part
0101>>1;
0010;
&-bitwise AND
|-bitwise OR
^-Bitwise XOR
~-bitwise NOT


Bitwise And(&)-compare to bits
1 for true
0 for false
0&0=0
is this true and is this true
both are false

1&1=1
is this true and is this true
both are true hence true

0&1=0
is this false and is this true
one is false hence false

1&0=0

 101100101
$000100000
-----------
000100000 = 32
result =32 that is true
any value other than 0 is true
*/
/*
BitWise Or
0|0=0
0|1=1
1|0=1
1|1=1
 */

 /*
 int a=101;
 int b=10110;
 b<<=4;
 int c=a|b;
 */

 /*
 X-OR
 0^0=0
 0^1=1
 1^0=1
 1^1=0
 int a=1101;
 int b=a^a;
 */