#include <iostream>
#include <vector>

using namespace std;

int main () {

    int m;
    cout << "enter rows" << endl;
    cin >> m;

    int n;
    cout << "enter column" << endl;
    cin >> n;

    vector < vector<int> > matrix(m,vector <int>(n));

    cout << "enter input of matrix" << endl;

    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            cin >> matrix[i][j];
        }
    }

    vector<int> rows(m,false);
    vector<int> colm(n,false);

    for(int i=0;i<m;i++) {
            for(int j=0;j<n;j++) {
                if(matrix[i][j]==0) {
                    rows[i]=true;
                    colm[j]=true;
                }
            }
        }

        for(int i=0;i<m;i++) {
            if(rows[i]==true) {
                for(int j=0;j<n;j++) {
                    matrix[i][j]=0;
                }
            }
        }

        for(int j=0;j<n;j++) {
            if(colm[j]==true) {
                for(int i=0;i<m;i++) {
                    matrix[i][j]=0;
                }
            }
        }



   
    

cout << "output of the matrix" << endl;

for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    



    return 0;
}