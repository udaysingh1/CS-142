//Queues using array (Name for class: QueueLL) (enqueue, dequeue, size, isEmpty, top)



#include <iostream>

using namespace std;





//define arr

int arr[50];





    int front;

    int  end;

class Queuearr{



public:



//constructor



    Queuearr(){//initialy both -1 before arr start

        front= -1;

        end=-1;

    }

//...............................................

//inserting

	void enqueue(int value){

	

   if(front==-1){



  	arr[++end]=value;

	front=end;



}



else 	arr[++end]=value;





}

//...............................................

//deleting at front......delete last element

   int dequeue(){



   if (end==front){

	front=-1;  

	end=-1;}



     else front++;//it is going upward with adding 1 from -1



}

//...................................................................

//just showing the list is empty or not

    bool isEmpty(){

        if(end== -1) return true;

        return false;

    }

//......................................................

//size

    int size1(){

     int p;

	 for(int i=front;i<=end;i++){

	

              p=i  ; }

	return p;	

    }

//..............................................

    int endDisplay(){

   cout<< arr[end]<<endl;

    }

//.................................................................

    void display(){

for(int i=end;i>=front;i--){//print till front not till -1 



//its queue not stack

cout<<i<<endl;    





    }

}

   

};







int main(){

    Queuearr qa1;

    for(int i = 0; i < 6; i++)

        qa1.enqueue(i);

     qa1.display();

   cout<<"deleting front element ..last one of linked list"<<endl;



    qa1.dequeue();

	

    qa1.display();



    if(qa1.isEmpty()==true)

   cout<<"queue is empty"<<endl;

    else cout<<"queue is not empty"<<endl;

   

   cout<<"the size of queue is "<<  qa1.size1()<<endl;



   cout<<"end of the queue is"<<endl;

    qa1.endDisplay();

 

}
