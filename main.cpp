#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

void end(int **m,int r,int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
            cout << m[i][j];
        cout << endl;
    }
    
};
void check(int **m, string block, int base, int row, int &k){
    






}
void deleterow();//TODO


int main(){
    ifstream fin;
    string fname;
    string lines;
    string block;
    int row, col, base, k=0;
    int **matrix;

    getline(cin, fname);
    fin.open(fname);
    while(fin){
        getline(fin,lines);
        if(lines=="End"){end(matrix,row,col);break;}
        else if(isdigit(lines[0])){
            stringstream(lines) >> row >> col;
            matrix = new int*[row+4];
            for (int i=0;i<row+4;i++){
                matrix[i]=new int [col];
            }
            for(int i=0;i<row+4;i++){
                for(int j=0;j<col;j++){
                    matrix[i][j]=0;}
            }
        }
        else{
            stringstream(lines) >> block >> base;
            check(matrix, block, base, row, k);
            //deleterow();
        }
    }



    return 0;
}