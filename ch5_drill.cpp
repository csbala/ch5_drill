#include "std_lib_facilities.h"

int main()
try{

//1. 
//Cout -> cout
cout << "1. Success!\n";

//2. 
// missing " in the end
cout << "2. Success!\n";

//3. 
//missing " before \n";
cout << "3. Success" << "!\n";

//4. 
//succes -> Succes -> Succes! ->"Succes!", '\n' -> "\n"
cout << "4. Success!" << "\n";

//5 
//bad input in string, string ->int
int res = 7; 
vector<int> v(10); 
v[5] = res; 
cout << "5. Success!\n";

//6. 
// v(...) -> v[...]
// v previously declared so, i changed it to v2
vector<int> v2(10); 
v[5] = 7; 
if (v[5]!=7) 
	cout << "6. Success!\n";
 
//7. 
//cond not declared
bool cond=true;
if (cond) 
	cout << "7. Success!\n"; 
else 
	cout << "Fail!\n";

//8.
// c -> !c
bool c_8 = false; 
if (!c_8) 
	cout << "8. Success!\n"; 
else 
	cout << "Fail!\n";

//9.
// boo -> bool, + fool<s = false --> !c = success
string s_9 = "ape"; 
bool c_9 = "fool" < s_9; 
if (!c_9) 
	cout << "9. Success!\n";


//10.
// == --> !=
string s_10 = "ape"; 
if (s_10 != "fool") 
	cout << "10. Success!\n";

//11.
// cout < -> cout <<
//== --> != 
string s_11 = "ape"; 
if (s_11 != "fool") 
	cout << "11. Success!\n";

//12.
// cout < -> 
//+ --> != 
string s_12 = "ape"; 
if (s_12 !="fool") 
	cout << "12. Success!\n";

//13.
//0<v.size(); -> i<v.size();
// ; is deleted
vector<char> v_13(5); 
for (int i=0; i<v_13.size(); ++i) 
	cout << "13. Success!\n";

//14.
// ; is deleted
//i<=v_14.size(); --> i<v_14.size();
vector<char> v_14(5); 
for (int i=0; i<=v_14.size(); ++i)
	cout << "14. Success!\n";

//15.
//s_15 is not a block/(tömb)
string s_15 = "15. Success!\n"; 
for (int i=0; i<6; ++i) 
	cout << s_15;

//16.
//then useless / undeclared
if (true) 
	cout << "16. Success!\n"; 
else 
	cout << "Fail!\n";

//17.
// x -> 'x'
// (c==2000) ->  (x==2000) 
int x = 2000; 
char c = 'x'; 
if (x==2000) 
	cout << "17. Success!\n";

//18.
//10 --> s_18.length()
string s_18 = "18. Success!\n"; 
for (int i=0; i<s_18.length(); ++i) 
	cout << s_18[i];

//19.
// ; is deleted
// <int> missed in vector
vector<int> v_19(5); 
for (int i=0; i<=v_19.size(); ++i) 
	cout << "19. Success!\n";

//20.
// ++j -> ++i
int i=0; 
int j = 9; 
while (i<10) 
	++i; 
if (j<i) cout << "20. Success!\n";


//21.
//int -> double
//x_21 not equal d
double x_21 = 2; 
double d=5/(x_21-2); 
if (d!=2*x+0.5) 
	cout << "21. Success!\n";

//22.
// string is not a vector -> without <char> neded
string s_22 = "22. Success!\n"; 
for (int i=0; i<=s_22.length(); ++i) 
	cout << s_22[i];

//23.
//there was not declaration for j
// ++j -> i++
int i_23=0; 
int j_23=0;
while (i_23<10) 
	++i_23; 
if (j_23<i_23) cout << "23 .Success!\n";

//24
// in if you need double = for to wo
//also you need to change == to != because d not equal 2*x+0.5
double x_24 = 4; 
double d_24 = 5/(x_24-2); 
if (d!=2*x+0.5)
	cout << "24. Success!\n";

//25. not cin 
	cout << "25. Success!\n";





	return 0;
}
catch ( exception & e) {
	cerr << "error: " << e.what() << '\n';
	return 1;
}

catch (...) {
	cerr << "Oops: unknown exception!\n";
	return 2;
}
