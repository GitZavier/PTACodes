#include <iostream>
// L1-048. 矩阵A乘以B
using namespace std;
int matrixA[100][100],matrixB[100][100];
int main(int argc, char *argv[]) {
	int Ra,Ca,Rb,Cb,i,j,sum;
	cin>>Ra>>Ca;
	for(i=0;i<Ra;i++){
		for(j=0;j<Ca;j++){
			cin>>matrixA[i][j];
		}
	}
	cin>>Rb>>Cb;
	for(i=0;i<Rb;i++){
		for(j=0;j<Cb;j++){
			cin>>matrixB[i][j];
		}
	}
	if(Rb==Ca){
		cout<<Ra<<' '<<Cb<<endl;
		for(i=0;i<Ra;i++){
			for(j=0;j<Cb;j++){
				sum=0;
				for(int k=0;k<Ca;k++){
					sum+=matrixA[i][k]*matrixB[k][j];
				}
				if(j!=0){
					cout<<' ';
				}
				cout<<sum;
			}
			cout<<endl;
		}
	}else{
		cout<< "Error: "<<Ca<<" != "<<Rb<<endl;
	}
	return 0;
}