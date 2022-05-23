// 
// using namespace std;
// int main(){

//     return 0;
// }

#include <bits/stdc++.h> 
using namespace std;  
int main()  
{  
map<int, string> Students;  
 
Students[1] = "Vibhu";  
Students[2] = "Yash";  
Students[3] = "Abhi";  
Students[4] = "Neelam";  
cout << "Students[2]=" << Students[2] << "\n\n";  
cout << "Map size: " << Students.size() << endl;  
cout << "\nOrder:" << endl;  
for( auto i=Students.begin(); i!=Students.end(); i++)  
{  
cout << i->first << ": " << i->second << endl;  
}  
cout << "\nReverse Order:" << endl;  
for( map<int,string>::reverse_iterator i=Students.rbegin(); i!=Students.rend(); i++)  
{  
cout << (*i).first << ": " << (*i).second << endl;  
}  
}