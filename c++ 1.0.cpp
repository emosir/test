#include <iostream>
#include <stdio.h>
class Integer{
public:
	Integer(int a){
		n=a;
	}
	void ask();
private:
	int n;
}; 
void Integer::ask(){
	
}
int main(){
	Integer obj(138);
	obj.ask();
	return 0;
}

