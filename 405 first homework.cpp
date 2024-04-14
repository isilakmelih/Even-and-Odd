#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int i,neven,nodd,c,d,f;
	neven=0;
	nodd=0;
	d=0;
	f=0;
 int xs[18]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,555,558,333};
 for(i=0;i<=17;i++){
 	if(xs[i]%2 == 0){
 		neven++;
		 }
	 else if(xs[i]%2 != 0){
	 		nodd++;
		 }
	 }
	 
 cout<<"number of even numbers="<<neven<<endl;
 cout<<"number of odd numbers="<<nodd<<endl;
 
 int even_xs[neven], odd_xs[nodd];
 
 for(c=0;c<=(17);c++){
     if(xs[c]%2 == 0){
     	even_xs[d]=xs[c];
     	d++;
	 }
	 else{
	 	odd_xs[f]=xs[c];
	 	f++;
	 }}
	 for(c=0;c<=(neven-1);c++){
	 cout<<" "<<even_xs[c];}
	 cout<<" "<<endl;
	 for(c=0;c<=(nodd-1);c++){
	 cout<<" "<<odd_xs[c];} 
	 
 return 0;}
