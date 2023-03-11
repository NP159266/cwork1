#include "res.h"
int reverse(int s){
	int f=s%10;
	s=s/10;
	int i=0;
	while (s!=0){
        	f=f*10+s%10;
        	s=s/10;
        	i++;
    	}
    	return f;
}

string palcheck(int a){
    	int s=reverse(a);
    	int c=0;
    	while (a!=0){
        	if (a%10!=s%10){
            		c=c+1;
       	 	}
        	a=a/10;
        	s=s/10;
    	}
    	if (c==0){
        	return "Палиндром";
    	}
    	if (c!=0){
        	return "Не палиндром";
    	}
}
