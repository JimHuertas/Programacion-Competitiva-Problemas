#include <iostream>
#include <vector>
using namespace std;

int Horiz_Max(vector<int>ListPtr){
	int sum=1,max=0,j;
	for(j=0;j<=380;j+=20){
		for(int i=j;i<17+j;i++){
			for(int k=i;k<i+4;k++)
				sum*=ListPtr[k];
			if(sum>max)max=sum;
		}
		sum=1;
	}
	return max;
}
int Vert_Max(vector<int>ListPtr){
	int sum=1,max=0;
	
	for(int k=0;k<=19;k++){
		for(int i=k;i<340+k;i+=20){
			for(int j=i;j<=60+i;j+=20)
				sum*=ListPtr[j];
			if(sum>max)max=sum;
		}		
		sum=1;
	}
	return max;
}
int Diag_Max(vector<int>ListPtr){
	int sum=1,max=0;
	
	for(int k=0;k<=320;k+=20){          //fowards facing diaganol
		for(int j=k;j<=16+k;j++){
			for(int i=j;i<=63+j;i+=21){
				sum*=ListPtr[i];
			}
			if(sum>max)max=sum;sum=1;
		}
	}
	sum=1;
	for(int i=3;i<=339;i+=20){            //backwards facing diaganol
		for(int k=i;k<=16+i;k++){
			for(int j=k;j<=57+k;j+=19){
				sum*=ListPtr[j];
			}
			if(sum>max)max=sum;sum=1;
		}
	}
	return max;
}

int main(){
    long int result;
    int n=20;
    int num;
    vector<int> vec;

    while(n--){
        int m=20;
        while(m--){
            cin>>num;
            vec.push_back(num);
        }
    }
    int max=0;
    int x=Horiz_Max(vec);if(x>max)max=x;
	x=Vert_Max(vec);if(x>max)max=x;
	x=Diag_Max(vec);if(x>max)max=x;

    cout << max << endl;
    return 0;
}