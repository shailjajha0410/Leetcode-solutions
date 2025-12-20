int diagonalSum(int** mat, int matSize, int* matColSize) {
     
     int sum = 0;

     for (int i = 0; i< matSize ; i++){
        //primary diagnol
        sum+= mat[i][i];

        //secondary pointer
        sum+= mat[i][matSize - 1 - i];
     }

     if (matSize % 2 == 1){
        sum-=mat[matSize/2][matSize/2];
     }
     return sum;
}