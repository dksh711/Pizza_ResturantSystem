#include<iostream>
#include<cstring>

using namespace std;

class earn {
protected:
    double amount;

public:
    earn();
    earn(double a);
    void setamount(double a);
    double getamount();

};
earn::earn()
{
    amount = 200.0;
    cout << "this is default contructor";
}
earn::earn(double a)
{
    amount = a;
    cout << "paratermized contructor called";
}
void earn::setamount(double a)
{
    amount = a;
}
double earn::getamount()
{
    return amount;
}


class product :public virtual earn
{
public:
    int quan;
    string name;

    int id;
    double percost;
    double persell;
    double cost;
    double sell;
    product();
    product(int q, string n, int i, double pcost, double psell)
    {
        quan = q;
        name = n;
        id = i;
        percost = pcost;
        persell = psell;

    }
    void cal();


    void set();
    void get();

};
void product::cal()
{
    cost = percost * quan;
    sell = persell * quan;
    amount = amount + (sell - cost) * 365;
}

void product::set()
{

    cout << "\nnumber of products produced? : ";
    cin >> quan;

    cout << "\ninput product name: ";
    cin >> name;
    cout << "\ninput product id: ";
    cin >> id;
    cout << "\ninput cost price of product: ";
    cin >> percost;
    cout << "\ninput selling price of product: ";
    cin >> persell;
    cout << "\ntotal product quantity: ";
    cin >> quan;
    cal();



}

void product::get()
{
    cout << quan << name << id << percost << persell;

}

class staff :public virtual earn
{
protected:
    double salary;
    string post;
    string name;
    int empid;
    int postquan;
    int contact;
public:
    staff(double s, string p, int i, int pq, int c, string n)
    {
        salary = s;
        post = p;
        name = n;
        empid = i;
        postquan = pq;
        contact = c;

    }
    void cal();

    void setstaff();
    void getstaff();

};
void staff::cal()
{
    amount = (amount - salary * postquan) * 12;
}

void staff::setstaff()
{

    cout << "\ninput number of employees: ";
    cin >> postquan;


    cout << "\nEnter name of staff: ";
    cin >> name;
    cout << "\ninput employee ID : ";
    cin >> empid;
    cout << "\ninput employee name : ";
    cin >> post;
    cout << "\ninput employee contact number : ";
    cin >> contact;
    cout << "\ninput salary: ";
    cin >> salary;
    cout << "\n";
    cal();




}
void staff::getstaff()
{

    cout << "\nnumber of working employees: " << postquan << "\nemployee id: " << empid << "\nemployee name :" << post << "\nemployee contact number :" << contact << "\nemployee salary: " << salary;

}


class menu
{
public:

    void risk();
};
void menu::risk()
{


    char name[30], pizza1[] = "CHICKEN FAJITA", pizza2[] = "CHICKEN BAR-B-Q", pizza3[] = "VEGETABLE PIZZA", pizza4[] = "SPICY SPECIAL", roll1[] = "CHICKEN CHATNI ROLL", roll2[] = "CHICKEN MAYO ROLL", roll3[] = "CHICKEN PARATHA ROLL", bur1[] = "ZINGER BURGER", bur2[] = "CHICKEN BURGER", bur3[] = "BEEF BURGER";
    char sand1[] = "CLUB SANDWICH", sand2[] = "CHICKEN CRISPY SANDWICH", sand3[] = "EXTREME VEG SANDWICH";
    int order = 1;
    cout << "\n\n  \t\t\t\t\t\t\t\t    ******* MY SHOP *******            \n" << endl;
    cout << "\n\t\t\t\t\t\t\t ________________________________________________" << endl;
    cout << "\t\t \t\t\t\t\t|                    MENU                        |" << endl;
    cout << "\t\t \t\t\t\t\t|________________________________________________|" << endl;
    if (order >= 1 || order <= 13)
    {
        cout << "\t\t \t\t\t\t\t|  (1)  " << pizza1 << "   \t\tRS.1500  |" << endl;
        cout << "\t\t \t\t\t\t\t|  (2)  " << pizza2 << "   \t\tRS.1450  |" << endl;
        cout << "\t\t \t\t\t\t\t|  (3)  " << pizza3 << "   \t\tRS.2100  |" << endl;
        cout << "\t\t \t\t\t\t\t|  (4)  " << pizza4 << "        \t\tRS.1100  |" << endl;
        cout << "\t\t \t\t\t\t\t|  (5)  " << bur1 << "   \t\tRS.200   |" << endl;
        cout << "\t\t \t\t\t\t\t|  (6)  " << bur2 << "   \t\tRS.198   |" << endl;
        cout << "\t\t \t\t\t\t\t|  (7)  " << bur3 << "         \t\tRS.299   |" << endl;
        cout << "\t\t \t\t\t\t\t|  (8)  " << sand1 << "   \t\tRS.90    |" << endl;
        cout << "\t\t \t\t\t\t\t|  (9)  " << sand2 << "   \tRS.75    |" << endl;
        cout << "\t\t \t\t\t\t\t|  (10) " << sand3 << "      \tRS.50    |" << endl;
        cout << "\t\t \t\t\t\t\t|  (11) " << roll1 << "         \tRS.80    |" << endl;
        cout << "\t\t\t\t\t\t\t|  (12) " << roll2 << " \t\tRS.60    |" << endl;
        cout << "\t\t \t\t\t\t\t|  (13) " << roll3 << "      \tRS.30    |" << endl;
        cout << "\t\t \t\t\t\t\t|\t\t                                 |" << endl;
        cout << "\t\t \t\t\t\t\t|________________________________________________|" << endl;

        cin.ignore();

        cout << "\n \t ENTER YOUR NAME: ";
        cin.getline(name, 30);

        cout << "\n\n\tWELCOME! " << name << endl;

    }
}
class loop : public menu
{
public:
    void clear();

};

