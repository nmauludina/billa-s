#include <iostream>
#define infinity 999

using namespace std;

int i,j,k,n;
int matrix[6][6] = {
        {0,3,7,4,infinity,infinity},
        {3,0,2,infinity,infinity,9},
        {7,2,0,1,3,6},
        {4,infinity,1,0,3,infinity},
        {infinity,infinity,3,3,0,3},
        {infinity,9,6,infinity,3,0}
    };

void min(){
    if(matrix[i][j] > (matrix[i][k]+matrix[k][j])){
        matrix[i][j] = matrix[i][k]+matrix[k][j];
    } else {
        matrix[i][j] = matrix[i][j];
    }
}

int main(){
    n = 6;

    for(k=0;k<n;k++){
        cout<<"K = "<<k<<endl;
        for(i=0;i<n;i++){
            cout<<"{ ";
            for(j=0;j<n;j++){
                min();
                if(matrix[i][j]==999){
                    cout<<"INF";
                } else {
                    cout<<matrix[i][j];
                }
                if(j<n-1){
                    cout<<" ,";
                }
            }
            cout<<"}";
            cout<<endl;
        }
        cout<<endl<<endl;
    }
    system("pause");
}