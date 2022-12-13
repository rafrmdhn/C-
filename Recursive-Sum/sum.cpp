#include <iostream>
using namespace std;

int main(){
    int baris;
    int i, j;

    cin>>baris;

    int n[baris];
    int x[baris];
    int y[baris];

    for (i=0; i<baris; i++){
        cin>>n[i]>>x[i]>>y[i];
	}
	
	for(j=0; j<baris; j++){
		for(int z=0; z<n[j]; z++){
			if(z%x[j]==0 && z%y[j]!=0){
            cout<<z<<" ";
		}
	}cout<<"\n";
	
}

	return 0;
}
