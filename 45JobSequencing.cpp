#include <bits/stdc++.h> 

 bool comparator(vector<int>j1,vector<int>j2) {
    return j1[1]>j2[1] || (j1[1]==j2[1] && j1[0]>=j2[0]);
}


int jobScheduling(vector<vector<int>> &jobs)
{
    // Write your code here

     sort(jobs.begin() ,  jobs.end(), comparator );
       int maxi = -1;
      for (int i = 0; i < jobs.size(); i++) {
         maxi = max(maxi, jobs[i][0]);
      }


    vector<int>res(maxi+1,-1); 
    
    for(int i=0 ; i< jobs.size() ;i++)
    {

       int d = jobs[i][0];
        for(int j=d;j>0;j--) {
            if(res[j]==-1) {
                res[j]=jobs[i][1];
                break;
            }
        }

    }


    int sum=0;
    for(int i=1;i<=maxi;i++) {
        if(res[i]!=-1) {
            sum+=res[i];
        }
    }


return sum;

}
