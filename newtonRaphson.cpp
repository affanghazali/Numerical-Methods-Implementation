#include<bits/stdc++.h>
#include<iostream>
#include<math.h>
#include<cmath>

using namespace std;

float equation(float);
float equationDerivative(float);

int main(){
	float a ,b, z, c, m, n;
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
		cout<<"\nSecond Initial Point => "<<b<<"\n\n";
		c = (a+b)/2;
		
		for(int i=0;i<100;i++){
			float h;
			m = equation(c);
			n = equationDerivative(c);
			z = c -(m/n);
			c = z;
			
			if(m > 0 && m < 0.00009){
				goto end;
			}
			else{
				cout<<"Iteration "<<i<<" : z = "<<z<<"\n";
			}
		}
	end:
		cout<<"\n\nRoot => "<<z;
		
	return 0;
}

float equation(float x){
	return (pow(x, 3) - (4 * x) - 9);
}
float equationDerivative(float x){
	return ((3 * pow(x, 2)) - 4);
}

