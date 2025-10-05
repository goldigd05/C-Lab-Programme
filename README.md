# C-Lab-Programme
C++ Practical Programs – Summary
3. Complex Number Class

Objective: Define a class complex_number with overloaded constructors and inline functions.

Key Points:

Private data members: real, imaginary.

Overloaded constructors:

Zero-argument constructor → initializes default values.

Parameterized constructor → initializes with given values.

Inline functions:

getdata() → input values from user.

showdata() → display in format a+bi.

Additional member functions:

add(complex_number) → add two complex numbers.

mul(complex_number) → multiply two complex numbers.

Main Function Example:

complex_number C1, C2(5.4,7.8), C3(6.3,7);
C1.getdata();
C1.add(C2);
C3.mul(C2);
C1.showdata();
C2.showdata();
C3.showdata();

4. Mean, Median, and Mode of Array

Objective: Design a class to calculate mean, median, and mode of elements stored in an array.

Key Points:

Array is a data member of the class.

Functions:

mean() → average of elements.

median() → middle element (or average of two middle elements if size even).

mode() → most frequently occurring element.

5. Date Class – Age Calculation

Objective: Calculate age in years based on date of birth.

Key Points:

Use ctime header to get current date.

Member function takes date of birth as argument and displays age in years.

6. Date Class – Difference Between Dates

Objective: Find the difference between two dates.

Key Points:

Member function (non-inline): daysdifference(Date D2) returns difference in days.

Friend function: long int daysdifference(Date D1, Date D2) → calculates difference without using object functions.

Example usage:

Date D1(23,7,2003), D2(7,3,2010);
long int days = D1.daysdifference(D2);


Limitations: Ignores leap seconds, assumes all months have fixed days in simple calculation (if not handled carefully).

7. Cake Class – Static Members

Objective: Track cakes prepared, sold, and current stock using static data members.

Key Points:

Static data members:

Total cakes prepared

Total cakes sold

Member function:

Display current stock = prepared − sold

8. Distance Class

Objective: Represent distances in feet and inches.

Key Points:

Private data members: feet, inches.

Constructors:

Parameterized

Non-parameterized

Member functions:

Change distance value

Add two distance objects → return result

Display distance in format: 5'9''

Const/non-const function usage.

10. Student Class

Objective: Store and process student information.

Key Points:

Data members:

Constant roll number (initialized via constructor initializer list)

Name

Marks in 3 subjects

Functions:

Accept name and marks

Calculate total and average

Display roll number, name, total, and average

11. Multiple Inheritance

Objective: Implement multiple inheritance in C++.

Key Points:

Base classes with their own members/functions.

Derived class inherits from two or more base classes.

Demonstrates:

Accessing base class members

Resolving ambiguities if member names conflict.
