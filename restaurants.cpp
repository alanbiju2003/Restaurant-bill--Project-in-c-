


//welcome to my source code of my restaurant bill project
//so i am basically a bca student learing more and deep about oops and c++
// so i am learning and working more on this project to complete it 
//so there is a request that pls do the following otherwise the running the code will give an error
//So lets Run the code
//so first enter your name 
//then select 1 indian cuisine  because that is only made till now working on rest of the 
//cuisines 
//then from the menu choose dosa means enter 1 ,because in the menu only dose has been 
//successfully updated.
//then it will ask for the quantity ,it your wish to enter any number you want.
//then it will ask for go back or pay the bill. so enter [2] to see the bill
//and end of the project .
//if any errrors or any updation pls alert me.
//thank you


#include <iostream>
#include <stdio.h>
#include<conio.h>
#include <stdlib.h>
#include<ctime>


using namespace std;

//i made a class asking details from the user for entering their name
class Details{
    string name;
    public:

    void getdata(){
        cout <<"Enter your Name Sir :"<<endl;
        cin >>name;
    }

    void display(){
        cout<<"Welcome to FOOD4U.COM Sir" <<endl <<endl;

    }
 
};

//asking the user for which cuisine they want to have
class Choice
{
    int cho;
    public:

    void gedata(){
        cout<<"Which cuisine would you like to eat sir:"<<endl <<endl;
        cout <<"-----------------------"<<endl;
        cout<<"| ENTER YOUR CHOICE :  |\n| 1.INDIAN             |\n| 2.MUGHLAI            |\n| 3.CHINESE            |\n| 4.ITALIAN            |\n| 5.SPANISH            |" <<endl ;
        cout <<"-----------------------"<<endl<<endl;

        cin >>cho;

    }
    void diplay(){
        switch (cho)
        {
        case 1:
            cout<<"You slected INDIAN Sir";
            break;

        case 2:
            cout<<"You selected MUGHLAI Sir";
            break;   
              
                 
        case 3:
            cout<<"You selected CHINESE Sir";
            break; 
        
        case 4:
            cout<<"You selected ITALIAN Sir";
            break; 
        
         case 5:
            cout<<"You selected SPANISH Sir";
            break; 
        
        default:
            break;
        }

    }


};

//next is if the user chooses indian then hw will come in this class and have the indian menu

class Indian{
    int ifood;
    public:

