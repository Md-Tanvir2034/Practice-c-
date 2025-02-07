#include <iostream>
using namespace std;

void myCourse(string course = "C++")
{
 cout << course << endl;
}
int main()
{
 myCourse("C");
 myCourse("Java");
 myCourse();
 myCourse("C#");
 return 0;
}

