/*	TUGAS ARRAY
*/	

#include <iostream>

using namespace std;

void ary(){
	//KAMUS
	
	char hrf[4]; 
	char b; 
	int c=0, sum=0;
	//ALGORITMA
	
	while(c<= 3){
			cout<<"+---+\n";
			cout<<"> ";cin>>hrf[c];  
			c++;
	}
	
	for(int x=0; x<=3; x++ ){
	cout<<"huruf masukan ke-"<<x<<": "<<hrf[x]<<"\n";
	}
	
	cout<<"masukan huruf penentu \n";
	cin>>b;
	
	for(int c=0; c<=3; c++ ){
	if(b == hrf[c]){int v=1; sum+=v; }
	}
	
	
	cout<<"jumlah huruf "<<b<<" : sebanyak: "<<sum;
	
}