// *
// file nam: Math Tutor
// Name of programmer:Ebram Azer
// Requirments:Write a programm that can be used as math tutor for a young student 
//*
#include <iostream>
#include <cstdlib>  
#include <ctime>    
#include <conio.h>  
using namespace std;

int main() {
    // Seed the random number generator
    srand(static_cast<unsigned int>(time(0)));

    // Generate two random numbers between 100 and 999
    int num1 = rand() % 900 + 100;
    int num2 = rand() % 900 + 100;
    int studentAnswer, correctAnswer;

    // Display the problem
    cout << "Solve the following addition problem:\n";
    cout << "  " << num1 << endl;
    cout << "+ " << num2 << endl;
    cout << "--------" << endl;

    // Pause for student to solve the problem (press any key to continue)
    cout << "\nPress any key when you are ready to see the answer...";
    _getch();  // Wait for the student to press any key (Windows-specific, for Linux use cin.get())

    // Display the correct answer
    correctAnswer = num1 + num2;
    cout << "\nThe correct answer is:\n";
    cout << "  " << num1 << endl;
    cout << "+ " << num2 << endl;
    cout << "--------" << endl;
    cout << "  " << correctAnswer << endl;

    return 0;
}
