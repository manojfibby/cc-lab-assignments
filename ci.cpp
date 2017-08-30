#include <iostream>
#include <cmath>
using namespace std;
int main ()
{ 
 float p,r,t,n;
 cout << " enter principle,rate%,time and no of times interest is compounded per year " << endl;
 cin >> p >> r >> t >> n;
 cout << "the final amount you recieve after the time="<< p* (pow((1+(r/100*n)),(n*t))) << endl;
 cout << "the ci calculated is= " << ((p* (pow((1+(r/100*n)),(n*t))))-p);
 return 0;
}
 
