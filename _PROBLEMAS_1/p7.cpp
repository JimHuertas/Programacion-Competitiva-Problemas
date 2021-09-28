#include <iostream>
#include <vector>
using namespace std;


int main(){
    while(true){
        int casos;
        cin>>casos;
        if(casos == 0)
            break;
        
        int X,Y;
        cin>>X>>Y;
        
        int c1, c2;
        for(int i=0; i<casos; i++){
            cin>>c1>>c2;
            if(c1==X || c2==Y)
                cout<<"divisa"<<endl;
            if(c1>X && c2>Y)
                cout<<"NE"<<endl;
            if(c1<X && c2>Y)
                cout<<"NO"<<endl;
            if(c1<X && c2<Y)
                cout<<"SO"<<endl;
            if(c1>X && c2<Y)
                cout<<"SE"<<endl;    
        }
    }

    return 0;
}