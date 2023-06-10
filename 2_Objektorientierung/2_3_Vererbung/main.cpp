//
// Created by Jannik Loth on 05.06.23.
//


// include header files
#include "Student.hpp"
#include "Professor.hpp"
#include "MailHandler.hpp"



// main function
int main()
{
    // initialise some students
    Student student1 = Student("John Doe", "123 Main Street", "john.doe@example.com", 4.0);
    Student student2 = Student("Alice Smith", "456 Elm Street", "alice.smith@example.com", 3.8);
    Student student3 = Student("Bob Johnson", "789 Oak Avenue", "bob.johnson@example.com", 3.5);

    // initialise some professors
    Professor professor1 = Professor("Jane Williams", "321 Pine Lane", "jane.williams@example.com", "DE123456789");
    Professor professor2 = Professor("Michael Brown", "654 Cedar Road", "michael.brown@example.com", "DE987654321");
    Professor professor3 = Professor("Emily Davis", "987 Birch Court", "emily.davis@example.com", "DE456789123");

    // write mails



    return 0;
}