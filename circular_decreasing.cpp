#include<iostream> // for std, cin ,cout

using namespace std;


int main(){



   int n = 8;
    for (int i = 1; i < 2*n; ++i)
    {
        int k = n,r=i;

        if(i>n){
            r = 2*n-i;
        }

       
        for (int j = 1; j < 2*n ; ++j)
        {
           if (i<=n)
           {
            if (j<=n)
            {

              
                if(r-->0)
                k--;
               
                cout << k+1;

            }else{

              if (j>2*n-i)
              {
                  k++;
              }
              
               cout <<k+1;
           }
            }else{

                  if (j<=n)
            {

              
                
                if(r-->0)
                k--;
               
                cout << k+1;

            }else{

              if (j>n-r)
              {
                  k++;
              }
              
               cout <<k+1;
           }

            }


        }
        cout << "\n";
    }
    
   



/*
4444444
4333334
4322234
4321234
4322234
4333334
4444444


*/

  return 0;
}

/*
made by me but last wala else hitntry h
output:
888888888888888
877777777777778
876666666666678
876555555555678
876544444445678
876543333345678
876543222345678
876543212345678
876543222345678
876543333345678
876544444445678
876555555555678
876666666666678
877777777777778
888888888888888
[Finished in 335ms]

*/
