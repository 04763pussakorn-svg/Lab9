#include<iostream>
using namespace std;

int printO(int N, int M){

cin >> M;
cin >> N;

if (M > 0 and N > 0){
    for (int count = 0; count < N; count++){
        for (int count = 0; count < M; count++){
                cout << 'O';
               }
            cout << "\n";
        }
}else{
    cout << "Invalid input";
    }
return 0;
}

int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}
