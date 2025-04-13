#include <iostream>
#include <windows.h>
#include <ctime>
using namespace std;

void login();
void deposit_milk();
void menu();
void meal();
void dairyProduct();
void about();

class info
{
public:
    char name[50];
    int no, fat;
    float milk;
    char day[10];

public:
    void getdata()
    {
        cout << "\nEnter Your Name (without space): ";
        cin >> name;
        cout << "\nEnter Your choice.: ";
        cin >> no;
        cout << "\nEnter Morning OR Evening time: ";
        cin >> day;
        cout << "\nEnter Milk in liters: ";
        cin >> milk;
        cout << "\nEnter Milk fat: ";
        cin >> fat;
    }
    void putdata();
};

void info::putdata()
{
    float fat_rate = 6.43, total;
    float fat_t = (fat * fat_rate);
    total = (fat * fat_rate) * milk;
    system("cls");
    cout << "\n\tYOUR BILL-";
    cout << "\n\t\t  ====================================";
    cout << "\n\t\t|          Anand milk dairy           |" << endl;
    cout << "\n\t\t  Name : " << name << "       No:" << no << endl;
    cout << "\n\t\t  Milk session: " << day << endl;
    cout << "\n\t\t  Milk : " << milk << " Litre"
         << "      Fat: " << fat << endl;
    cout << "\n\t\t| Fat rate: " << fat_t << "     Total: " << total << "rs  |";
    cout << "\n\t\t  ====================================" << endl;
}

char user[50];
int pass;
int i, opt;

int main()
{
    login();
    menu();
}

void login()
{
    cout << "\n\n\t\t\t|--------------LOGIN----------------|" << endl;
    cout << "\n\t\t\t Enter User_name(Without space): ";
    cin >> user;
    cout << "\n\t\t\t Enter Password[1971]: ";
    cin >> pass;
    cout << "\n\t\t\t|-----------------------------------|" << endl;
    if (pass == 1971)
    {
        system("cls");
        cout << "\n\tSuccessfully logged in";
        for (int i = 0; i < 10; i++)
        {
            cout << ".";
            Sleep(250);
        }
        Beep(523, 900);
    }
    else
    {
        cout << "\nERROR.....! PLEASE CHECK YOUR PASSWORD.";
        main();
    }
}

void deposit_milk()
{
    info n;
    int animal;
    char back;

    cout << "\n\n________________\n";
    cout << "\nEnter your Milk animal NO. from below";
    cout << "\n\n\t|1. BUFFALO |2. COW |\n";
    cin >> animal;

    if (animal == 1)
        cout << "\nYou choose 'BUFFALO' \n";
    else if (animal != 1 && animal != 2)
    {
        cout << "\nError! Choose only option [1/2] ....." << endl;
        Sleep(2500);
        system("cls");
        deposit_milk();
    }
    else
        cout << "\nYou choose 'COW' \n";

    n.getdata();
    n.putdata();
    cout << "\nWant to go back to the Menu [y/n]-";
    cin >> back;

    if (back == 'y' || back == 'Y')
    {
        menu();
    }
    else
    {
        deposit_milk();
    }
}

void menu()
{
    system("cls");

    cout << "\n\n\t\tWelcome to Anand milk dairy [ " << user << " ]";
    time_t my_time = time(NULL);

    cout << "\t    DATE: " << ctime(&my_time);
    cout << "\n\n1. Milk";
    cout << "\n2. Animal MEAL";
    cout << "\n3. book dairy products";
    cout << "\n4. About our Dairy";
    cout << "\n5. Logout";

    cout << "\n\nEnter option: ";
    cin >> opt;

    switch (opt)
    {
    case 1:
        deposit_milk();
        break;

    case 2:
        meal();
        break;

    case 3:
        dairyProduct();
        break;

    case 4:
        about();
        break;
    case 5:
        cout << "\n\t\t\tThank you | book again for dairy related services";
        exit(0);
    default:
        break;
    }
}

