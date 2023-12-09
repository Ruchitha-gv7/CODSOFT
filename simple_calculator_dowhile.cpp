//simple calculator in c++

#include <iostream>
using namespace std;

int main()
{
    char choice2;

	do{
	    float num1 , num2 , result ;
	    int choice;

	    cout<<"enter first number:"<<endl;
	    cin>>num1;
	
	    cout<<"eneter second number:"<<endl;
	    cin>>num2;
	
	    cout<<"enter your choice:"<<endl;
	    cout<<"1:addition 2:substraction 3:multiplication 4:divisition"<<endl;
	    cin>>choice;
	
	    switch(choice){
		
		    case 1:
		        result = num1 + num2;
		        cout<<"the addition of "<<num1 <<" and " <<num2 <<" is "<<result;		
		        break;
		    case 2:
		        result = num1 - num2;
		        cout<<"the subtraction of "<<num1 <<" and " <<num2 <<" is "<<result;	
		        break;
		    case 3:
		        result = num1 * num2;
		        cout<<"the multiplication of "<<num1 <<" and " <<num2 <<" is "<<result;	
		        break;
		    case 4:
		        if(num2 != 0){
		            result = num1 / num2;
		            cout<<"the division of "<<num1 <<" and " <<num2 <<" is "<<result;	
		        }
		        else{
		            cout<<"devision by 0 is not possible.";
		        }  
		        break;
		    default:
		        cout<<"you entered a wrong choice.";
		        break;
            
        }

        cout<<"\n do you want to perform another operation? (y/n)"<<endl;
        cin>> choice2;

    } while (choice2 == 'y' or choice2 == 'Y');

    cout<<"calculator program ended."<<endl;

	return 0;
}