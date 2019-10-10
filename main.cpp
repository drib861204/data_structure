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
}

void check(int **m, string block, int b, int r, int &k){
    if(block=="T1"){
        if(r==0 || m[r][b]==1 || m[r-1][b+1]==1 || m[r][b+2]==1 ){
            m[r+1][b]=1; m[r][b+1]=1; m[r+1][b+2]=1; m[r+1][b+1]=1;
            k=r;
        }
        else
            check(m,block,b,r-1,k);
    }
   
    else if(block=="T2"){
        if(r==0 || m[r][b]==1 || m[r-1][b+1]==1 ){
            m[r+1][b]=1; m[r][b+1]=1; m[r+1][b+1]=1; m[r+2][b+1]=1;
            k=r;
        }
        else
            check(m,block,b,r-1,k);
    }

    else if(block=="T3"){
        if(r==0 || m[r-1][b]==1 || m[r-1][b+1]==1 || m[r-1][b+2]==1 ){
            m[r][b]=1; m[r][b+1]=1; m[r][b+2]=1; m[r+1][b+1]=1;
            k=r;
        }
        else
            check(m,block,b,r-1,k);
    }

    else if(block=="T4"){
        if(r==0 || m[r-1][b]==1 || m[r][b+1]==1 ){
            m[r][b]=1; m[r+1][b+1]=1; m[r+1][b]=1; m[r+2][b]=1;
            k=r;
        }
        else
            check(m,block,b,r-1,k);
    }

    else if(block=="L1"){
        if(r==0 || m[r-1][b]==1 || m[r-1][b+1]==1 ){
            m[r][b]=1; m[r][b+1]=1; m[r+1][b]=1; m[r+2][b]=1;
            k=r;
        }
        else
            check(m,block,b,r-1,k);
    }

    else if(block=="L2"){
        if(r==0 || m[r-1][b]==1 || m[r][b+1]==1 || m[r][b+2]==1 ){
            m[r][b]=1; m[r+1][b+1]=1; m[r+1][b+2]=1; m[r+1][b]=1;
            k=r;
        }
        else
            check(m,block,b,r-1,k);
    }

    else if(block=="L3"){
        if(r==0 || m[r+1][b]==1 || m[r-1][b+1]==1 ){
            m[r+2][b]=1; m[r][b+1]=1; m[r+1][b+1]=1; m[r+2][b+1]=1;
            k=r;
        }
        else
            check(m,block,b,r-1,k);
    }

    else if(block=="L4"){
        if(r==0 || m[r-1][b]==1 || m[r-1][b+1]==1 || m[r-1][b+2]==1 ){
            m[r][b]=1; m[r][b+1]=1; m[r][b+1]=1; m[r+1][b+1]=1;
            k=r;
        }
        else
            check(m,block,b,r-1,k);
    }

    else if(block=="J1"){
        if(r==0 || m[r-1][b]==1 || m[r-1][b+1]==1 ){
            m[r][b]=1; m[r][b+1]=1; m[r+1][b+1]=1; m[r+2][b+1]=1;
            k=r;
        }
        else
            check(m,block,b,r-1,k);
    }

    else if(block=="J2"){
        if(r==0 || m[r-1][b]==1 || m[r-1][b+1]==1 || m[r-1][b+2]==1 ){
            m[r][b]=1; m[r][b+1]=1; m[r][b+2]=1; m[r+1][b]=1;
            k=r;
        }
        else
            check(m,block,b,r-1,k);
    }

    else if(block=="J3"){
        if(r==0 || m[r-1][b]==1 || m[r+1][b+1]==1 ){
            m[r][b]=1; m[r+2][b+1]=1; m[r+1][b]=1; m[r+2][b]=1;
            k=r;
        }
        else
            check(m,block,b,r-1,k);
    }

    else if(block=="J4"){
        if(r==0 || m[r][b]==1 || m[r][b+1]==1 || m[r-1][b+2]==1 ){
            m[r+1][b]=1; m[r+1][b+1]=1; m[r][b+2]=1; m[r+1][b+2]=1;
            k=r;
        }
        else
            check(m,block,b,r-1,k);
    }

    else if(block=="S1"){
        if(r==0 || m[r-1][b]==1 || m[r-1][b+1]==1 || m[r][b+2]==1 ){
            m[r][b]=1; m[r][b+1]=1; m[r+1][b+2]=1; m[r+1][b+1]=1;
            k=r;
        }
        else
            check(m,block,b,r-1,k);
    }

    else if(block=="S2"){
        if(r==0 || m[r][b]==1 || m[r-1][b+1]==1 ){
            m[r+1][b]=1; m[r][b+1]=1; m[r+1][b+1]=1; m[r+2][b]=1;
            k=r;
        }
        else
            check(m,block,b,r-1,k);
    }

    else if(block=="Z1"){
        if(r==0 || m[r][b]==1 || m[r-1][b+1]==1 || m[r-1][b+2]==1 ){
            m[r+1][b]=1; m[r][b+1]=1; m[r][b+2]=1; m[r+1][b+1]=1;
            k=r;
        }
        else
            check(m,block,b,r-1,k);
    }

    else if(block=="Z2"){
        if(r==0 || m[r-1][b]==1 || m[r][b+1]==1 ){
            m[r][b]=1; m[r+1][b+1]=1; m[r+1][b]=1; m[r+2][b+1]=1;
            k=r;
        }
        else
            check(m,block,b,r-1,k);
    }

    else if(block=="I1"){
        if(r==0 || m[r-1][b]==1 ){
            m[r][b]=1; m[r+1][b]=1; m[r+2][b]=1; m[r+3][b]=1;
            k=r;
        }
        else
            check(m,block,b,r-1,k);
    }

    else if(block=="I2"){
        if(r==0 || m[r-1][b]==1 || m[r-1][b+1]==1 || m[r-1][b+2]==1 || m[r-1][b+3]==1 ){
            m[r][b]=1; m[r][b+1]=1; m[r][b+2]=1; m[r][b+3]=1;
            k=r;
        }
        else
            check(m,block,b,r-1,k);
    }

    else if(block=="O"){
        if(r==0 || m[r-1][b]==1 || m[r-1][b+1]==1 ){
            m[r][b]=1; m[r][b+1]=1; m[r+1][b]=1; m[r+1][b+1]=1;
            k=r;
        }
        else
            check(m,block,b,r-1,k);
    }
}

void deleterow(int **m, int k, int row, int col){
    bool fullflag=true;
    bool emptyflag=true;
    for(int i=0;i<col;i++){
        if(m[k][i]==0){fullflag=false;}
        else{emptyflag=false;}
    }
    if(emptyflag){}
    else if(fullflag){
        deleterow(m, k+1, row, col);
        for(int r=k;r<=row+2;r++)
            m[r]=m[r+1];
        m[row+3]={0};
    }
    else{deleterow(m, k+1, row, col);}
}

void determine(int **m, int row, int col, bool &exitflag){
    for(int i=0;i<col;i++){
        if(m[row][i]==1)
            exitflag=true;
    }
}

int main(){
    ifstream fin;
    string fname;
    string lines;
    string block;
    int row, col, base, k=0;
    int **matrix;
    bool exitflag=false;

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
            check(matrix, block, base-1, row, k);
            if(k==row){end(matrix,row,col);break;}
            deleterow(matrix, k, row, col);
            determine(matrix, row, col, exitflag);
            if(exitflag){end(matrix,row,col);break;}
        }
    }



    return 0;
}