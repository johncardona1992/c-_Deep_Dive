# include<iostream>
# include<vector>
# include<string>
# include<map>
using namespace std;

int main()
{
vector<int> v={1,2,3,4,5,6};
v.push_back(20);
v.push_back(30);

vector<int>::iterator itr;
/* iterator looping method */
cout<<"iterator"<<endl;
for(itr=v.begin();itr!=v.end();itr++){
    cout<<*itr<<endl;
    cout<<++*itr<<endl;
}


/* for each method */
cout<<"for each"<<endl;
for(int x:v){
    cout<<x<<endl;
}

/* hash tables */
map<int, string> m;

m.insert(pair<int,string>(101,"john"));
m.insert(pair<int,string>(201,"juan"));
m.insert(pair<int,string>(301,"gamin"));    

map<int,string>::iterator itr2;
for(itr2=m.begin();itr2!=m.end();itr2++){
    cout<<itr2->first<<" "<<itr2->second<<endl;
}
/* find and element by key */
map<int,string>::iterator itr3;
itr3 = m.find(101);
cout<<"key, value:"<<endl;
cout<<itr3->first<<" "<<itr3->second<<endl;

return 0;
}
