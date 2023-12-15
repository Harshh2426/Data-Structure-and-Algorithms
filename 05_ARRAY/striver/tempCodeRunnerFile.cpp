ctor<vector<int>> pascalTriangle(int n)
// {
//     vector<vector<int>>vect(n,vector<int>(n,0));
//     for(int i=0;i<n;i++){
//         vect[i].resize(i+1);
//         vect[i][0]=1;
//         vect[i][i]=1;
//         for(int j=1;j<=i;j++){
//             vect[i][j]=vect[i-1][j]+vect[i-1][j-1];
//         }
//     }
//     return vect;
// }