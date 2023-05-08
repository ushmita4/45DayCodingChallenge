#include <bits/stdc++.h> 
int findRowK(vector< vector< int> > &mat) {
int n=mat.size();
for(int k=0;k<n;k++){
bool allzero=true;
for(int i=0;i<n;i++){
if(k!=i){
if (mat[k][i] != 0) {
allzero = false;
break;
}
}
}
if(allzero==false){
continue;
}
bool allone=true;
for(int j=0;j<n;j++){

         if(k!=j){

           if (mat[j][k] != 1) {

             allone = false;

             break;

           }

         }

     }

     if(allone==false){

         continue;

     }

     return k;

 }

 

 return -1;

 

}
