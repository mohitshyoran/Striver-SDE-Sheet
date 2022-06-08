void setZeroes(vector<vector<int>>& A) {
        int m = A.size();
        int n = A[0].size();
        bool isRowZero = false;
        bool isColZero = false;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(i == 0 && A[i][j] == 0){
                    isRowZero = true;
                }
                if(j == 0 && A[i][j] == 0){
                    isColZero = true;
                }
                if(A[i][j] == 0){
                    A[i][0] = A[0][j] = 0;
                }
            }
        }
        for(int i = 1; i < m; i++){
            for(int j = 1; j < n; j++){
                if(A[i][0] == 0 || A[0][j] == 0){
                    A[i][j] = 0;
                }
            }
        }
        if(isRowZero){
            for(int i = 0; i < n; i++){
                A[0][i] = 0;
            }
        }
        if(isColZero){
            for(int i = 0; i < m; i++){
                A[i][0] = 0;
            }
        }
    }
