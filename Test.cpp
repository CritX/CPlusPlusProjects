#include <iostream>
#include <chrono>
#include <thread>
using namespace std;
int main(){
cout << "This a test CPP file." << endl;
this_thread::sleep_for(chrono::seconds(5));
system("PAUSE");
cout << "Lolo!" << endl;
this_thread::sleep_for(chrono::seconds(5));
return 0;
}
