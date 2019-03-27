#include<iostream>
using namespace std;

class superprim{
	private:
		int number;
		int max;
		int sum;
		int pr[999];
	public:
		superprim();
		void is_prim();
		int prim(int a);
		bool is_superprim(int a);
		void renew(int i);
		void show();
};

int main(){
	superprim SP;
	SP.is_prim();
	for(int i = 100;i <=999;i++){
		if(SP.is_superprim(i)) {
			SP.renew(i);
	 	}
	}
	SP.show();
	return 0;
}

superprim::superprim(){
	number = 0;
	max = 0;
	sum = 0;
	for(int i = 0;i <= 999;i++) pr[i] = 0;
}

void superprim::renew(int i){
	number ++;
	max = i;
	sum += i;
}

void superprim::is_prim(){
	int PR[999] = {0};
	PR[0] = 1;
	PR[1] = 1;
	for (int i = 2;i<=999;i++){
		for(int t = 2;i*t<=999;t++){
			PR[i*t] = 1;
		}
	}
	int t = 0;
	for (int i = 0;i<=999;i++){
		if(PR[i] == 0) pr[t++] = i;
	}
}

int superprim::prim(int a){
	int key = 0;
	for(int i = 0;pr[i] != 0;i++){
		if(pr[i] == a) key = 1;
	}
	return key;
}

bool superprim::is_superprim(int a){
	int a1,a2,a3;
	a1 = a/100%10;
	a2 = a/10%10;
	a3 = a%10;
	if(prim(a) && prim(a1 + a2 + a3) && prim(a1* a2* a3) && prim(a1*a1+a2*a2+a3*a3)) return true;
	else return false;
}

void superprim::show(){
	cout<<number<<endl;
	cout<<max<<endl;
	cout<<sum<<endl;
}