void loop::clear()
{


    char name[30], address[50], pizza1[] = "CHICKEN FAJITA", pizza2[] = "CHICKEN BAR-B-Q", pizza3[] = "VEGETABLE PIZZA", pizza4[] = "SPICY SPECIAL", roll1[] = "CHICKEN CHATNI ROLL", roll2[] = "CHICKEN MAYO ROLL", roll3[] = "CHICKEN PARATHA ROLL", bur1[] = "ZINGER BURGER", bur2[] = "CHICKEN BURGER", bur3[] = "BEEF BURGER";
    char sand1[] = "CLUB SANDWICH", sand2[] = "CHICKEN CRISPY SANDWICH", sand3[] = "EXTREME VEG SANDWICH";
    char ch;

    int order;
    int qty1 = 0, qty2 = 0, qty3 = 0, qty4 = 0, qty5 = 0, qty6 = 0, qty7 = 0, qty8 = 0, qty9 = 0, qty10 = 0, qty11 = 0, qty12 = 0, qty13 = 0;

    double AmountofSale1 = 0, AmountofSale2 = 0, AmountofSale3 = 0, AmountofSale4 = 0, AmountofSale5 = 0, AmountofSale6 = 0, AmountofSale7 = 0, AmountofSale8 = 0, AmountofSale9 = 0, AmountofSale10 = 0, AmountofSale11 = 0, AmountofSale12 = 0, AmountofSale13 = 0;
    double total;


    do
    {

        cout << "\n\tFROM THE LIST OF FOOD WHAT WOULD YOU LIKE TO HAVE : ";
        cin >> order;
        if (order >= 1 || order <= 13)

            begining:
        switch (order)
        {
        case 1:
            cout << "\n\tENTER HOW MANY " << pizza1 << " WOULD YOU LIKE TO ORDER : ";
            cin >> qty1;
            AmountofSale1 = 1500 * qty1;
            break;
        case 2:
            cout << "\n\tENTER HOW MANY " << pizza2 << " WOULD YOU LIKE TO ORDER : ";
            cin >> qty2;
            AmountofSale2 = 1450 * qty2;
            break;
        case 3:
            cout << "\n\tENTER HOW MANY " << pizza3 << " WOULD YOU LIKE TO ORDER : ";
            cin >> qty3;
            AmountofSale3 = 2100 * qty3;
            break;
        case 4:
            cout << "\n\tENTER HOW MANY " << pizza4 << " WOULD YOU LIKE TO ORDER : ";
            cin >> qty4;
            AmountofSale4 = 1100 * qty4;
            break;
        case 5:
            cout << "\n\tENTER HOW MANY " << bur1 << " WOULD YOU LIKE TO ORDER : ";
            cin >> qty5;
            AmountofSale5 = 200 * qty5;
            break;
        case 6:
            cout << "\n\tENTER HOW MANY " << bur2 << " WOULD YOU LIKE TO ORDER : ";
            cin >> qty6;
            AmountofSale6 = 198 * qty6;
            break;
        case 7:
            cout << "\n\tENTER HOW MANY " << bur3 << " WOULD YOU LIKE TO ORDER : ";
            cin >> qty7;
            AmountofSale7 = 299 * qty7;
            break;
        case 8:
            cout << "\n\tENTER HOW MANY " << sand1 << " WOULD YOU LIKE TO ORDER : ";
            cin >> qty8;
            AmountofSale8 = 90 * qty8;
            break;
        case 9:
            cout << "\n\tENTER HOW MANY " << sand2 << " WOULD YOU LIKE TO ORDER : ";
            cin >> qty9;
            AmountofSale9 = 75 * qty9;
            break;
        case 10:
            cout << "\n\tENTER HOW MANY " << sand3 << " WOULD YOU LIKE TO ORDER : ";
            cin >> qty10;
            AmountofSale10 = 50 * qty10;
            break;
        case 11:
            cout << "\n\tENTER HOW MANY " << roll1 << " WOULD YOU LIKE TO ORDER : ";
            cin >> qty11;
            AmountofSale11 = 80 * qty11;
            break;
        case 12:
            cout << "\n\tENTER HOW MANY " << roll2 << " WOULD YOU LIKE TO ORDER : ";
            cin >> qty12;
            AmountofSale12 = 60 * qty12;
            break;
        case 13:
            cout << "\n\tENTER HOW MANY " << roll3 << " WOULD YOU LIKE TO ORDER : ";
            cin >> qty13;
            AmountofSale13 = 30 * qty13;
            break;
        default:
            cout << "\n\tYOU ENTERED AN INVALID ITEM";

            cout << " \n\tPLEASE CHOOSE A VALID ITEM FROM THE LIST:";
            cin >> order;

            if (order >= 1 || order <= 13)
            {
                goto begining;
            }
        }

        cout << "\n\tDO YOU WANT TO ORDER ANYTHING ELSE?(Y or N):";
        cin >> ch;

        if (ch == 'n' || ch == 'N')
        {
            break;
        }
    }

    while (ch == 'y' || ch == 'Y');
    cout << "\n\tYOU HAVE ORDERED: \n" << endl;
    cout << " \t~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~" << endl;
    cout << " \t|         ITEM" << "\t\t\t  QUANTITY" << "\t  ITEM PRICE" << "\t      SALE AMOUNT |" << endl;
    cout << " \t~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~" << endl;
    cout << "\t|\t" << pizza1 << "\t\t     " << qty1 << "\t\t   " << "RS.1500 " << "\t\t  " << AmountofSale1 << endl;
    cout << "\t|\t" << pizza2 << "\t\t     " << qty2 << "\t\t   " << "RS.1450 " << "\t\t  " << AmountofSale2 << endl;
    cout << "\t|\t" << pizza3 << "\t\t     " << qty3 << "\t\t   " << "RS.2100 " << "\t\t  " << AmountofSale3 << endl;
    cout << "\t|\t" << pizza4 << "\t\t     " << qty4 << "\t\t   " << "RS.1100 " << "\t\t  " << AmountofSale4 << endl;
    cout << "\t|\t" << bur1 << "\t\t     " << qty5 << "\t\t   " << "RS.200  " << "\t\t  " << AmountofSale5 << endl;
    cout << "\t|\t" << bur2 << "\t\t     " << qty6 << "\t\t   " << "RS.198  " << "\t\t  " << AmountofSale6 << endl;
    cout << "\t|\t" << bur3 << "\t\t     " << qty7 << "\t\t   " << "RS.299  " << "\t\t  " << AmountofSale7 << endl;
    cout << "\t|\t" << sand1 << "\t\t     " << qty8 << "\t\t   " << "RS.90   " << "\t\t  " << AmountofSale8 << endl;
    cout << "\t|\t" << sand2 << "\t     " << qty9 << "\t\t   " << "RS.75    " << "\t\t  " << AmountofSale9 << endl;
    cout << "\t|\t" << sand3 << "\t     " << qty10 << "\t\t   " << "RS.50    " << "\t\t  " << AmountofSale10 << endl;
    cout << "\t|\t" << roll1 << "\t     " << qty11 << "\t\t   " << "RS.80    " << "\t\t  " << AmountofSale11 << endl;
    cout << "\t|\t" << roll2 << "\t     " << qty12 << "\t\t   " << "RS.60    " << "\t\t  " << AmountofSale12 << endl;
    cout << "\t|\t" << roll3 << "\t     " << qty13 << "\t\t   " << "RS.30    " << "\t\t  " << AmountofSale13 << endl;
    cout << "\t|___________________________________________________________________________________" << endl;
    total = AmountofSale1 + AmountofSale2 + AmountofSale3 + AmountofSale4 + AmountofSale5 + AmountofSale6 + AmountofSale7 + AmountofSale8 + AmountofSale9 + AmountofSale10 + AmountofSale11 + AmountofSale12 + AmountofSale13;
    cout << "\t|                                                             TOTAL=     " << total << endl;
    cout << "\t|___________________________________________________________________________________" << endl;

}


