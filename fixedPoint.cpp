#include<bits/stdc++.h>
#include<iostream>
#include<cmath>
using namespace std;

float func(float);

int main(){
	float a[100], b[100], c = 100.0;
	int i = 1, j = 0;
	
	b[0] = func(0);
	
	cout<<"Enter Initial point => ";
	cin>>a[0];
	
	cout<<"\n\nThe values of iterations are => \n\n";
	while(c > 0.00001){
		a[j+1] = func(a[j]);
		c = a[j+1] - a[j];
		c = fabs(c);
		printf("%d\t%f\n",j,a[j]);
		j++;
	}
	cout<<"\nThe root of the given function is => "<<a[j];
}

float func(float x){
	return (pow(((9*x)-1),1/3)); //The original function
}
