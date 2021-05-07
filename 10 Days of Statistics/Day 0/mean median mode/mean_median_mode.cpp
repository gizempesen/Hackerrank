#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


float Mean(vector<int>X,int N){  //take float mean , vector and N int
 
    float mean=0;  //describe mean 0
   for(auto i =0; i<N; i++){  //numbers until N
        mean=mean+X[i];  //sum 
    }return mean/N;  //divide N
}

float Median(vector<int>X, int N){  //float median , vector and N int
    int mid= (N/2)-1;  //find the mid
    float median=0;  //describe
    sort(X.begin(), X.end());  
    //if n is even
   if(N%2==0){
   median= ( X[mid] + X[mid+1] )/2.0;
   }
   //if n is odd
   else if(N%2!=0)
    median= X[mid];
return median;
}

int Mode(vector<int>X, int N){
    int count=0;
    int freq=0;
    int finalnumber=0;
    int num;
    sort(X.begin(), X.end());
    
    num=X[0];

   for(auto i=0; i<N; i++){
       if(num==X[i])
        { count++;
            if(freq<count)
            {
                finalnumber=X[i];
                freq=count;
            }
        }
        else
        {
            count=0;
            num=X[i];
            count++;
        }
   }

    return finalnumber;
}

int main() {
    vector<int>X;
    int N,data;
    cin>>N;
    for(auto i =0; i<N; i++)
    {
        cin>>data;
        X.push_back(data);
    }
    cout<<fixed<<setprecision(1)<<Mean(X,N)<<endl; 
        //for precision val use setprecision function
    cout<<fixed<<setprecision(1)<<Median(X,N)<<endl;
    cout<<Mode(X,N);
   
    return 0;
}
