#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
    int choice;
    cout<<"Welcome to the Library system!"<<endl<<"1.Admin\n"<<"2.Member\n"<<"3.Exit\n"<<"Enter your choice: ";
    cin>>choice;

    string admin_ID = "M101", usr_input, member_id = "AA23";
    int passwd, attempts = 0;
    bool b = true;
    int book1 = 3, book2 = 2, book3 = 3, book4 = 1, book_choice;

    int sr_1 = 112, sr_2 = 119, sr_3 = 1156, sr_4 = 1123;
    char exitn;
    if (choice == 3) 
    {
        cout<<"Exiting, Thank you!!\n";
        return 3;
    }
    else if (choice == 1) 
    {
        while (true) 
        {
            if (attempts > 3) 
            {
                cout<<"LOCKED, ALL ATTEMPTS USED!\n";
                return 1;
            }

            cout<<"Enter ID: ";
            cin>>usr_input;

            if (usr_input != admin_ID)
            {
                    cout<<"ID NOT FOUND\n";
                    attempts++;
                    continue;
            }

            else 
                break;
        }

        attempts = 0;

        while (true)
        {
            if (attempts > 3) 
            {
                cout<<"All attempts used, terminating!\n";
                return 2;
            }
            cout<<"Enter password: ";
            cin>>passwd;
            if (passwd != 12345) 
            {
                cout<<"Wrong Password\n";
                attempts++;
                continue;
            }
            else if (passwd == 12345)
            {
                break;
            }
        }
            while (true)
            {
                cout<<"Welcome Admin!!\n"<<"1. View List of Members\n"<<"2. View All available books\n"<<"Enter your choice: ";
                cin>>choice;

                if ( choice == 1) 
                {
                    cout<<"Member ID"<<setw(10)<<"Name\n"<<"1"<<setw(10)<<"Hamza Shahzad\n"<<"2"<<setw(10)<<"Asad Zahid\n"<<"3"<<setw(10)<<"Adan Mehmood\n";

                }
                else if (choice == 2)
                {
                        cout<<"Book ID"<<setw(10)<<"Book Name"<<setw(10)<<"Quantity\n"<<"112"<<setw(10)<<"The Lord of the Rings"<<setw(10)<<"3\n"<<"119"<<setw(10)<<"Harry Potter and the Prisoner of Azkaban"<<setw(10)<<"2\n";
                        cout<<"1156"<<setw(10)<<"Great Expectations"<<setw(10)<<"3\n"<<"1123"<<setw(10)<<"Little Women"<<setw(10)<<"1\n";
                }
                cout<<"Do you want to continue(y/n)? ";
                cin>>exitn;
                if (exitn == 'y')
                {
                    continue;
                }
                break;
            }
        }
    else if (choice == 2)
    {
        while (true)
        {
            if (attempts > 1) {
                cout<<"All Attempts used!! Terminating\n";
                return 4;
            }
            cout<<"Enter ID: ";
            cin>>usr_input;

            if(usr_input != member_id)
            {
                cout<<"Invalid Member ID\n";
                attempts++;
                continue;
            } 
            break;
        }
        attempts = 0;

        while (true)
        {
            if (attempts > 1)
            {
                cout<<"All Attempts Used, Terminating\n";
                return 5;
            }
            cout<<"Enter Password: ";
            cin>>passwd;

            if(passwd != 12345)
            {
                cout<<"Invalid Member ID\n";
                attempts++;
                continue;
            } 
            break;
        }
        while (true)
        {
            cout<<"Welcome Member!!\n"<<"1. View Available Books\n"<<"2. Borrow a Book\n"<<"3. Return a Book\n"<<"Enter your choice: ";
            cin>>choice;
            if (choice == 1)
            {
                cout<<"Available Books:\n"<<"112- The Lord of the rings (Qty "<<book1<<" )\n"<<"119- Harry Potter And the Prisoner of Azkaban (Qty  "<<book2<<" )\n"<<"1156- Great Expectations (Qty  "<<book3<<" )\n"<<"1123- Little Women (Qty  "<<book4<<" )\n";
            }
            else if (choice == 2)
            {
                while (true)
                {
                    cout<<"Enter Book Serial Number of the book you want to borrow: ";
                    cin>>book_choice;
                    if (book_choice != sr_1 && book_choice != sr_2 && book_choice != sr_3 && book_choice != sr_4)        
                    {
                        cout<<"Invalid Book Serial Number!!\n";
                        continue;
                    }
                    break;
                }
                if (book_choice == sr_1 && book1 > 0)
                {
                    cout<<"Book is availabe, Thank you for borrowing\n";
                    book1--;
                }
                else if (book_choice == sr_2 && book2 > 0)
                {
                    cout<<"Book is available, Thank you for borrowing\n";
                    book2--;
                }
                else if (book_choice == sr_3 && book3 > 0)
                {
                    cout<<"Book is available, Thank you for borrowing\n";
                    book3--;
                }
                else if (book_choice == sr_4 && book4 > 0)
                {
                    cout<<"Book is available, Thank you for borrowing\n";
                    book4--;
                }
                else 
                {
                    cout<<"Book is not available\n";
                }
            }

            else if (choice == 3)
            {
                while (true)
                {
                    cout<<"Enter Book Serial Number of the book you want to Return: ";
                    cin>>book_choice;
                    if (book_choice != sr_1 && book_choice != sr_2 && book_choice != sr_3 && book_choice != sr_4)        
                    {
                        cout<<"Invalid Book Serial Number!!\n";
                        continue;
                    }
                    break;
                }
                cout<<"Thank You for Returning\n";
            }
            cout<<"Do you want to exit(y/n): ";
            cin>>exitn;
            if (exitn == 'n'){
                continue;
            }
            break;
        }
    }

    return 0;
}

