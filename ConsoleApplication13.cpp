#include <iostream>
using namespace std;

template<typename T>
class Swapper
{
public:
   static void Swap(T& f_num,T& s_num) 
   {
       T temp = f_num;
       f_num = s_num;
       s_num = temp;
   }
};



int main()
{
    int x, y;
    cin >> x;
    cin >> y;
    cout << "\n\n";

    Swapper<int>::Swap(x,y); 

    cout  << x << "\n";
    cout <<  y << "\n";

}


