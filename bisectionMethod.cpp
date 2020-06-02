#include<iostream>
#include<bits/stdc++.h>
#include <math.h>
using namespace std;

float equation(float);

int main(){
	float a, b, bpoint, z;
	for(int i=0;i<100;i++){
		z = equation(i);
		if(z >= 0){
			b = i;
			a = --i;
			goto start;
		}
	}
	start:
		cout<<"First Initial Point => "<<a;
		cout<<"\nSecond Initial Point => "<<b;
		for(int i=0;i<100;i++){
			bpoint = (a+b)/2;
			z = equation(bpoint);
			
			cout << "\n\nz: " << z << "\t[" << a << " , " << b << " | Bisect: " << bpoint << "]";
			if(z < 0){
				a = bpoint;
			}
			else{
				b = bpoint;
			}
			
			if(z > 0 && z < 0.00009){     	//Stoping Criteria
				goto end;
			}
		}
	end:
		cout<<"\n\nRoot => "<<bpoint;
}

float equation(float x){
	return (pow(x, 7) - (10 * pow(x, 3)) - 9); //The original equation
}


