// variables

// Variables have a type, a name, and optionally an initial value. You can
// change the value of a variable later.
int x = 10;

// If you want to make sure the value of a variable never changes, put "const"
// in front of it. In this case, the LED will always be on pin 13 and we don't
// want that to change.
const int ledPin = 13;

// semicolons

// Almost ever line in code must end with a semicolon - this is like a period in
// a normal sentence.
int 7 = 2;

// conditionals (if statements)

// An if statement doesn't have a semicolon at the end of the lines. Instead, it
// uses the curly branches to wrap around a block of code. Whatever code is
// *inside* the curly brances does need semicolons on each line.
if(x > 5) {
    // do something
}

// if/else

if(x > 5) {
    // do something if x is greater than 5
} else {
    // do this if x is less than or equal to 5
}

// conditionals can have multiple conditions
if(x > 5 && y < 2) {
    // do something if x is greater than 5
} else if(x > 15) {
    // do this if x greater than 15
}

// functions

void setup() {
    // this is a function named "setup"
    // a function can return a new value, or it can return nothing.
    // if a function returns nothing, it returns "void" - just like this
    // function
    pinMode(ledPin, OUTPUT);
}

/* This function calculates the sum of two numbers.
 *
 * It requires 2 arguments named "first" and "second", and they must both be
 * integers.
 *
 * It returns an integer value.
 */
int sum(int first, int second) {
    return first + second;
}
