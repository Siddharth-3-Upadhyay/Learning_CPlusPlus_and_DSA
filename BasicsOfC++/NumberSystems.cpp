#include <iostream>

using std::cout;
using std::endl;

int main() {
    int number1 = 15; // Decimal
    int number2 = 017; // Octal
    int number3 = 0x0F; // HexaDecimal
    int number4 = 0b00001111; // Binary

    cout << "Number1: " << number1 << endl;
    cout << "Number2: " << number2 << endl;
    cout << "Number3: " << number3 << endl;
    cout << "Number4: " << number4 << endl;

    return 0;
}
