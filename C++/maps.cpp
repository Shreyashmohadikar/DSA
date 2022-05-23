// 
// using namespace std;
// int main(){

//     return 0;
// }

// #include <bits/stdc++.h> 
// using namespace std;  
// int main()  
// {  
// map<int, string> Students;  
 
// Students[1] = "Vibhu";  
// Students[2] = "Yash";  
// Students[3] = "Abhi";  
// Students[4] = "Neelam";  
// cout << "Students[2]=" << Students[2] << "\n\n";  
// cout << "Map size: " << Students.size() << endl;  
// cout << "\nOrder:" << endl;  
// for( auto i=Students.begin(); i!=Students.end(); i++)  
// {  
// cout << i->first << ": " << i->second << endl;  
// }  
// cout << "\nReverse Order:" << endl;  
// for( map<int,string>::reverse_iterator i=Students.rbegin(); i!=Students.rend(); i++)  
// {  
// cout << (*i).first << ": " << (*i).second << endl;  
// }  
// }


#include <iostream>
#include <string>
#include <map> 
using namespace std;
int main() {
	map<int, string> Students;
	Students.insert(pair<int, string>(200, "Alice"));
	Students.insert(pair<int, string>(201, "John"));
	map<int, string>::iterator it = Students.find(201);
    // auto it = Students.find(201);
	if (it != Students.end()) {
		cout << endl << "Key 201 has the value: => "<< 
        Students.find(201)->second << '\n';
	}
    // cout<<Students.find(201)->second;
}