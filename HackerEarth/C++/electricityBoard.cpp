#include<iostream>
using namespace std;
class electricityBoard{
	int houseNo;
	int units;
	int charge;
	public:
		void read();
		void calcCharge();
		void print();
};

void electricityBoard::read(){
	cout<<"Enter house number: "<<endl;
	cin>>houseNo;
	cout<<"Enter Units used: "<<endl;
	cin>>units;
}

void electricityBoard::calcCharge(){
	if(units == 0){
		charge = 50;
	}
	else if(units>0 && units<=100){
		charge = 0.6*units;
	}
	else if(units>0 && units<=200){
		charge = 0.6*100;
		charge += (200-units)*0.8;
	}
	else if(units>0 && units<=300){
		charge = 0.6*100;
		charge += 0.8*100;
		charge += 0.9*(300-units);
	}
	
	if(charge>300){
		charge += 0.15*charge;
	}
}

void electricityBoard::print(){
	cout<<"--------------------------"<<endl;
	cout<<"House Number: "<<houseNo<<endl;
	cout<<"Units: "<<units<<endl;
	cout<<"Charge: "<<charge<<endl;
	cout<<"--------------------------"<<endl;
}

int main(){
	electricityBoard house1;
	house1.read();
	house1.calcCharge();
	house1.print();
}

