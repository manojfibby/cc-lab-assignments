#include <iostream>
 using namespace std;
 int main ()
{
 float a,b,c,d,e;
 cout << "enter marks in 5 subjects each out of 100" << endl;
 cin >> a >> b >> c >> d >> e;
 cout << "your total=" << (a+b+c+d+e) << endl;
 cout << "your average=" << ((a+b+c+d+e)/5) << endl;
 cout << "your percentage is=" << (((a+b+c+d+e)/500)*100);
 return 0;
}
 
