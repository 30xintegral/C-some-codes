#include <iostream>
using namespace std;
int stack[100], n = 100, top = -1;
void push(int val) {
   if(top >= n-1)
      cout<<"Stack limitini kecdi"<<endl;
   else {
      top++;
      stack[top] = val;
   }
}
void pop() {
   if(top <= -1)
      cout<<"Stack limitinden asagidir"<<endl;
   else {
      cout<<"cixarilan element "<< stack[top] <<endl;
      top--;
   }
}
void display() {
   if(top>= 0) {
      cout<<"Stack elementleri :";
      for(int i = top; i>= 0; i--)
         cout<<stack[i]<<" ";
      cout<<endl;
   } else
      cout<<"Stack bosdur";
}
int main() {
   int ch, val;
   cout<<"1) Push in stack"<<endl;
   cout<<"2) Pop from stack"<<endl;
   cout<<"3) Display stack"<<endl;
   cout<<"4) Exit"<<endl;
   do {
      cout<<"secimi et "<<endl;
      cin>>ch;
      switch(ch) {
         case 1: {
            cout<<"coxarilan elementin deyerini daxil et"<<endl;
            cin>>val;
            push(val);
            break;
         }
         case 2: {
            pop();
            break;
         }
         case 3: {
            display();
            break;
         }
         case 4: {
            cout<<"Exit"<<endl;
            break;
         }
         default: {
            cout<<"sehv secim"<<endl;
         }
      }
   }while(ch != 4);
   return 0;
