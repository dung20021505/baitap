#include <iostream>
#include <math.h>
using namespace std;
int main(){ 
int x,y,z;
cin >>x >> y>> z;


	if (((x<y)&&(y<z))||((x>y)&&(y>z)))
	{
		cout << "true";
	}
	else cout << "false" ;

}
