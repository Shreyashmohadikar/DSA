#include "bits/stdc++.h"

using namespace std;

int main(){
   map<string, float> bakery;
   bakery["Choclatecake"] = 585.5;
   bakery["Strawberrycake"] = 579;
   bakery["Mangocake"] = 345.6;
   bakery["Vanillacake"] = 650;
   bakery["MixedFruitcake"] = 539.9;

    map <string,float> :: iterator iter;

   cout<<"keys"<<"  &  "<<"values"<<endl;

   for (iter = bakery.begin(); iter != bakery.end(); iter++)
   {
     cout<<(*iter).first<<"    "<<(*iter).second<<"\n";
   }
    return 0;
}