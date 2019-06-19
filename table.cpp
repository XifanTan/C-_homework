#include<iostream>
using namespace std;

class Word{
	private:
		char *word;
	public:
		Word(){
			
		}
		Word(char *mesg){
			
		}
		Word(int mesg){
			
		}
		show(){
			printf("%s",word);
		}
};
class Table{
private:
	int row = 1,col = 1;
	Word *w[100][100];
public:
	Table(){
		
	}
	Table(int a,int b){
		
	}
	addRow(){
		
	}
	addColumn(){
	
	}
	set(int i,int j,int word){
		
	}
	set(int i,int j,char word[]){
		
	}
	delRow(int j){
		
	}
	delColumn(int i){
		
	}
	show(){
		
	}
};




int main() {
  Table tb;
  tb.show();
  tb.addRow();
  tb.show();
  tb.addColumn();
  tb.show();
  Table tb1(5,5);
  tb1.show();
  tb1.set(1,1,30);
  tb1.set(2,2,"hello");
  tb1.show();
  tb1.delRow(1);
  tb1.show();
  tb1.delColumn(1);
  tb1.show();
  return 0;
}
