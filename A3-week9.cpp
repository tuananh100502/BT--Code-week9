#include <iostream>
using namespace std;
int main(){

char* a = new char[10];
char* c = a + 3;
for (int i = 0; i < 9; i++) a[i] = 'a';
a[9] = '\0';
cerr <<"a: " << "-" << a << "-" << endl;
cerr <<"c: " << "-" << c << "-" << endl;
delete c;
cerr << "a after deleting c:" << "-" << a << "-" << endl;
//lenh cer thu 3 ko duoc in ra vi:a va c cung tro den 1 dia chi , bo nho cua c lon hon a 
//nen xoa c gay that thoat du lieu .
}
