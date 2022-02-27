#include<iostream>


using namespace std;

Add(a,b)
{
	
return a+b;

}
int main(){


    int a,b;
    cin>>a>>b;

    int choice;
    cin>>choice;

    if(choice==1){
        add(a,b);
    }
    else if(choice==2){
        sub(a,b);
    }
    else if(choice==3){
        div(a,b);
    }
    else{
        mul(a,b);
    }

}
