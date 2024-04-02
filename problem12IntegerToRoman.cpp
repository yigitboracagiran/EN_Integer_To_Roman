#include <iostream>
#include <string>

class Solution {
public:
    std::string intToRoman( int num ) {
        // int ints[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 
        //                0, 10, 20, 30, 40, 50, 60, 70, 80, 90, 
        //                0, 100, 200, 300, 400, 500, 600, 700, 800, 900, 
        //                0, 1000, 2000, 3000 };

        std::string romans[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX",
                                "", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC",
                                "", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM",
                                "", "M", "MM", "MMM"}; 

        int num1 = ( num % 10 ) / 1;
        int num2 = ( num % 100 ) / 10;
        int num3 = ( num % 1000 ) / 100;
        int num4 = ( num % 10000 ) / 1000;

        std::cout << num1 << "\n" << num2 << "\n" << num3 << "\n" << num4;
        return romans[ 30 + num4 ] + romans[ 20 + num3 ] + romans[ 10 + num2 ] + romans[ num1 ];
    }
};
int main ( void ) {
    Solution sol;
    std::string romanNumber = sol.intToRoman( 1994 );
    std::cout << "\n" << romanNumber << "\n";
}