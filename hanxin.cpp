#include <iostream>

class HanXin{
	private:
		int l3, l5, l7;
	public:
		void line3(int a){
			l3 = a%3;
		}
		void line5(int a){
			l5 = a%5;
		}
		void line7(int a){
			l7 = a%7;
		}
		void showMany(){
			for(int i = 10;i<=100;i++){
				if(i%3 == l3 && i%5 == l5 && i%7 == l7){
					std::cout<<i<<std::endl;
					break;
				}
				if(i == 100) std::cout<<"Impossible"<<std::endl;
			}
		}
};


int main() {
    int n, n1, n2, n3;
    std::cin >> n;
    for(int i = 0; i < n; ++i) {
        std::cin >> n1 >> n2 >> n3;
        HanXin hx;  //韩信
        hx.line3(n1);  //3人一排
        hx.line5(n2);   //5人一排
        hx.line7(n3);   //7人一排
        hx.showMany();
    }
}
