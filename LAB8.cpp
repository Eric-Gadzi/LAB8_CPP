# include <iostream>;
using std;

int main()
{
    double A[][] = new double[8][8];

    double B[] = new double[8];


    for(int i = 0; i < 8; i++){
        for(int j = 0, j <= i; j++){
            A[i][j] = rand()%1000;
            int I = linerIndx(8, i, j);
            B[I] = A[i][j];
        }
    }


    double A[][] = new double[32][32];

    double B[] = new double[32];


    for(int i = 0; i < 32; i++){
        for(int j = 0, j <= i; j++){
            A[i][j] = rand()%1000;
            int I = linerIndx(32, i, j);
            B[I] = A[i][j];
        }
    }
   
}

int linerIndx(int size, int i, int j){
 
  int sum = 0
  int I = 0;

 for (int p = 1; p <= i; i++)
 {
     sum = sum + size-i;
 }

 I = size*i+j - sum;
    return I;
}