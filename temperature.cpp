#include <iostream>
 using namespace std;
int main ()
{
 float a;
 cout << "enter temperature in fahrenheit"<< endl;
 cin >> a;
 cout << "temperature in celsius=" << (((a-32)/9)*5);
 return 0;
}  
