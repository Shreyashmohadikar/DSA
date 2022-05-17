#include<bits/stdc++.h>
using namespace std;
int main ()
{
   long long int bob,ross,brush,canvas;
   long long int a[100000];
   cin>>canvas; 
   for(bob = 0; bob<canvas; bob++) {
      cin>>a[bob];
   }
for(bob = 0; bob<canvas; bob++) {
   for(ross = 0; ross<canvas-1; ross++)
   {
      if(a[ross+1] < a[ross]) {
         brush = a[ross+1];
         a[ross+1] = a[ross];
         a[ross] = brush;
      }
   }
}
for(bob = 0; bob<canvas; bob++) {
   cout <<a[bob]<<" ";
}
return 0;
}