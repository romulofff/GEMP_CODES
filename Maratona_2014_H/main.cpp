#include <iostream>

using namespace std;

int main() {
	int flag = 0, n = 0;
    int M = 0, N = 0;
	cout << "Digite os valores M e N." << endl;
	cin >> M >> N;
	int time[M][N];
    for(int i=0; i<M; i++){
        for(int j=0; j<N; j++){
            cout<< "Digite a quantidade de gols do jogador em cada partida:" <<endl;
            cin>> time[i][j];
        }
    }
    for(int i=0; i<M; i++){
        flag = 0;
        for(int j=0; j<N; j++){
            if(time[i][j] > 0){
                flag++;
            }
        }
        if(flag == N){
            n++;
        }
    }
    cout << n << " jogadores fizeram gols em todas as partidas";

	return 0;
}



