#include <cmath>
#include <iostream>
#include <exception>
#include <stdexcept>
using namespace std;

//Write your code here
class Calculator{
    //int n, p;
    public:
    
    int power(int a, int b){
        if(b == 0)return 1;
        if(a<0||b<0)throw runtime_error("n and p should be non-negative");
        
        if(a == 0 && b == 0)throw runtime_error ("n and p should not be zero");
        else return power(a, b-1)*a;
        
    }
};

int main()
{
    Calculator myCalculator=Calculator();
    int T,n,p;
    cin>>T;
    while(T-->0){
      if(scanf("%d %d",&n,&p)==2){
         try{
               int ans=myCalculator.power(n,p);
               cout<<ans<<endl; 
         }
         catch(exception& e){
             cout<<e.what()<<endl;
         }
      }
    }
    
}