#include <iostream>
using namespace std;

int main()
{

    //1. Arithmetic Operators
    int a = 4, b = 3;
    cout << "4 + 3 = " << a + b << endl;
    cout << "4 - 3 = " << a - b << endl;
    cout << "4 * 3 = " << a * b << endl;
    cout << "4 / 3 = " << a / b << endl;//returns 1 because it is in int form ,, use float to correct it
    cout << "4 % 3 = " << a % b << endl;// returns reminder
    float c=4,d=3;
    cout << "4 / 3 = " << c / d << endl;
    cout << "4 / 3 = " << (float)a / b << endl;//or this method

          /*
          

                    ✅ 1. Arithmetic Operators

            Operator	Description	Example	Result
            +	Addition	a + b	Sum
            -	Subtraction	a - b	Diff
            *	Multiplication	a * b	Product
            /	Division	a / b	Quotient
            %	Modulus (remainder)	a % b	Remainder

            ✅ 2. Assignment Operators

            Operator	Description	Example
            =	Assign value	a = 5;
            +=	Add and assign	a += 2;
            -=	Subtract and assign	a -= 2;
            *=	Multiply and assign	a *= 2;
            /=	Divide and assign	a /= 2;
            %=	Modulus and assign	a %= 2;

            ✅ 3. Relational / Comparison Operators

            Operator	Description	Example	Result
            ==	Equal to	a == b	true/false
            !=	Not equal to	a != b	true/false
            >	Greater than	a > b	true/false
            <	Less than	a < b	true/false
            >=	Greater or equal	a >= b	true/false
            <=	Less or equal	a <= b	true/false

            ✅ 4. Logical Operators

            Operator	Description	Example
            &&	Logical AND	a > 0 && b < 10
            `		`
            !	Logical NOT	!(a == b)

            ✅ 5. Increment / Decrement Operators

            Operator	Description	Example
            ++	Increment by 1	a++ or ++a
            --	Decrement by 1	a-- or --a

            ✅ 6. Bitwise Operators

            Operator	Description	Example
            &	Bitwise AND	a & b
            `	`	Bitwise OR
            ^	Bitwise XOR	a ^ b
            ~	Bitwise NOT	~a
            <<	Left shift	a << 1
            >>	Right shift	a >> 1

            ✅ 7. Conditional (Ternary) Operator

            cpp
            Copy
            Edit
            condition ? value_if_true : value_if_false;
            Example:

            cpp
            Copy
            Edit
            int a = 5, b = 10;
            int max = (a > b) ? a : b;

            ✅ 8. Sizeof Operator

            cpp
            Copy
            Edit
            sizeof(type_or_variable)
            Example:

            cpp
            Copy
            Edit
            cout << sizeof(int); // usually 4

            ✅ 9. Type Cast Operator

            cpp
            Copy
            Edit
            (float)a
            Example:

            cpp
            Copy
            Edit
            int a = 5, b = 2;
            float result = (float)a / b; // result = 2.5
            
            ✅ 10. Pointer Operators

            Operator	Description	Example
            *	Dereference	*ptr
            &	Address-of	&var

            ✅ 11. Member Access Operators

            Operator	Description	Example
            .	Access member of object	obj.name
            ->	Access member via pointer	ptr->name

            ✅ 12. Scope Resolution Operator

            cpp
            Copy
            Edit
            ::name
            Used to access a global variable or class function outside its scope.
                    

          */


    return 0;
}
