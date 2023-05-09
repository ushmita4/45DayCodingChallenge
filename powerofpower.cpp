#include <bits/stdc++.h> 
int powermod(int x,int y,int m){
    int p=1;
    x=x%m;
    while(y>0){
        if(y%2==1)
        p=(p*1l*x)%m;
        y=y/2;
        x=(x*1l*x)%m;
    }
    return p;

}
int powerOfPower(int A, int B, int C, int M) 
{
    // Write your code here.
    int result1,result2;
    result1=powermod(B,C,M-1);
    result2=powermod(A,result1,M);
    return result2;
}
