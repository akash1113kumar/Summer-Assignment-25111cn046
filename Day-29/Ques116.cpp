// Write a program to Create inventory management system. 

#include<iostream>
#include <string>
using namespace std;

struct Item 
{
    int id;
    string name;
    int quantity;
    double price;
};

int main()
{
    Item inventory[100];
    int count=0,choice,id;
    string name;

    do 
    {
        cout<<"\n===== Inventory Management Menu ====="<<endl;
        cout<<"1. Add Item"<<endl;
        cout<<"2. Display Inventory"<<endl;
        cout<<"3. Search Item"<<endl;
        cout<<"4. Update Item"<<endl;
        cout<<"5. Delete Item"<<endl;
        cout<<"6. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice) 
        {
            case 1: 
                if(count>=100) 
                {
                    cout<<"Inventory full!"<<endl;
                } 
                else 
                {
                    cout<<"Enter Item ID: ";
                    cin>>inventory[count].id;
                    cout<<"Enter Item Name: ";
                    cin>>inventory[count].name;
                    cout<<"Enter Quantity: ";
                    cin>>inventory[count].quantity;
                    cout<<"Enter Price: ";
                    cin>>inventory[count].price;
                    count++;
                    cout<<"Item added successfully."<<endl;
                }
                break;

            case 2: 
                if(count==0) 
                {
                    cout<<"Inventory is empty!"<<endl;
                } 
                else 
                {
                    cout<<"\nID\tName\tQuantity\tPrice"<<endl;
                    for(int i=0;i<count;i++) 
                    {
                        cout<<inventory[i].id<<"\t" 
                            <<inventory[i].name<<"\t" 
                            <<inventory[i].quantity << "\t\t" 
                            <<inventory[i].price<<endl;
                    }
                }
                break;

            case 3:
                cout<<"Enter Item ID to search: ";
                cin>>id;
                {
                    bool found=false;
                    for(int i=0;i<count;i++) 
                    {
                        if(inventory[i].id==id) 
                        {
                            cout<<"Item Found: "<<inventory[i].name 
                                <<", Quantity: "<<inventory[i].quantity 
                                <<", Price: "<<inventory[i].price<<endl;
                            found=true;
                            break;
                        }
                    }
                    if(!found) cout<<"Item not found."<<endl;
                }
                break;

            case 4: 
                cout<<"Enter Item ID to update: ";
                cin>>id;
                {
                    bool found=false;
                    for(int i=0;i<count;i++) 
                    {
                        if(inventory[i].id==id) 
                        {
                            cout<<"Enter new name: ";
                            cin>>inventory[i].name;
                            cout<<"Enter new quantity: ";
                            cin>>inventory[i].quantity;
                            cout<<"Enter new price: ";
                            cin>>inventory[i].price;
                            cout<<"Item updated successfully." << endl;
                            found=true;
                            break;
                        }
                    }
                    if(!found) cout<<"Item not found."<<endl;
                }
                break;

            case 5:
                cout<<"Enter Item ID to delete: ";
                cin>>id;
                {
                    bool found=false;
                    for(int i=0;i<count;i++) 
                    {
                        if(inventory[i].id==id) 
                        {
                            for(int j=i;j<count-1;j++) 
                            {
                                inventory[j]=inventory[j+1];
                            }
                            count--;
                            cout<<"Item deleted successfully."<<endl;
                            found=true;
                            break;
                        }
                    }
                    if(!found) cout<<"Item not found."<<endl;
                }
                break;

            case 6:
                cout<<"Exiting program. Goodbye!"<<endl;
                break;

            default:
                cout<<"Invalid choice. Try again."<<endl;
        }
    } while(choice !=6);

    return 0;
}
