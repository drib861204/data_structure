#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

//void end();//TODO
//void check(string, int);//TODO
//int k;
void matrixinit(int r,int c,int **m){
    m = new int*[r];
    for (int i=0;i<r;i++){
        m[i]=new int [c];
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            m[i][j]=0;}
    }
};



int main(){
    ifstream fin;
    string fname;
    string lines;
    string block;
    int row, col, base;
    int **matrix;

    getline(cin, fname);
    fin.open(fname);
    while(fin){
        getline(fin,lines);
        //if(lines=="End"){}//TODO end();
         if(isdigit(lines[0])){
            stringstream(lines) >> row >> col;
             matrix = new int*[row];
    for (int i=0;i<row;i++){
        matrix[i]=new int [col];
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            matrix[i][j]=0;}
    }
        }
        //else{
        //    stringstream(lines) >> block >> base;
            //check(block, row);
        //}
    }
for(int i=0;i<row;i++){
    for(int j=0;j<col;j++)
        cout << matrix[i][j];
    cout << endl;}

    return 0;
}