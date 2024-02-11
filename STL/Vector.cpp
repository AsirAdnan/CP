//Contructors:
vector<int> first;                                // empty vector of ints
vector<int> second (4,100);                       // four ints with value 100
vector<int> third (second.begin(),second.end());  // iterating through second
vector<int> fourth (third);                       // a copy of third

//Insertion:
v.push_back(5); //O(1)

//Access:
v.front() //O(1) returns the first element
v.back() //O(1) returns the last element
for (auto it = v.begin(); it != v.end(); it++) cout << ' ' << *it;
for (int i=0;i<v.size();i++) cout<<v[i]
for (auto it = myvector.rbegin(); it!= myvector.rend(); rit++) cout << ' ' << *it;

//Size:
myvector.resize(5); //current elements thik rekhe size 5 kore dibe
myvector.resize(8,100); //jodi size bare, new elements gula 100 hobe
v.empty(); //returns true if the size is 0 //declared with a size er khetre false return korbe
v.size(); //returns the first element

//Deletion:
v.pop_back(); //O(1) //deletes last element
v.erase(v.begin()+5); //O(n) //deletes 6th element
v.clear(); //O(n) //deletes the vector even makes size to 0

//Sorting
sort(v.begin(),v.end()); //ascending order
sort(v.rbegin(),v.rend()); //descending order