void meal()
{
    system("cls");
    long int prod, how;
    char go;
    long int totalval;
    cout << "\n\t\t\t-- OUR ANIMAL  PRODUCTS --";
    cout << "\n\t\t ============================================";
    cout << "\n\t\t| 1.Mahalakshmi Animal MEAL        - 1100rs  |";
    cout << "\n\t\t| 2.Mahalakshmi Bhusa              - 1000rs  |";
    cout << "\n\t\t| 3.For growth in Milk-Products    - 350rs   |";
    cout << "\n\t\t ============================================";

    cout << "\n\n\t*Enter Any Above Option for buying Products: ";
    cin >> prod;

    switch (prod)
    {
    case 1:
        cout << "\n\n\tYou choose - Mahalakshmi Animal ";
        cout << "\n\n\tEnter how many meal bags you want :- ";
        cin >> how;

        totalval = 1100 * how;

        cout << "\n\tYour Bill-";
        cout << "\n\t\t _______________";
        cout << "\n\t\t|           Anand MILK DAIRY                |";
        cout << "\n\n\t\t  Product name                Quantity   ";
        cout << "\n\n\t\t  *Mahalakshmi Animal       " << how;
        cout << "\n\n\t\t          Total Bill-" << totalval << "rs";
        cout << "\n\t\t|_______________|";
        break;

    case 2:
        cout << "\nYou choose - Mahalakshmi Bhusa ";
        cout << "\n\nEnter how many bhusa bags you want :- ";
        cin >> how;

        totalval = 1000 * how;

        cout << "\n\tYour Bill-";
        cout << "\n\t\t _______________";
        cout << "\n\t\t|           Anand  MILK DAIRY             |";
        cout << "\n\n\t\t  Product name                 Quantity   ";
        cout << "\n\n\t\t  *Mahalakshmi Animal Bhusa       " << how;
        cout << "\n\n\t\t          Total Bill-" << totalval << "rs";
        cout << "\n\t\t|_______________|";
        break;

    case 3:
        cout << "\nYou choose - Milk growth products ";
        cout << "\n\nEnter how many product you want :- ";
        cin >> how;

        totalval = 350 * how;

        cout << "\n\tYour Bill-";
        cout << "\n\t\t _______________";
        cout << "\n\t\t|          Anand  MILK DAIRY              |";
        cout << "\n\n\t\t   Product name                Quantity   ";
        cout << "\n\n\t\t  *growth in Milk-Product        " << how;
        cout << "\n\n\t\t          Total Bill-" << totalval << "rs";
        cout << "\n\t\t|_______________|";
        break;

    default:
        cout << "\n\t\tPlz Enter option between 1 to 3";
        Sleep(1000);
        meal();
        break;
    }
    cout << "\n\nWant to go back to the main menu [y/n] : ";
    cin >> go;

    if (go == 'y' || go == 'Y')
        menu();
    else
        meal();
}

void dairyProduct(){
    system("cls");
    cout << "\n\n\t\t-- OUR DAIRY PRODUCTS --";
    cout << "\n\t\t ============================================";
    cout << "\n\t\t| 1. Milk                                |";
    cout << "\n\t\t| 2. Curd                                |";
    cout << "\n\t\t| 3. Butter                              |";
    cout << "\n\t\t| 4. Ghee                                |";
    cout << "\n\t\t| 5. Paneer                              |";
    cout << "\n\t\t ============================================";
    cout<<"book successfully dairy products deliver in 10 min";
    cout << "\n\nPress 'M' to go back to the main menu: ";
    char back;
    cin >> back;

    if (back == 'M' || back == 'm')
        menu();
    else
        dairyProduct();
}

void about()
{
    system("cls");
    cout << "\n\n\t\tAbout ANAND milk dairy";
    cout << "\n\t\t ============================================";
    cout << "\n\t\t|  ANAND milk dairy is a leading dairy      |";
    cout << "\n\t\t|  in the region, providing quality dairy   |";
    cout << "\n\t\t|  products to our customers. We are        |";
    cout << "\n\t\t|  committed to delivering fresh and        |";
    cout << "\n\t\t|  nutritious milk products.                |";
    cout << "\n\t\t|  contact us-6299514732  |";
    cout << "\n\t\t|  email-ravidairy4321@gmail.com           |";
    cout << "\n\t\t|  address- asni, near bus stand, bhojpur           |";
    cout << "\n\t\t| reach us at our insta id-kumar_ravi7428                   |";

    cout << "\n\t\t ============================================";

    cout << "\n\nPress 'M' to go back to the main menu: ";
    char back;
    cin >> back;

    if (back == 'M' || back == 'm')
        menu();
    else
        about();
}