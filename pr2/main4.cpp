#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
using namespace std;
int main()
{int n,b,c=0,p=0,l=0;
cout << "Количество чисел: ";
cin >>n;
cout << "Введите ваши числа" << endl;
vector <int> vec(n);
for (int i=0; i<n; i++){
        cin>>b;
        if (b<2){l++;}
        vec[i]=b;
}
for (int i=0; i<n; i++){
        if (vec[0]<vec[i]){vec[0]=vec[i];}
}
cout << "Наибольший общий делитель: "<< vec[0]<< endl;
if (l==1) cout << 1;
else {
c = vec[0];
    while (c>1 && n!=p){
        p=0;
      for (int i=0; i<n; i++){
       if (vec[i]%c==0){p++ ;}
      }c--;

       }
cout<<c+1; }

return 0;
}
