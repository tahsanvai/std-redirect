#include<bits/stdc++.h>
#include<iostream>
using namespace std ;

int main(){


#ifndef ONLINE_JUDGE
	freopen("/home/as/Desktop/c++/uva/inpout/inp.txt","r",stdin);
	freopen("/home/as/Desktop/c++/uva/inpout/out.txt","w",stdout);
#endif




int e,f,c ,t ,a,b, i , sum  ;

cin >> t ;


for(i = 0 ; i<t ; i++){


cin >> e >> f >> c ;

sum = 0 ;
a = e+f ;

b = c ;

while(a>=b){

cout << "before operation "<< sum  << "  " << a << endl;


sum = sum + (a/b);
a = (a/b) + (a%b) ;


cout << "after operation "<< sum  << "  " << a << endl;


}
//cout << sum ;




}


}