class payment : public  loop
{
    int payment;
    int pin, i, j, accnum;
public:
    void pay();



    void displaymessage();


    void exit();


};
void payment::pay() {

    cout << "\n\tPLEASE ENTER YOUR PAYMENT METHOD : ";
    cout << "\n\tENTER 1 FOR CASH OPTION:";
    cout << "\n\tENTER 2 FOR CARD PAYMENT:\n";
    cout << "\t-----------------\n";
    cout << "\t ENTER CHOICE: ";
    cin >> payment;
    cout << "\t-----------------\n";
    if (payment == 1)
    {
        cout << "\tYou Choosed Cash Option";

    }

    else if (payment == 2)
    {
        cout << "\tEnter Your 10-digit Account Number : ";
        cin >> accnum;
        cout << "\tEnter Your 4-digit PIN: ";
        cin >> pin;
    }
}
void payment::displaymessage()

{

    cout << "\n\n\t         THANK YOU FOR YOUR ORDER.THE ORDER WILL BE READY IN 10 mins." << endl;
    cout << "      \t                            STAY HOME.STAY SAFE.                       " << endl;
    cout << "\n      \t                          MADE & DESIGNED BY: Danish \n\t\t\t\t\t\t      Aman  \n\t\t\t\t\t\t      Zafar  \n\t\t\t\t\t\t      Abdul" << endl;
}

