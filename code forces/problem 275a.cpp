#include <bits/stdc++.h>
using namespace std;

int light(int n){		//function to convert 1 to 0 and 0 to 1
	if(n==0){
    	return 1;
	}
	return 0;
}

int main() {
    
    int ar[3][3], br[3][3];		//ar input array and br output array
    for(int i=0; i<3; i++){
    	for(int j=0; j<3; j++){
        	cin>>ar[i][j];
        	if(ar[i][j]%2 == 0){		//even input will not change light on/off status
            	ar[i][j]=0;
        	}
        	else{		//odd input will change light on/off status
            	ar[i][j]=1;
        	}
        	br[i][j]=1;		//answer array (all lights on initially)
    	}
    }
    
    for(int i=0; i<3; i++){
    	for(int j=0; j<3; j++){
        	if(ar[i][j]==1){		//for odd input light status will change
            	br[i][j] = light(br[i][j]);		//changing light status
            	if(i>0){
                	br[i-1][j] = light(br[i-1][j]);		//changing light status
            	}
            	if(j>0){
                	br[i][j-1] = light(br[i][j-1]);		//changing light status
            	}
            	if(i<2){
                	br[i+1][j] = light(br[i+1][j]);		//changing light status
            	}
            	if(j<2){
                	br[i][j+1] = light(br[i][j+1]);		//changing light status
            	}
           	 
           	 
        	}
    	}
   	 
    }
    
    
    for(int i=0; i<3; i++){
    	for(int j=0; j<3; j++){
   	 
        	cout<<br[i][j];		//output
    	}
    	cout<<endl;
    }
    
    
    return 0;
}