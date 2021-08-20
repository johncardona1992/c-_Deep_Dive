# include<iostream>
# include<fstream>
# include <string>
using namespace std;

int main()
{
/* writing a file*/
ofstream ofs("my.txt",ios::trunc);
ofs<<"john"<<endl;
ofs<<"cardona"<<endl;
ofs<<"garcia"<<endl;
ofs.close();

/* Reading a file */
ifstream ifs;
ifs.open("my.txt");
if (ifs.is_open()) cout<<"file is opened"<<endl;

string name;
string lastname;
string lastname2;

ifs>>name>>lastname>>lastname2;
ifs.close();

cout<<name<<endl;
cout<<lastname<<endl;
cout<<lastname2<<endl;

return 0;
}
