#include<iostream>
using namespace std;
//inline function to calculate a square of number
inline int square(int x) {
	return x*x;
}
//inline fuction to calculate a cube of a number
inline int cube(int x) {
	return x*x*x;
}
int main(){
int num;
cout<<"Enter a number";
cin>>num;
cout<<"Square of"<<num<<"is:"<<square(num)<<endl;
cout<<"Cube of"<<num<<"is:"<<cube(num)<<endl;
return 0;
}
