// Presented by Muhammad Abu Hurairah
// 1st Lectures with Basic Syntax of C++ & Programs of Data Types & Variables & Operators
// 33 Problems with Solutions

// Problem 01: Write a program in C++ to print "Hello, World!".
// Code-01
/* 
# include <iostream>
using namespace std;
int main()
{
    cout<<"Hello World!.";
} 
*/

// Problem 02: Write a program to print your name and age.
// Code-02
/*
# include <iostream>
using namespace std;
int main()
{
    cout<<"My Name is Abu Hurairah.\n";
    cout<<"My age is 19.";
}
*/

// Problem 03: Write a program to display the sum of two numbers.
// Code-03
/*
# include <iostream>
using namespace std;
int main()
{
    int a=5;
    int b=6;
    int sum = a+b;
    cout<<"The Sum of a and b is: "<<sum;
}
*/

// Problem 04: Write a program to take user input for their name and display it.
// Code-04
/*
# include <iostream>
using namespace std;
int main()
{
    string name;
    int age;
    cout<<"Enter you Name: ";
    cin>>name;
    cout<<"Enter you age: ";
    cin>>age;
    cout<<"Your name is: "<<name<<" and age is: "<<age;
}
*/

// Problem 05: Write a program to print numbers from 1 to 10 using cout.
// Code-05
/*
# include <iostream>
using namespace std;
int main()
{
    cout<<"1\n"<<"2\n"<<"3\n"<<"4\n"<<"5\n"<<"6\n"<<"7\n"<<"8\n"<<"9\n"<<"10\n";
}
*/

// Problem 06: Write a program that prints your favorite quote.
// Code-06
/*
# include <iostream>
using namespace std;
int main()
{
    cout<<"Hardworking,Discipline,Unity and Belief on Allah make Success";
}
*/

// Problem 07: Write a program to add two integers entered by the user
// Code-07
/*
# include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the first Number: ";
    cin>>a;
    cout<<"Enter the Second Number: ";
    cin>>b;
    cout<<"The value of a: "<<a<<"and the value of b: "<<b;
}

// Problem 08: Write a program that prints the size of int, float, char, and double using sizeof().  
// Code-08
/*
# include <iostream>
using namespace std;
int main()
{
    int a = 4;
    float b = 4.93;
    char c = 'H';
    double d = 99132195;
    cout<<"Size of a: "<<sizeof(a)<<"\n";
    cout<<"Size of b: "<<sizeof(b)<<"\n";
    cout<<"Size of c: "<<sizeof(c)<<"\n";
    cout<<"Size of d: "<<sizeof(d)<<"\n";
}
*/

// Problem 09:  Write a program to declare an integer, float, char, and string and display their values.  
// Code-09
/*
# include <iostream>
using namespace std;
int main()
{
    int a = 5;
    float b = 9.9;
    string c = "Huraira";
    char d = 'H';
    cout<<"The value of Integer: "<<a<<"\n";
    cout<<"The value of Float: "<<b<<"\n";
    cout<<"The value of String: "<<c<<"\n";
    cout<<"The value of char: "<<d<<"\n";
}
*/

// Problem 10: Write a program to store and display your age using an int. 
// Code-10
/*
# include <iostream>
using namespace std;
int main()
{
    int a = 19;
    cout<<"My age is: "<<a;
}
*/

// Problem-11 Write a program to store your height in meters using a float.
// Code-11
/*
# include <iostream>
using namespace std;
int main()
{
    float c = 5.6;
    cout<<"The height of Abu Huraira is: "<<c<<"m";
}
*/

// Problem-12 Write a program to store a single character using a char
// Code-12
/*
# include <iostream>
using namespace std;
int main()
{
    char c = 'A';
    cout<<"Character: "<<c;
}
*/

// Problem-13  Write a program to store and print a string (your city name).
// Code-13
/*
# include <iostream>
using namespace std;
int main()
{
    string name = "Faisalabad";
    cout<<"My City Name is: "<<name;
}
*/

// Problem-14 Write a program that shows implicit type conversion (e.g., int + float).
// Code-14
/*
# include <iostream>
using namespace std;
int main()
{
    int a = 10;
    float b = 5.5;
    float c = a+b;
    cout<<"a(int)="<<a<<"\n";
    cout<<"b(float)="<<b<<"\n";
    cout<<"Result="<<c<<"\n";
}
*/

