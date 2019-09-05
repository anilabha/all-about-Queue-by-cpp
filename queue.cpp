/*
$$$  All about Queue


.......$Created By Anilabha Baral$..............

*/

#include<iostream>
using namespace std;
class queue{
int first;
int  last;
int array[100];
public:

queue(){
    first=-1;
    last=-1;


}
void enqueue(int val){//function for insert element into queue
    if (first  ==-1)
        first++;

array[++last]=val;

}
void printval(){//function for print all  the  element in queue
    if (first !=-1){
        for (int i=first;i<=last;i++){
            cout<<array[i]<<endl;
        }
    }
}
void dqueue()//function for delete element from queue
{
    if (first==-1){
        cout<<"queue id emnpty";
        return;
    }
    if (first==last){
        first=-1;
        last=-1;
        return;
    }
    first++;
}




};


int main(){

queue que;
que.enqueue(10);
que.enqueue(12);

que.enqueue(14);

que.enqueue(16);

que.enqueue(18);
cout<<"all the element in queue"<<endl;

que.printval();
que.dqueue();
cout<<"after delete one element  from stack\n";
que.printval();



    return 0;
}