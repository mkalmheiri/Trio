#include <iostream>
using namespace std;

void greatestToLeast(int&, int&, int&);

int main()
{
        //DO NOT CHANGE WITHIN THIS AREA...
        int red, blue, green;
        cout<<"Enter Red, Green, and Blue values: ";
        cin>>red>>green>>blue;
        //...END OF "DO NOT CHANGE" AREA


        greatestToLeast(red, green, blue);


        //DO NOT CHANGE WITHIN THIS AREA...
        cout<<"Rearranged....\n";
        cout<<"RGB: "<<red<<","<<green<<","<<blue<<endl;
        return 0;
        //...END OF "DO NOT CHANGE" AREA
}

void greatestToLeast(int& greatest, int& middle, int& least)
{ 
        int number;
        while(greatest < middle || middle < least || greatest < least)
        {
                if(middle > greatest)
                {
                        number = greatest;
                        greatest = middle;
                        middle = number;
                }
                if(least > middle)
                {
                        number = middle;
                        middle = least;
                        least = number;
                }
                if(least > greatest)
                {
                        number = greatest;
                        greatest = least;
                        least = number;
                }
        }
}

