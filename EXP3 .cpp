
//EXP3

#include<iostream>
using namespace std;
class publications
{
    protected:
        float price;
        string title;
    
    public:
        void details()
        {
            cout<<"enter the title:";
            cin>>title;
            
            cout<<"enter price:";
            cin>>price;

            if (price<0)
                throw price;
        
        }
        void display()
        {
            cout<<"the tiltle of book is:",title;
            cout<<"the price of book is:",price;

        }

        void setting_zero()
        {
            title="invalid";
            price=0;
            
        }
};


class book : public publications
{
    private:
        int pagecount;

    public:
        void details_book()
        {
            try
            {
                void
                cout<<"enter page numbers=";
                cin>>pagecount;
                if (pagecount<0)
                    throw pagecount;
            }
            catch(...........)
            {
            cout<<"Invalid pagecount input! enter valid enteties";
            cout<<"pagecount=0";
            }
            
        }

        void display_book()
        {
            cout<<"**********book details**********";
            details();
            cout<<"page count is:",pagecount;
        }
};


class disc : public publications
{
    private:
        int time;

    public:
        void details_disc()
        {
            try
            {   details();
                cout<<"enter time of playing=";
                cin>>time;
                if (time<0)
                    throw time;
            }
            catch(...........)
            {
            cout<<"Invalid time input! enter valid enteties";
            cout<<"time of playing=0";
            }
            
        }

        void display_disc()
        {
            cout<<"**********disc details**********";
            details();
            cout<<"playing time is:",pagecount;
        }
};