void payment::exit()
{
    char p;
    cout << "\n\n\tDO YOU WANT TO EXIT(Y OR N): ";
    cin >> p;

    if (p == 'n' || p == 'N')
    {
        risk();
        clear();
        pay();
        displaymessage();
        exit();
    }

    if (p == 'y' || p == 'Y')
    {
        cout << "\t\n";
    }
}


class amounta :public staff, public product
{
    int ch;
    string name;

public:
    amounta(int c, string n, int q, string npr, int i, double pcost, double psell, double s, string p, int j, int pq, int cs, string nm) : product(q, npr, i, pcost, psell), staff(s, p, j, pq, cs, nm)
    {
        ch = c;
        name = n;
    }
    void add();


};


void amounta::add() {

    if (id == 1) {


        while (true)
        {
            cout << "1.)Input for product\n2.)Input for employee\n3.)Exit\n";
            cout << "Enter choice\n";
            cin >> ch;

            if (ch == 1) {                      ////////////////////////////////////////////////////
                get();

                cout << amount;

            }
            else if (ch == 2) {
                getstaff();

                cout << amount;

            }
            else if (ch == 3)
            {
                break;
            }

            else
            {

                cout << "\nInvaid Option. Please re-enter\n\n";
            }
        }

    }
    else
    {
        cout << "TU ADMIN NAHI BHAG YAHA SAE\n";
    }
}




int main() {

    cout << "\n\n\n\n\n\n    \t\t\t\t\t==========================================================================\n";
    cout << "  \t\t\t\t\t||\t                                                                ||\n";
    cout << "        \t\t\t\t||\t\t\t   WELCOME TO MY SHOP                           ||\n";
    cout << "  \t\t\t\t\t||\t                                                                ||\n";
    cout << "  \t\t\t\t\t||\t                                                                ||\n";
    cout << "  \t\t\t\t\t||\t=========================================================       ||\n";
    cout << "  \t\t\t\t\t||\t=========================================================       ||\n";
    cout << "  \t\t\t\t\t||\t||                                                     ||       ||\n";
    cout << "  \t\t\t\t\t||\t||                                                     ||       ||\n";
    cout << "  \t\t\t\t\t||\t||                                                     ||       ||\n";
    cout << "  \t\t\t\t\t||\t||                                                     ||       ||\n";
    cout << "  \t\t\t\t\t||\t||                                                     ||       ||";




    amounta a(2, "danish", 5, "wheat", 6, 6000.5, 8000.0, 2.0, "ali", 7, 3, 1, "nuer");
    a.add();
    menu m;
    m.risk();
    loop l;
    l.clear();
    payment p;
    p.pay();
    p.displaymessage();





    return 0;
}
