#include <iostream>
using namespace std;
  
#define PI 3.14
  
int main()

{
    
    float radius, area;
    cout << "Enter radius of circle =";
    cin >> radius;
    
    // Area of Circle = PI x Radius X Radius
    area = PI*radius*radius;
    cout << "Area of circle : " << area;
      
    return 0;
    
}