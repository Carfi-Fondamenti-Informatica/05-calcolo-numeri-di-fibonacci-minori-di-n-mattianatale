#include <iostream>
using namespace std;

int main() {
    int a=1;
    int b=1;
    int c;
    int n;
    cin>>n;
        for (int i=0; i<n; i++){
            c=a;
            a=b;
            b=a+c;
            if (a<=n){
                cout<< a << endl;
            }
        }
   return 0;
}
