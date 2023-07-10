#include<bits/stdc++.h>
using namespace std;

class solution{
public:
 void transpose(vector<vector<int> >& matrix, int n) { 
       
        int temp;
        int k=-1;
        for(int i=0;i<n ; i++){
            k++;
            for(int j=k;j<n;j++){
                temp =matrix[i][j];
              matrix[i][j] = matrix[j][i];
              matrix[j][i] = temp;
            }
        }
        
    }
};
int main(){

    int n;
    cin>>n;
    vector<vector<int>> matrix(n,vector<int>(n));

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }

    solution ob;
    ob.transpose(matrix ,n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j];
        }
        cout<<endl;
    }
}