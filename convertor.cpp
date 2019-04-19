#include <iostream>

class Number{
	private:
		int n;
	public:
		Number(int a,int b){
			n = a;
		}
		Number converto(int b){
			int tmp = n,out = 0;
			for(int i = 1;tmp != 0;i*=10){
				out += i*(tmp%b);
				tmp = tmp/b;
			}
			return Number(out,10);
		}
		void show(){
			std::cout<<n<<std::endl;
		}
};
int main() {
    int n, n1, n2;
    std::cin >> n;
    for(int i = 0; i < n; ++i) {
        std::cin >> n1 >> n2;
        Number no1(n1, 10);     //n1是10进制正整数
        Number no3 = no1.converto(n2);  //no3是n2进制的正整数
        no3.show();     //输出结果
    }
}