    void inmenu(){
        meind:
    cout<<endl <<endl <<"MENU OF INDIAN CUISINE "<<endl;
    cout <<"\n1.DOSA                 |-->$120  |\n2.IDLI                 |-->$140  |"
    "\n3.CHAAT                |-->$80   |\n4.DAL MAKHANI          |-->$220  |\n5.BARFI                |-->$280  |"
    "\n6.DHOKLA               |-->$220  |\n7.STUFFED PARATHA      |--$170   |\n8.PANI PURI            |-->$90   |"
    "\n9.KORMA                |-->$380  |\n10.KEBAB               |-->$420  |\n11.LITI CHOWKHA        |-->150   |\n12.PAYASAM             |-->$180  |";
    cout <<endl <<endl <<"Your order sir "<<endl;

    cin >>ifood;
    
    

        cout<<endl;
        int qty;
        int goback;
        time_t now = time(0);
        char* date_time = ctime(&now);
        switch (ifood)
        {
        case 1:
            cout<<"----------------------|"<<endl;
            cout<<"DOSA                  |$120"<<endl;
            cout<<"Quantity sir :        |";
            cin>>qty;
            cout<<"----------------------|"<<endl;
            cout<<"Total bill is :       |"<<120*qty<<endl;
            cout<<"----------------------|"<<endl;
            cout<<"WANT TO GO BACK TO \n1.MAIN MENU \n2.PAY THE BILL AND EXIT : ";
            cin>>goback;

            if (goback==1)
            {
                goto meind;
            }
            
            if (goback==2)
            {
                //bill making system for the user

                cout<<endl<<endl;
                cout<<" _______________________________________________"<<endl;
                cout<<"|                                               |"<<endl;
                cout<<"|\t    FOOD4U.COM                          |"<<endl;
                cout<<"|\t    INVOICE BILL                        |"<<endl;
                cout<<"|                                               |" <<endl;
                cout<<"|_______________________________________________|"<<endl;
                cout<<"|        |       |                 |            |  "<<endl;
                cout<<"|ITEM\t | PRICE |\t QUANTITY  |\t TOTAL  |"<<endl;
                cout<<"|DOSA\t | 120   |\t     "<<qty<<"     |\t   "<<120*qty<<"  |"<<endl;
                cout<<"|        |       |                 |            |  "<<endl;
                cout<<"|        |       |                 |            |"<<endl;
                cout<<"|-----------------------------------------------|"<<endl;
                cout<<"|\t    GSTIN NO:-362957907368              |"<<endl;
                cout<<"|            "<<date_time; 
                cout<<"|***********************************************|"<<endl;
                cout<<"|\t        HAPPY EATING                    |"<<endl;
                cout<<"|\t     THANK YOU FOR VISITING             |"<<endl;
                cout<<"|\t         SEE YOU SOON                   |"<<endl;
                cout<<"************************************************";



            }
            


            
          
            
            
            break;

        case 2:
            cout<<"IDLI"<<endl;
            cout<<"Quantity sir :"<<endl;
            cin>>qty;
            cout<<"Total bill is :"<<140*qty;
            break;            
        
        case 3:
            cout<<"CHAAT"<<endl;
            cout<<"Quantity sir :"<<endl;
            cin>>qty;
            cout<<"Total bill is :"<<80*qty;
            break;      
            
        case 4:
            cout<<"DAL MAKHANI"<<endl;
            cout<<"Quantity sir :"<<endl;
            cin>>qty;
            cout<<"Total bill is :"<<220*qty;
            break;

        case 5:
            cout<<"BARFI"<<endl;
            cout<<"Quantity sir :"<<endl;
            cin>>qty;
            cout<<"Total bill is :"<<280*qty;
            break;            
        
        case 6:
            cout<<"DHOKLA"<<endl;
            cout<<"Quantity sir :"<<endl;
            cin>>qty;
            cout<<"Total bill is :"<<220*qty;
            break; 


        case 7:
            cout<<"STUFFED PARATHA"<<endl;
            cout<<"Quantity sir :"<<endl;
            cin>>qty;
            cout<<"Total bill is :"<<170*qty;
            break;            
        
        case 8:
            cout<<"PANI PURI"<<endl;
            cout<<"Quantity sir :"<<endl;
            cin>>qty;
            cout<<"Total bill is :"<<90*qty;
            break;   

        case 9:
            cout<<"KORMA"<<endl;
            cout<<"Quantity sir :"<<endl;
            cin>>qty;
            cout<<"Total bill is :"<<380*qty;
            break; 
            
        case 10:
            cout<<"KEBAB"<<endl;
            cout<<"Quantity sir :"<<endl;
            cin>>qty;
            cout<<"Total bill is :"<<420*qty;
            break;

        case 11:
            cout<<"LITI CHOWKHA"<<endl;
            cout<<"Quantity sir :"<<endl;
            cin>>qty;
            cout<<"Total bill is :"<<150*qty;
            break;            
        
        case 12:
            cout<<"PAYASAM"<<endl;
            cout<<"Quantity sir :"<<endl;
            cin>>qty;
            cout<<"Total bill is :"<<180*qty;
            break; 

        default:
        cout<<"have a nice day";
            break;
        }
        
    }


};


   

int main(){
    

    cout<<"--------------------------"<<endl;
    cout <<"\tFOOD4U.COM"<<endl;
    cout<<"--------------------------"<<endl <<endl <<endl;
    

    Details ob1;
    ob1.getdata();
    ob1.display();


    Choice ob2;
    ob2.gedata();
    ob2.diplay();

    Indian ob3;
    ob3.inmenu();
       

    


getch();
}