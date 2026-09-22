#include <iostream>
#include <string>

using namespace std;

/*
    Exercise: Employee Management System

    Description:
    Design and implement an Employee Management System using classes and constructors in C++. 
    The system should allow you to create and manage employee records.

    Requirements:

    1. Create a class named "Employee" with the following attributes:
    Employee ID (an integer)
    Employee name (a string)
    Employee designation (a string)
    Employee salary (a floating-point number)

    2. Implement the following constructors for the "Employee" class:
    A parameterized constructor that initializes all the attributes based on provided values.
    A default constructor that sets default values for the attributes.

    3. Include member functions to:
    Set and get the employee attributes (ID, name, designation, salary).
    Display the employee details.

    4. Create multiple employee objects using different constructors and display their details.

    Tips:
    Use appropriate access specifiers (such as private and public) for the class members.
    Consider using default values in the parameterized constructor to provide flexibility when creating objects.
    Test the functionality of constructors by creating objects with and without providing initial values.
    This exercise will help you practice creating and initializing objects using constructors and defaulted constructors, as well as accessing and displaying object attributes.
*/



class Employee {
private:
int ID;
string Name;
string Designation;
float Salary;

public:

// Default constructor
    Employee() {
        ID =0;
        Name = "Unknown";
        Designation = "Unknown";
        Salary = 0;
    }

    // Constructor
     Employee(int EmployeeID, string EmployeeName, string EmployeeDesignation, int EmployeeSalary):
     ID(EmployeeID), Name(EmployeeName), Designation(EmployeeDesignation), Salary(EmployeeSalary){

    }

    // Setters
    void setID(int EmployeeID) {
        ID = EmployeeID;
    }
    void setName(string EmployeeName) {
        Name = EmployeeName;
    }
    void setDesignation(string EmployeeDesignation) {
        Designation = EmployeeDesignation;
    }
    void setSalary(int EmployeeSalary) {
        Salary = EmployeeSalary;
    }

    // Getters

    int getID () {
        return ID;
    }
    string getName () {
        return Name;
    }
    string getDesignation () {
        return Designation;
    }
    int getSalary () {
        return Salary;
    }
    // Display
    void displayDetails() {
    cout << "ID: " << ID << endl;
    cout << "Name: " << Name << endl;
    cout << "Designation: " << Designation << endl;
    cout << "Salary: " << Salary << endl;
}


};



int main() {

    /*      Example usage:     */ 

    // Creating employee objects using different constructors
    Employee emp1(101, "John Doe", "Manager", 5000.0);
    Employee emp2;

    emp2.setID(102);
    emp2.setName("Jane Smith");
    emp2.setDesignation("Engineer");
    emp2.setSalary(4000.0);

    // Displaying employee details
    cout << "Employee 1 Details: " << endl;
    emp1.displayDetails();
    cout << endl;

    cout << "Employee 2 Details: " << endl;
    emp2.displayDetails();
    cout << endl;

    return 0;
}