/*
Lesson 5.3 Samples
Pawelski
4/20/2021
Here are the sample programs for this lesson!
*/

#include <iostream>
#include <string>
#include <thread>
#include <chrono>
using namespace std;
using namespace this_thread;

/*
Finds the average of three numbers. We will revisit this example
in the next unit to show a better way to find the average of a
data set/
*/
double average(int num1, int num2, int num3) {
    return (num1 + num2 + num3) / 3;
}

/*
Returns the Fibonacci number at the given position.
*/
unsigned long long int fibonacci(int position) {
    if (position == 1) {
        return 0;
    }
    else if (position == 2 || position == 3) {
        return 1;
    }
    else if (position > 3) {
        unsigned long long int previous1 = 1;
        unsigned long long int previous2 = 1;
        unsigned long long int current;
        for (int i = 3; i < position; i++) {
            current = previous1 + previous2;
            previous2 = previous1;
            previous1 = current;
        }
        return current;
    }
    else {
        throw "Invalid position!";
    }
}

/*
Changes all the letters in a string to uppercase.
*/
string toUpper(string word) {
    string newWord = "";
    for (int i = 0; i < word.length(); i++) {
        newWord += toupper(word[i]);
    }
    return newWord;
}

/*
Adds two to the number.
*/
double addTwo(double number) {
    return number + 2;
}

/*
Multiplies the number by two.
*/
double multiplyByThree(double number) {
    return number * 3;
}

/*
Function to demonstrate calling other functions.
*/
double myFunction(double number) {
    return addTwo(number) + multiplyByThree(number);
}

int main()
{
    /*
    Example #1
    Basic example of returning a value.
    */
    cout << average(1, 1, 10) << "\n\n";

    /*
    Example #2
    shows how a function works with multiple return statements.
    */
    cout << fibonacci(1) << "\n";
    cout << fibonacci(2) << "\n";
    cout << fibonacci(3) << "\n";
    cout << fibonacci(4) << "\n";
    cout << fibonacci(5) << "\n";
    cout << fibonacci(6) << "\n";
    cout << fibonacci(7) << "\n";
    cout << fibonacci(8) << "\n";
    int position;
    cout << "What position do you want in the Fibonacci Sequence? ";
    cin >> position;
    cout << fibonacci(position) << "\n\n";

    /*
    Example 3
    This example shows how you can store the returned value in a variable.
    */
    cout << toUpper("Hello") << "\n";
    string fruit;
    cout << "Enter a fruit: ";
    cin >> fruit;
    fruit = toUpper(fruit);
    if (fruit == "APPLE") {
        cout << "What do you get if you cross an apple with a shellfish?\n";
        sleep_for(5s);
        cout << "A crabapple!\n";
    }
    else if (fruit == "BANANA") {
        cout << "What kind of jokes do bananas like to tell?\n";
        sleep_for(5s);
        cout << "Side-splitting ones!\n";
    }
    else if (fruit == "ORANGE") {
        cout << "Why do oranges wear suntan lotion?\n";
        sleep_for(5s);
        cout << "Because they peel!\n";
    }
    else {
        cout << "I don't know any jokes about that fruit!\n";
    }
    cout << "\n";

    /*
    Example 4
    This example shows how a function can call another function!
    */
    cout << myFunction(4) << "\n";
    return 0;
}
