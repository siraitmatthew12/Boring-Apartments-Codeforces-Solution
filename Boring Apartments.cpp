//Praise To Jesus my Savior
//For The Greater Glory of The Lord

#include<iostream>
#include<string>
#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	
	int i, x[t], m[t], count = 0, j;
	for(i=0;i<t;i++){
		cin>>x[i];
		if(x[i]>1000){
			m[i] = x[i]/1111;
			m[i] = (m[i]-1)*10;
			m[i] = m[i] + 1 + 2 + 3 + 4;
		}
		else if(x[i]>100 && x[i]<=1000){
			m[i] = x[i]/111;
			m[i] = (m[i]-1)*10;
			m[i] = m[i] + 1 + 2 + 3;
		}
		else if(x[i]>10 && x[i]<=100){
			m[i] = x[i]/11;
			m[i] = (m[i]-1)*10;
			m[i] = m[i] + 1 + 2;
		}
		else{
			m[i] = x[i];
			m[i] = (m[i]-1)*10;
			m[i] = m[i] + 1;
		}
		
	}
	for(i=0;i<t;i++){
		cout<<m[i]<<endl;
	}
	return 0;
}
