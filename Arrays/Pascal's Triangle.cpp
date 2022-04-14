class Solution {
public:
    vector<vector<int>> generate(int n) {
     vector<vector<int>>arr;
     vector<int>temp(1,1);
     arr.push_back(temp);
     for(int i=2;i<=n;i++){
         vector<int>res(i);
         for(int j=0;j<i;j++){
             if(j==0){
                 res[j]=arr[i-2][j];
             }
             else if(j==i-1){
                res[j]=arr[i-2][j-1]; 
             }
             else{
                 res[j]=arr[i-2][j]+arr[i-2][j-1];
             }
         }
         arr.push_back(res);
     }
        return arr;
    }
};
