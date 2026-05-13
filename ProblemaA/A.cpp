#include "../lib.h"

int main(){
    int N,M,ti=0, tp=0;
    cin>>N; //N=número de items
    cin>>M; //M=número de personas

    for(int i=0;i<N;i++){
        int x;
        cin>>x;
        ti=ti+x; //Esto es para obtener lo total a pagar por todo
    }
    ti=(((10*ti)+99)/100)+ti;//Esto es para que se le agregue almenos el 10% de propina que se busca dejar
    for(int i=0;i<M;i++){
        int x;
        cin>>x;
        tp=tp+x; //Esto es para obtener lo total que se va a pagar entre todos
    }
    if (ti>tp)
    {
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
    }    
}