// Problem-15 Write a program that shows explicit type casting (convert float to int)
// Code-15
/*
# include <iostream>
using namespace std;
int main()
{
    float a = 9.99;
    int num = int(a);
    cout<<"Original Value: "<<a<<"\n";
    cout<<"Float to Integer Value: "<<num<<"\n";
}
*/

// Problem-16  Write a program to display the limits of int and float using <limits> library.
// Code-16
/*
#include <iostream>
#include <limits>
using namespace std;

int main()
{
    cout << "Int Range: " 
         << numeric_limits<int>::min() << " to " 
         << numeric_limits<int>::max() << endl;

    cout << "Float Range: " 
         << numeric_limits<float>::lowest() << " to " 
         << numeric_limits<float>::max() << endl;

    return 0;
}
*/

// Problem-17 Write a program to declare and initialize a variable x = 10.
// Code-17
/*
# include <iostream>
using namespace std;
int main()
{
    int x;
    x = 10;
}
*/

// Problem-18 Write a program to swap two numbers using a third variable.
// Code-18
/*
# include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int b = 12;
    int c;
    c = a;
    a = b;
    b = c;
    cout<<"a: "<<a<<"\n";
    cout<<"b: "<<b<<"\n";
}
*/

// Problem-19 Write a program to swap two numbers without using a third variable.
// Code-19
/*
# include <iostream>
using namespace std;
int main()
{
    int  a = 10;
    int b = 5;
    a = a+b;
    b = a-b;
    a = a-b;
    cout<<"The value of a and b\n"<<"a:"<<a<<"\n"<<"b:"<<b;
}
*/

// Problem-20  Write a program to calculate the area of a rectangle (length × width).
// Code-20
/*
# include <iostream>
using namespace std;
int main()
{
    int a;
    int b;
    cout<<"Enter the Length: ";
    cin>>a;
    cout<<"Enter the Width: ";
    cin>>b;
    float c = a*b;
    cout<<"The area of Rectangle is: "<<c;
}
*/

// Problem-21 Write a program to calculate the area of a circle (πr²)
// Code-21
/*
# include <iostream>
using namespace std;
int main()
{
    float pie;
    pie = 3.1416;
    int r;
    cout<<"Enter the Radius: ";
    cin>>r;
    float areaofcircle = pie*r*r;
    cout<<"The area of circle is: "<<areaofcircle;
}
*/

// Problem-22 Write a program to calculate the average of three numbers
// Code-22
/*
# include <iostream>
using namespace std;
int main()
{
    int num1,num2,num3;
    cout<<"Enter the First Number: ";
    cin>>num1;
    cout<<"Enter the Second Number: ";
    cin>>num2;
    cout<<"Enter the Third Number: ";
    cin>>num3;
    float sum = num1+num2+num3;
    float average = num1+num2+num3/3;
    cout<<"The sum of num1,num2,num3 is: "<<sum<<"\n";
    cout<<"The average of num1,num2,num3 is: "<<average;
}
*/

// Problem-23 Write a program that takes user input for marks in 3 subjects and finds the total.
// Code-23
/*
# include <iostream>
using namespace std;
int main()
{
    int subject1,subject2,subject3;
    cout<<"Enter the marks of Mathematics: ";
    cin>>subject1;
    cout<<"Enter the marks of Physics: ";
    cin>>subject2;
    cout<<"Enter the marks of English: ";
    cin>>subject3;
    int total=300;
    float sum = subject1+subject2+subject3;
    float percentage = sum*100/300;
    cout<<"Total Marks in Subjects: "<<total<<"\n";
    cout<<"Obtained Marks in Subjects: "<<sum<<"\n";
    cout<<"Percentage: "<<percentage;
}
*/

// Problem-24 Write a program to show the difference between local and global variables.
// Code-24
/*
# include <iostream>
using namespace std;
int x = 100;
int main()
{
    int x = 50;
    cout<<"Local Variable: "<<x<<"\n";
    cout<<"Global Variable: "<<::x<<"\n";
}
*/

