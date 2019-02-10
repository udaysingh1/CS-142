//implementing stack using queue



#include <iostream>

#include "2queueLL.cpp"//name of file



using namespace std;



class StackfqLL{

    public:

    Node * top;

//forming a object of queue in class QueueLL

    QueueLL q1,q2;

    StackfqLL(){

        top = NULL;

    }

//..............................................................

   // insert on top

    void push(int value){



        // void insertAt(int value){

        q1.enqueue(value);



        //top = new_head;

      top = q1.end->next  ;

    }

//........................................................

    // delete at  the top

    int pop(){



//deleting and storing 

		while(q1.size()!=1){

  	  q2.enqueue(q1.dequeue());

	}

	//delete last which left

	q1.dequeue();

	//restore again

	while(q2.size()!=0){

	q1.enqueue(q2.dequeue());

}

	

    }



//................................................................................

//just showing the list is empty or not

    bool isEmpty(){

        if(top == NULL) return true;

        return false;

    }

//......................................................

    int size(){ 

cout<<"the size of stack is "<<q1.size()<<endl;

    

    }

//..............................................

    void topDisplay(){

//displaying first element

   cout<<top->data<<endl;

    }

//.................................................................

    void display(){

        q1.display();

    }

};











int main(){

    StackfqLL sq1;



cout<<"entering five numbers in stack"<<endl;

    for(int i = 0; i < 5 ; i++)

        sq1.push(i);

	sq1.display();



	cout<<"deleting top element"<<endl;

	sq1.pop();

    sq1.display();



   if(sq1.isEmpty()==true)

   cout<<"stack is empty"<<endl;

    else cout<<"stack is not empty"<<endl;

   

    sq1.size();

   cout<<"top of the stack is"<<endl;

    sq1.topDisplay();

    sq1.display();

}
