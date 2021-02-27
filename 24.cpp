#include<iostream>
using namespace std;
	int main(){
			int n,ngay,thang,nam;
			cout<<"Nhap ngay_thang_nam_ ";
			cin>>ngay>>thang>>nam;
	if (thang<3){
		

		  thang=thang+12;
		  nam=nam-1;
		}
		n=(ngay+2*thang+(3*(thang+1)) / 5 + nam + (nam / 4)) % 7;
			cout<<"Ngay "<<ngay<<" thang "<<thang<<" nam "<<nam<<" la: ";
			switch(n){
				case 1:
					cout<<"Monday";
					break;
				case 2:
					cout<<"Tuesday";
					break;
				case 3:
					cout<<"Wendnesday";
					break;
				case 4:
					cout<<"thursday";
					break;
				case 5:
					cout<<"Friday";
					break;
				case 6:
					cout<<"Saturday";
					break;
				case 0:
					cout<<"Sunday";
					break;						
			}
		}