// Problem-25  Write a program to demonstrate arithmetic operators (+, -, *, /, %).
// Code-25
/*
# include <iostream>
using namespace std;
int main()
{
    int a=6;
    int b=3;
    int sum,subtract,multiply;
    float division;
    sum = a+b;
    subtract = a-b;
    multiply = a*b;
    division = a/b;
    cout<<"The sum of a and b is: "<<sum<<"\n";
    cout<<"The subtraction of a and b is: "<<subtract<<"\n";
    cout<<"The multiplication of a and b is: "<<multiply<<"\n";
    cout<<"The division of a and b is: "<<division<<"\n";
}
*/

// Problem-26 Write a program to find the remainder when a number is divided by 5.
// Code-26
/*
# include <iostream>
using namespace std;
int main()
{
    int num = 44;
    int mod = num%5;   
    cout<<"The modulus of number when divided by 5 is: "<<mod;
}
*/

// Problem-27 Write a program to demonstrate increment and decrement operators (++, --).
// Code-27
/*
# include <iostream>
using namespace std;
int main()
{
    int a = 6;
    cout<<"Intial Value of a: "<<a<<"\n";
    cout<<"Pre Increment of a: "<<++a<<"\n";
    cout<<"Post Increment of a: "<<a++<<"\n";
    cout<<"Pre decrement of a: "<<--a<<"\n";
    cout<<"Post decrement of a: "<<a--<<"\n";
    cout<<"Final Value of a: "<<a<<"\n";
}
*/

// Problem-28 Write a program to check whether a number is even or odd using % operator
// Code-28
/*
# include <iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the Number: "<<num;
    cin>>num;
    if(num%2==0)
    cout<<"The Number is even.";
    else
    cout<<"The Number is odd.";
}
*/

 // Problem-29 Write a program to compare two numbers using relational operators (==, !=, <, >).
// Code-29
/*
# include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the first Number: ";
    cin>>a;
    cout<<"Enter the Second Number: ";
    cin>>b;
    if(a==b)
    cout<<"a is equal to b."<<endl;
    if(a!=b)
    cout<<"a is not equal to b."<<endl;
    if(a<b)
    cout<<"b is greater than a."<<endl;
    if(a>b)
    cout<<"a is greater than b."<<endl;
    return 0;
}
*/

// Problem-30 Write a program to demonstrate logical operators (&&, ||, !).
// Code-30
/*
#include <iostream>
using namespace std;

int main()
{
    bool x = true;
    bool y = false;
    cout << "x = " << x << ", y = " << y << endl;
    // Logical AND
    cout << "x && y = " << (x && y) << endl;
    // Logical OR
    cout << "x || y = " << (x || y) << endl;
    // Logical NOT
    cout << "!x = " << (!x) << endl;
    cout << "!y = " << (!y) << endl;
    return 0;
}
*/

// Problem-31 Write a program to demonstrate assignment operators (+=, -=, *=, /=).
// Code-31
/*
# include <iostream>
using namespace std;
int main()
{
    int a=6;
    cout<<"Intial Value of a: "<<a<<"\n";
    a+=5;
    cout<<"After a+=5, a= "<<a<<"\n";
    a-=5;
    cout<<"After a-=5, a= "<<a<<"\n";
    a*=5;
    cout<<"After a*=5, a= "<<a<<"\n";
    a/=2;
    cout<<"After a/=2, a= "<<a;
}
*/

// Problem-32 Write a program to find the maximum of two numbers using conditional operator (?:).
// Code-32
/*
# include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the First Number: ";
    cin>>a;
    cout<<"Enter the Second Number: ";
    cin>>b;
    if(a>b)
    cout<<"a is greater than b.";
    else
    cout<<"b is greater than a.";
}
*/

// Problem-33 Write a program to demonstrate arithmetic operators (+, -, *, /, %).
// Code-33
/*
# include <iostream>
using namespace std;
int main()
{
    int a=6;
    int b=3;
    int sum,subtract,multiply;
    float division;
    sum = a+b;
    subtract = a-b;
    multiply = a*b;
    division = a/b;
    cout<<"The sum of a and b is: "<<sum<<"\n";
    cout<<"The subtraction of a and b is: "<<subtract<<"\n";
    cout<<"The multiplication of a and b is: "<<multiply<<"\n";
    cout<<"The division of a and b is: "<<division<<"\n";
}
*/
