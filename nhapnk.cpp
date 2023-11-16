#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n, k, t;
    cin>> n >> k;
    int a[n];
    for(int i=0; i < n; i++){
        cin>> a[i];
    }   
    switch(k){
        
        case(1):
        for(int i=0; i<n; i++){
            if (a[i] % 2 != 0) t++;
            else if (i == (n-1)){cout<< t <<" "; return 0;}
        }
        break;
       
       
        case(2):
        for(int i=0; i<n; i++){
            
            if (2016 % a[i] == 0) t++;
            if (i == (n-1)){cout<< t; return 0;}
        }
        break;


        case(3):
        for(int i=0; i<n; i++){
            int k = sqrt(a[i]);
            if (k*k == a[i]) t++;}
        cout<< t;
        break;


        case(4):
        for(int i=0; i<n; i++){
            int k=0;
            for(int h=1; h<=sqrt(a[i]); h++){
                if( a[i] % h == 0) k++;}
                if(k == 1 && a[i] !=1 ) t++;
                else continue;}
        cout<< t;
        break;


        case(5):
        for(int i = n-1; i > 0; i--){
            for(int k = 0; k < i; k++){
             if(a[k] > a[k+1])
             {
                 int tmp = a[k];
                 a[k] = a[k+1];
                 a[k+1] = tmp;}
            }
        }
        for(int i=0; i < n; i++){
            cout<< a[i] <<" ";}
        break;
                
    }
    return 0;
}
