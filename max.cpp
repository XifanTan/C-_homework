#include<iostream> 

class Number{
	private:
		int num;
	public:
		Number(int n) {
			num = n;
		}
		Number maxDivisor(Number n){
			int min = num,maxdivisor = 1;
			if(num>n.num) min = n.num;
			for(int i = 1;i <= min;i++){
				if(num%i == 0 && n.num%i == 0) maxdivisor = i;
			}
			return Number(maxdivisor);
		}
		void show(){
			std::cout<<num<<std::endl;
		}
};
int main() {
    int n, n1, n2;
    std::cin >> n;
    for(int i = 0; i < n; ++i) {
        std::cin >> n1 >> n2;
        Number no1(n1), no2(n2);
        Number no3 = no1.maxDivisor(no2);  //最大公约数
        no3.show();
    }
}
