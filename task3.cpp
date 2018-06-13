#include <iostream>
using namespace std;
int test (int a){
 for(int i = 2; i < (a/2+1); ++i){
   int tmp = a%i;
   if(tmp == 0) return 1;
   if(i == a/2) return 0;
}

}     
 
int main (){
 int x;
 cin>>x;
 if(x == 2 || x ==3)
    cout<<0;
 else if (x>1)
    cout<<test(x);
 else
    cout<<"enter digit which is > 1";
 }   
    
    
 
