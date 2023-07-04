#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0
class calculator {
  int height;
  int weight ;
  
  public:
    calculator (int w, int h){
      this->height= h;
      this->weight= w;
    }
    
    float bmi(){
      float x = (weight*10000);
      float y =(height*height) ;
      cout<< x << endl<< y << endl;
      return x/y;
    }
};

int main()
{
    //cout << "Hello, Dcoder!";
    calculator s(52,172);
    cout<<s.bmi();
    return 0;
}