#include <iostream> //for input output operations
#include <vector> //arrays
#include <string> //string variables
#include <cassert> // for assert (testing)

using namespace std;

// ==========================
// Variables and Basic Types
// ==========================

int x = 2;          // integer variable
double y = 3.14;    // decimal (floating-point)
string name = "Sahib"; // string variable (text in quotes)
bool a = true;      // boolean
bool b = false;

// print to console
cout << "Hi, my name is " << name << endl;

// Basic math
int sum = x + 5;
cout << "x + 5 = " << sum << endl;

cout << "Operations:" << endl;
cout << "x + y = " << x + y << endl; // addition
cout << "x - y = " << x - y << endl; // subtraction
cout << "x * y = " << x * y << endl; // multiplication
cout << "x / y = " << x / y << endl; // division
cout << "x % 3 = " << x % 3 << endl; // remainder

// Comparison
cout << (x == 2) << endl; // true if x is 2
cout << (x != 2) << endl; // true if x is not 2
cout << (x > 1) << endl;  // greater than
cout << (x < 1) << endl;  // less than
cout << (x >= 2) << endl; // greater or equal
cout << (x <= 3) << endl; // less or equal

// Logical operators
cout << (a && b) << endl; // and
cout << (a || b) << endl; // or
cout << (!a) << endl;     // not

// ==========================
// If statements (decision making)
// ==========================
int age = 18;
if(age > 18){
    cout << "You are older than 18" << endl;
} else if(age < 18){
    cout << "You are younger than 18" << endl;
} else{
    cout << "You are exactly 18" << endl;
}

// ==========================
// Loops
// ==========================
cout << "For loop 0-4:" << endl;
for(int i = 0; i < 5; i++){
    cout << i << endl;
}

// while loop
int count = 0;
while(count < 5){
    cout << count << endl;
    count++;
}

// break and continue
for(int i = 0; i < 5; i++){
    if(i == 3) break; // stops loop early
    if(i == 1) continue; // skips rest of this iteration
    cout << i << endl;
}

// Nested loops
for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
        cout << "i=" << i << ", j=" << j << endl;
    }
}

// ==========================
// Functions
// ==========================
int add(int a, int b){ //always have to specify function type
    return a + b; // returns value
}

void greet(string name){
    cout << "Hello " << name << endl; 
}//no return on void, can display on terminal with cout though

int result = add(5,3);
cout << "add(5,3) = " << result << endl;
greet("Sahib");

// Default parameters
void greet2(string name = "friend"){
    cout << "Hi " << name << endl;
}
greet2();
greet2("Alice");

// Multiple returns using references/pointers
bool divide(int a, int b, double &result){
    if(b==0) return false;
    result = a / (double)b;
    return true;
}

double div_result;
if(divide(10,2, div_result)){
    cout << "10 / 2 = " << div_result << endl;
}

// ==========================
// Arrays and Vectors
// ==========================

// C-style array
int arr[5] = {1,2,3,4,5}; // fixed size, stack allocated

// Vector (dynamic array)
vector<int> v;
v.push_back(10);
v.push_back(20);
cout << "Vector first element: " << v[0] << endl;

// Vector of pointers
vector<int*> pv;
pv.push_back(new int(5));
cout << "Pointer value: " << *pv[0] << endl;

// Deallocate pointers to avoid memory leaks
for(int* p : pv){
    delete p;
}

// ==========================
// Pointers
// ==========================
int val = 10;
int* p = &val;  // p stores the address of val
cout << "Address stored in p: " << p << endl;
cout << "Value at p: " << *p << endl; // dereference pointer

*p = 20; // change val through pointer
cout << val << endl;

int** pp = &p; // pointer to pointer
cout << "Value at pp: " << **pp << endl;

// Null pointers
p = nullptr; // p points to nothing

// ==========================
// Object-Oriented Programming (OOP)
// ==========================
class Animal{
public:
    virtual string speak() = 0; // pure virtual, must be implemented, else crash
    virtual ~Animal(){} // virtual destructor
};

class Dog : public Animal{
public:
    string speak(){ return "Woof"; }
};

class Cat : public Animal{
public:
    string speak(){ return "Meow"; }
};

vector<Animal*> zoo;
zoo.push_back(new Dog());
zoo.push_back(new Cat());

for(Animal* a : zoo){
    cout << a->speak() << endl;
}

// clean up
for(Animal* a : zoo){
    delete a; // deletes Dog and Cat objects
}

// ==========================
// Memory Management Summary
// ==========================

// new T;        // allocate a single object on heap
// delete p;     // frees memory allocated by new
// new T[n];     // allocate array of n objects
// delete[] p;   // frees memory allocated by new[]
// vector<int*> v stores pointers → must delete each individually
// vector<int> v stores actual ints → no manual delete needed
