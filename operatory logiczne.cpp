#include <iostream>
#include <bitset>

using namespace std;

int main(){
	int a, b;
	cout<<"podaj a:";
	cin>>a;
	cout<<"podaj b:";
	cin>>b;
	
cout<<"a|b="<< bitset<8>(a).to_string()<<endl;
cout<<"a ^ b="<< bitset<8>(a^b).to_string()<<endl;
cout<<"a&b="<< bitset<8>(a&b).to_string()<<endl;
cout<<"~a="<< bitset<8>(~a).to_string()<<endl;
cout << "~b="<< bitset<8>(~b).to_string() <<endl;
cout << "a <<= b"<< bitset<8>(a <<= b).to_string() <<endl;
cout << "a >>= b"<< bitset<8>(a >>= b).to_string() <<endl;
return 0;
}
