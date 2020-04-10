#include <iostream>
#include<cmath>
using namespace std;
int main(){
    int m,n,i,k=0,j;
    cin>>n>>m;
    int d[n];
    int c[m];
    for(j=0;j<m;j++){
        cin>>c[j];
    }
    for(i=0;i<n;i++){
int min=abs(i-c[0]);
for(j=0;j<m;j++){
    int x=abs(i-c[j]);
    if(x<min){
        min=x;
    }
}d[k]=min;
k++;

    }
    int max=d[0];
    for(i=0;i<k;i++){
        if(d[i]>max){
            max=d[i];
        }
    }
    cout<<max;
}

