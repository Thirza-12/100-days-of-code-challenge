#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program of conacatenating two strings
    string a;
    cin>>a;
    string b;
    cin>>b;
    int len=a.size();
    int leng=b.size();
    cout<<len<<" "<<leng<<endl;
    cout<<a+b<<endl;
    string c;
    c=a;
    c[0]=b[0];
    cout<<c<<" ";
    b[0]=a[0];
    cout<<b;
    
    return 0;
}
