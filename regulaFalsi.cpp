#include<bits/stdc++.h>
#include<iostream>
#include<math.h>
#include<cmath>

using namespace std;
float equation(float);

int main(){
	float a, b, z, c, m, n;
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
		for(int i=0;i<100;i++){
			float h, d;
			m = equation(a);
			n = equation(b);
			c = ((a * n) - (b * m)) / (n - m);
        	a = c;
        	z = equation(c);
        	if(z > 0 && z < 0.09){
        		goto end;
			}
			else{
				cout<<"Iteration "<<i<<" : z = "<<z<<"\n";
			}
		}
		end:
			cout<<"Root => "<<z;
			return 0;
}

float equation(float x) {
    return (pow(x, 7) - (10 * pow(x, 3)) - 9);  // origial equation
}

