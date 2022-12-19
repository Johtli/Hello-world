#include <iostream>
#include <string>
using namespace std;
class firstClass {
    public:
        int bookNum;
        string name;

};
ostream& operator<<(ostream &s, const firstClass &pers) { //str repr of class
    return s << "(" << pers.name << ", " << pers.bookNum << ")";
}
void plus1(int &i1, int i2=1); //must declare functions before main
int main(){
    firstClass pass1;
    pass1.bookNum = 10190;
    pass1.name = "John Smith";
    cout << pass1<< "\n";
    int i = 1;
    plus1(i);
    cout << i <<"\n";
    return 0;
}
void plus1(int &i1, int i2){
    i1 = i1+i2;
}