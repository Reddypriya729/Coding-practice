#include <iostream>
 
int x = 40; // global variable 

int main() { 
int x = 30; // local variable 

std::cout << "Local x: " << x << std::endl;
 
std::cout << "Global x: " << ::x << std::endl;  
                     // scope resolution to access global x 
return 0; 
}
