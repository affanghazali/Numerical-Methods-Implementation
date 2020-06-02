#include<bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<math.h>

using namespace std;

float func(float);

int main(){
	float a, b, z, c, m, n;
	for(int i=0;i<100;i++){
		z = func(i);
		if(z >= 0){
			b = i;
			a = --i;
			goto start;
		}
	}
	start:
		cout<<"First Initial Point => "<<a;
		cout<<"\nSecond Initial Point => "<<b<<"\n\n";
		
		for(int i=0;i<100;i++){
			float h, d;
			m = func(a);
			n = func(b);
			
			c = ((a * n) - (b * m)) / (n - m);
			a = b;
			b = c;
			
			z = func(c);
			if(z > 0 && z < 0.09){		//Stoping Criteria
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
float func(float x)
{
	return (pow(x, 3) - (4 * x) - 9); // original equation
}
