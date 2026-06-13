int fun(int ind,int last,vector<vector<int>> &points){
    if(ind==0){
        int maxi=0;
        for(int i=0;i<=2;i++){
            if(last !=i){
                maxi=max(points[ind][i],maxi);
            }
        }

        return maxi;
    }
    int maxi=0;

    for(int i=0;i<3;i++){
        if(i!=last){
            int point=points[ind][i]+fun(ind-1,i,points);

            maxi=max(maxi,point);

        }
    }

    return maxi;
}
int ninjaTraining(int n, vector<vector<int>> &points)

{

    return fun(n-1,3,points);

}