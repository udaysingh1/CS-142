//Stacks using array (Name for class: Stackarr) (push, pop, size, isEmpty, top)





#include <iostream>





using namespace std;





//defining array

int arr[50];



class Stackarr{

    public:

//top is an intger which give top element of array start from zero 

    int top;



   //constructor

    Stackarr(){//initialy top at -1 before zero

        top = -1;

    }

//..............................................................

   // insert on top

    void push(int value){

	

	arr[++top]=value;

       

    }

//........................................................

    // delete at  the top

    int pop(){



top=top-1;

    }



//................................................................................

//just showing the list is empty or not

    bool isEmpty(){

        if(top == -1) return true;

        return false;

    }

//......................................................

    int size(){ 

    return (top+1);

    }

//..............................................

    void topDisplay(){

//displaying first element

   cout<<arr[top]<<endl;

    }

//.................................................................

    void display(){

	for(int i=top;i>-1;i--){

	cout<<arr[i]<<endl;

	

    }

}

};









int main(){



    Stackarr sl1;

//sl1.push(5);



cout<<"entering five numbers in stack"<<endl;

    for(int i = 0; i < 6 ; i++)

        sl1.push(i);

	sl1.display();





	cout<<"deleting first element"<<endl;

	sl1.pop();

       sl1.display();



        if(sl1.isEmpty()==true)

       cout<<"stack is empty"<<endl;

        else cout<<"stack is not empty"<<endl;

   

     cout<<"the elements in stack are"<<sl1.size()<<endl;

 	



        cout<<"top of the stack is"<<endl;

      sl1.topDisplay();

  

    return 0;



}
