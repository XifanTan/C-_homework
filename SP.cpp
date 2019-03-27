#include<stdio.h>
#include<iostream>
#include<cstdio>
#include<cstdlib>

typedef struct superprim{
	int number;
	int max;
	int sum;
}superprim; 

int pr[999];

void is_prim(void){
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
int prim(int a){
	int key = 0;
	for(int i = 0;pr[i] != 0;i++){
		if(pr[i] == a) key = 1;
	}
	return key;
}
bool is_superprim(int a){
	int a1,a2,a3;
	a1 = a/100%10;
	a2 = a/10%10;
	a3 = a%10;
	if(prim(a) && prim(a1 + a2 + a3) && prim(a1* a2* a3) && prim(a1*a1+a2*a2+a3*a3)) return true;
	else return false;
}
int main(){
	is_prim();
	superprim SP/* = (superprim*)malloc(sizeof(superprim))*/;
	for(int i = 100;i <=999;i++){
		if(is_superprim(i)) {
			SP.number ++;
			SP.max = i;
			SP.sum += i;
	 	}
	}
	printf("number:%d\n max:%d\n sum:%d\n",SP.number ,SP.max ,SP.sum );
	return 0;
}
