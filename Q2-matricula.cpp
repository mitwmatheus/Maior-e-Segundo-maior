#include<iostream>
using namespace std;

int main(){
	int m=1, maiorm=0, auxm=0, segundom=0;
	float n, maiorn=0, auxn=0, segundon=0;
	
	while(m!=0){
		cin>>m;
		if(m!=0){
			cin>>n;
			if(n>maiorn){
				auxn=maiorn;
				maiorn=n;
				auxm=maiorm;
				maiorm=m;
			}if(auxn>segundon){
				segundon=auxn;
				segundom=auxm;
			}
		}
	}
	cout<<maiorm<<" "<<maiorn<<endl<<segundom<<" "<<segundon;
	return 0;
}
