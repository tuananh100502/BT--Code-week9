#include <iostream>
using namespace std;
int main(){
	int* p = new int;
int* p2 = p;
*p = 10;
delete p;
cout << *p2;
delete p2;
}

//output ra ket qua khong chinh xac vi : p va p2 cung tro den 1 dia chi ,xoa p se lam mat du lieu khi in ra p2 .

