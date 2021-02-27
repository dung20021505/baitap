  
#include <iostream>
using namespace std;
int main () 
{
int nam;
cin >> nam;
if ((nam % 4 == 0 && nam % 100 != 0) || nam % 400 == 0)	
cout << "true ";
  else
cout << " false ";
return 0;
 
}
