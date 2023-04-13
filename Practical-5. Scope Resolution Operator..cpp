#include <iostream>  
using namespace std;  

// Declare global variable  
int num = 150;  
int main ()  

{  
    
// Declare local variable   
int num = 500;  
  
// Print the value of the variables  
cout << " The value of the local variable num = " << num;  
  
// Use scope resolution operator (::) to access the global variable   
cout << "\n The value of the global variable num: " << ::num;   

return 0;  

}